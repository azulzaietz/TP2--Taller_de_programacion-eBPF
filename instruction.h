#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <iostream>
#include "instructionType.h"
using namespace std;

class Instruction {

    std::string instruction;
    bool _is_function;
    std:: string function_name;
    InstructionType* instructionType;
    std:: list <char*> jumps = {"jmp", "ja", "jeq", "jneq", "jne", "jlt", "jle", "jgt", "jge", "jset"};
    InstructionType* FindInstructionType(std::string 
    instruction_name, std::list <char*> parameters);

    
    public:
    Instruction(std::string instruction);
    bool is_function();
    bool add_next_instruction();
    //~Instruction();
};

#endif
