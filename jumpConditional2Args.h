#ifndef JUMP_2_ARGS_H
#define JUMP_2_ARGS_H

#include "instructionType.h"

class JumpConditional2Args: public InstructionType {
    public:
    JumpConditional2Args(char* arg, char* tag);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

#endif