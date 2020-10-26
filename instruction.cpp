#include "instruction.h"

Instruction::Instruction (std::string instruction){
    //parseo instruccion
    cout << instruction << '\n';
    this->instruction = instruction;
    std::string instruction_name; 
    std::list <char*> parameters;
    this->instructionType = FindInstructionType(instruction_name, parameters);
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