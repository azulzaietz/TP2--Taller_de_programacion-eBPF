#include "instructionType.h"
#include <string>

InstructionType:: InstructionType() {}

bool InstructionType:: add_tag_code(std::string tag) {
    return false;
}

bool InstructionType:: need_tag_code() {
    return false;
}

bool InstructionType:: add_next_instruction() {
    return true;
}

InstructionType:: ~InstructionType() {}
