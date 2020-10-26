#ifndef JUMP_H
#define JUMP_H

#include <iostream>
#include "instruction.h"

class Jump: public InstructionType {
    std:: list <char*> tags;
    public:
    Jump();
};

#endif
