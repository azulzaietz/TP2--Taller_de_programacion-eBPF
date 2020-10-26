#ifndef INSTRUCTION_TYPE_H
#define INSTRUCTION_TYPE_H

#include <iostream>
#include <list>
#include <algorithm>
#include "jump.h"
#include "ret.h"
#include "undefinedInstruction.h"
using namespace std;

class InstructionType {
    
    public:
    InstructionType();
    virtual void add_tag_code();
    virtual bool add_next_instruction();
    //~InstructionType();
};

#endif