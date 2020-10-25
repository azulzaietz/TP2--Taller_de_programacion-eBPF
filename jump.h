#ifndef JUMP_H
#define JUMP_H

#include <iostream>
#include "instruction.h"

class Jump: public InstructionType {
    public:
    Jump();
};

class JumpUnconditional: public Jump {
    public:
    JumpUnconditional(char* tag);
};

class JumpConditional2Args: public Jump {
    public:
    JumpConditional2Args(char* arg, char* tag);
};

class JumpConditional3Args: public Jump {
    public:
    JumpConditional3Args(char* arg, char* tag1, char* tag2);
};

#endif
