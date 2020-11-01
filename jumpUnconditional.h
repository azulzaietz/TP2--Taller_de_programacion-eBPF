#ifndef JUMP_UNCONDITIONAL_H
#define JUMP_UNCONDITIONAL_H

#include "instructionType.h"
#include <list>

class JumpUnconditional: public InstructionType {
    std::list <std::string> tags;
    public:
    JumpUnconditional(std::string& tag);
    virtual bool need_tag_code() override;
    virtual bool add_tag_code(std::string tag) override;
    virtual bool add_next_instruction() override;
    virtual ~JumpUnconditional() override;
};

#endif
