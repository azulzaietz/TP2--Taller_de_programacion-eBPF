#include "instructionType.h"

InstructionType:: InstructionType() {

}

InstructionType:: InstructionType(std::string tag, std::string 
instruction_name, std::list <char*> parameters) {
    bool jump = (std::find(this->jumps.begin(), this->jumps.end(), 
                instruction_name) != this->jumps.end());
    if (jump) {
        if (parameters.size() == 1) {
            this->instruction = new JumpUnconditional(parameters.back());
        } else if (parameters.size() == 2) {
            this->instruction = new JumpConditional2Args(parameters.front(), parameters.back());
        } else if (parameters.size() == 3) {
            char* param1 = parameters.front();
            parameters.pop_front();
            char* param2 = parameters.front();
            char* param3 = parameters.back();
            this->instruction = new JumpConditional3Args(param1, param2, param3);
        }
    } else if (instruction_name == "ret") {
        this->instruction = new Ret();
    } else {
        this->instruction = new InstructionType();
    }
}

void InstructionType:: add_tag_code() {

}

bool InstructionType:: is_function() {

}

bool InstructionType:: add_next_instruction() {

}