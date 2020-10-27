#ifndef JUMP_2_ARGS_H
#define JUMP_2_ARGS_H

#include "instructionType.h"

class JumpConditional2Args: public InstructionType {
    std::list <string> tags;

    public:
    JumpConditional2Args(string arg, string tag);
    virtual bool add_tag_code(std::string tag) override;
    virtual bool add_next_instruction() override;
    virtual ~JumpConditional2Args() override;
};

#endif
