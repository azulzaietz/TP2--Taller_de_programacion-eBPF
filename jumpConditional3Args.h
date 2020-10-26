#ifndef JUMP_CONDITIONAL_3_H
#define JUMP_CONDITIONAL_3_H

#include "instructionType.h"

class JumpConditional3Args: public InstructionType {
    public:
    JumpConditional3Args(string arg, string tag1, string tag2);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

#endif
