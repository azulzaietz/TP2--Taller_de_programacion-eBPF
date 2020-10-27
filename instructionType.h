#ifndef INSTRUCTION_TYPE_H
#define INSTRUCTION_TYPE_H

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class InstructionType {
    
    public:
    InstructionType();
    virtual bool add_tag_code(std::string tag);
    virtual bool add_next_instruction();
    virtual ~InstructionType();
};

#endif
