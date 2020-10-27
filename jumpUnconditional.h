#ifndef JUMP_UNCONDITIONAL_H
#define JUMP_UNCONDITIONAL_H

#include "instructionType.h"

class JumpUnconditional: public InstructionType {
    std::list <string> tags;
    public:
    JumpUnconditional(string tag);
    virtual bool add_tag_code(std::string tag) override;
    virtual bool add_next_instruction() override;
    virtual ~JumpUnconditional() override;
};

#endif
