#include "instructionType.h"

InstructionType:: InstructionType() {
    
}

void InstructionType:: add_tag_code() {
    //Solo las instrucciones jump llaman a etiquetas
}

bool InstructionType:: add_next_instruction() {
    return true;
}