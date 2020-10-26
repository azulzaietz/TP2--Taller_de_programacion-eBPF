#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <iostream>
#include "instructionType.h"
#include "jump.h"
#include "jumpUnconditional.h"
#include "jumpConditional2Args.h"
#include "jumpConditional3Args.h"
#include "ret.h"
#include "undefinedInstruction.h"

using namespace std;

class Instruction {

    std::string instruction;
    bool _is_function;
    std:: string function_name;
    InstructionType* instructionType;
    std:: list <const char*> jumps = {"jmp", "ja", "jeq", "jneq", "jne", "jlt", "jle", "jgt", "jge", "jset"};
    InstructionType* FindInstructionType(std::string 
    instruction_name, std::list <char*> parameters);

    
    public:
    Instruction(std::string instruction);
    bool is_function();
    bool add_next_instruction();
    //~Instruction();
};

#endif
