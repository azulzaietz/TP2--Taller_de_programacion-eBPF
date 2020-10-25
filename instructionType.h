#ifndef INSTRUCTION_TYPE_H
#define INSTRUCTION_TYPE_H

#include <iostream>
#include <list>
#include <algorithm>
#include "jump.h"
#include "ret.h"
using namespace std;

class InstructionType {

    std::string tag;
    std:: list <char*> tags;
    InstructionType* instruction;
    std:: list <char*> jumps = {"jmp", "ja", "jeq", "jneq", "jne", "jlt", "jle", "jgt", "jge", "jset"};
    
    public:
    InstructionType();
    InstructionType(std::string tag, std::string 
        instruction_name, std::list <char*> parameters);
    void add_tag_code();
    bool is_function();
    bool add_next_instruction();
    //~InstructionType();
};

#endif