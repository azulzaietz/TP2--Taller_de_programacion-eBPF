#include "instruction.h"

Instruction::Instruction (std::string instruction){
    //parseo instruccion
    cout << instruction << '\n';
    this->instruction = instruction;

    std::string function_name_delimiter = ": ";
    std::string command_delimiter = " ";
    std::string arguments_delimiter = ", ";

    size_t pos = 0;
    std::string token;
    if ((pos = instruction.find(function_name_delimiter)) != std::string::npos) {
        this->_is_function = true;
        this->function_name = instruction.substr(0, pos);
        instruction.erase(0, pos + function_name_delimiter.length());
    }
    if ((pos = instruction.find(command_delimiter)) != std::string::npos) {
        this->command_name = instruction.substr(0, pos);
        instruction.erase(0, pos + command_delimiter.length());
    }
    while ((pos = instruction.find(arguments_delimiter)) != std::string::npos) {
        this->parameters.push_back(instruction.substr(0, pos));
        instruction.erase(0, pos + command_delimiter.length());
    }
    this->parameters.push_back(instruction.substr(0, instruction.size()));

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
        return new Ret();
    }
    return new UndefinedInstruction();
}

bool Instruction:: is_function() {
    return this->_is_function;
}

bool Instruction:: add_next_instruction() {
    return this->instructionType->add_next_instruction();
}