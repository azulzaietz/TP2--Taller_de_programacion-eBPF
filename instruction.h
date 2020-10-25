#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <iostream>
#include "instructionType.h"
using namespace std;

class Instruction {

    std::string instruction;
    InstructionType instructionType;
    
    public:
    Instruction(std::string instruction);
    bool is_function();
    bool add_next_instruction();
    //~Instruction();
};

#endif
