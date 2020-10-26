#ifndef JUMP_UNCONDITIONAL_H
#define JUMP_UNCONDITIONAL_H

#include "instructionType.h"

class JumpUnconditional: public InstructionType {
    public:
    JumpUnconditional(char* tag);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

#endif
