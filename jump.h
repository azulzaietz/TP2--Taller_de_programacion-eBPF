#ifndef JUMP_H
#define JUMP_H

#include <iostream>
#include "instruction.h"

class Jump: public InstructionType {
    std:: list <char*> tags;
    public:
    Jump();
};

class JumpUnconditional: public Jump {
    public:
    JumpUnconditional(char* tag);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

class JumpConditional2Args: public Jump {
    public:
    JumpConditional2Args(char* arg, char* tag);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

class JumpConditional3Args: public Jump {
    public:
    JumpConditional3Args(char* arg, char* tag1, char* tag2);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

#endif
