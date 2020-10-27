#include "instruction.h"

Instruction::Instruction (std::string instruction){
    this->instruction = instruction;

    std::string token = instruction;

    std::string function_name_delimiter = ":";
    std::string command_delimiter = " ";
    std::string arguments_delimiter = ", ";

    size_t pos = 0;
    for(int j=0; j < token.length(); j++){
        if(isspace(token[j])){
            pos++;
        }
        else{
            break;
        }
    }
    token.erase(0, pos);

    pos = 0;
    if ((pos = token.find(function_name_delimiter)) != std::string::npos) {
        this->_is_function = true;
        this->function_name = token.substr(0, pos);
        token.erase(0, pos + function_name_delimiter.length());

        pos = 0;
        for(int j=0; j < token.length(); j++){
            if(isspace(token[j])){
                pos++;
            }
            else{
                break;
            }
        }
        token.erase(0, pos);
    }
    pos = 0;
    if ((pos = token.find(command_delimiter)) != std::string::npos) {
        this->command_name = token.substr(0, pos);
        token.erase(0, pos + command_delimiter.length());
    }
    pos = 0;
    while ((pos = token.find(arguments_delimiter)) != std::string::npos) {
        this->parameters.push_back(token.substr(0, pos));
        token.erase(0, pos + command_delimiter.length());
    }
    this->parameters.push_back(token.substr(0, token.size()));

    this->instructionType = FindInstructionType(
        this->command_name, this->parameters);
}

InstructionType* Instruction:: FindInstructionType(std::string 
instruction_name, std::list <string> parameters) {

    bool jump = (std::find(this->jumps.begin(), this->jumps.end(), 
                instruction_name) != this->jumps.end());
    if (jump) {
        if (parameters.size() == 1) {
            return new JumpUnconditional(parameters.back());
        } else if (parameters.size() == 2) {
            return new JumpConditional2Args(parameters.front(), parameters.back());
        } else if (parameters.size() == 3) {
            string param1 = parameters.front();
            parameters.pop_front();
            string param2 = parameters.front();
            string param3 = parameters.back();
            return new JumpConditional3Args(param1, param2, param3);
        }
    } else if (instruction_name == "ret") {
        return new Ret(this->parameters);
    }
    return new UndefinedInstruction(this->parameters);
}

bool Instruction:: is_function() {
    return this->_is_function;
}

std::string Instruction:: get_function_name() {
    return this->function_name;
}

bool Instruction:: add_next_instruction() {
    return this->instructionType->add_next_instruction();
}

bool Instruction:: add_tag_code(std::string tag) {
    return this->instructionType->add_tag_code(tag);
}
