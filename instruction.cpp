#include "instruction.h"

Instruction::Instruction (std::string instruction){
    //parseo instruccion
    cout << instruction << '\n';
    this->instruction = instruction;

    std::string function_name_delimiter = ":";
    std::string command_delimiter = " ";
    std::string arguments_delimiter = ",";

    std::string instruction_name; 
    std::list <char*> parameters;
    //this->instructionType = FindInstructionType(instruction_name, parameters);

    size_t pos = 0;
    std::string token;
    while ((pos = instruction.find(command_delimiter)) != std::string::npos) {
        token = instruction.substr(0, pos);
        std::cout << token << std::endl;
        instruction.erase(0, pos + command_delimiter.length());
    }
    std::cout << instruction << std::endl;
}

InstructionType* Instruction:: FindInstructionType(std::string 
instruction_name, std::list <char*> parameters) {

    bool jump = (std::find(this->jumps.begin(), this->jumps.end(), 
                instruction_name) != this->jumps.end());
    if (jump) {
        if (parameters.size() == 1) {
            return new JumpUnconditional(parameters.back());
        } else if (parameters.size() == 2) {
            return new JumpConditional2Args(parameters.front(), parameters.back());
        } else if (parameters.size() == 3) {
            char* param1 = parameters.front();
            parameters.pop_front();
            char* param2 = parameters.front();
            char* param3 = parameters.back();
            return new JumpConditional3Args(param1, param2, param3);
        }
    } else if (instruction_name == "ret") {
        return new Ret();
    } else {
        return new UndefinedInstruction();
    }
}

bool Instruction:: is_function() {
    return this->_is_function;
}

bool Instruction:: add_next_instruction() {
    return this->instructionType->add_next_instruction();
}