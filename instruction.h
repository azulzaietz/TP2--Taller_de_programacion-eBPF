#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <iostream>
#include "instructionType.h"
#include "jumpUnconditional.h"
#include "jumpConditional2Args.h"
#include "jumpConditional3Args.h"
#include "ret.h"
#include "undefinedInstruction.h"

using namespace std;

class Instruction {
    std::string instruction;

    bool _is_function = false;
    std:: string function_name;

    std::string command_name;
    std::list <string> parameters;
    InstructionType* instructionType;
    std:: list <const char*> jumps = {"jmp", "ja", "jeq", "jneq", 
    "jne", "jlt", "jle", "jgt", "jge", "jset"};

    InstructionType* FindInstructionType();

    public:
    Instruction(std::string instruction);
    bool is_function();
    bool add_tag_code(std::string tag);
    std::string get_function_name();
    std::string& get_command_name();
    bool add_next_instruction();
    ~Instruction();
};

#endif
