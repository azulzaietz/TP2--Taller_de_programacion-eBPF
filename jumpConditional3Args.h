#ifndef JUMP_CONDITIONAL_3_H
#define JUMP_CONDITIONAL_3_H

#include "jump.h"

class JumpConditional3Args: public Jump {
    public:
    JumpConditional3Args(char* arg, char* tag1, char* tag2);
    virtual void add_tag_code() override;
    virtual bool add_next_instruction() override;
};

#endif
