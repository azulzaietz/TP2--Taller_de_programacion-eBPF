#ifndef JUMP_CONDITIONAL_3_H
#define JUMP_CONDITIONAL_3_H

#include "instructionType.h"

class JumpConditional3Args: public InstructionType {
    std::list <string> tags;

    public:
    JumpConditional3Args(string& arg, string& tag1, string& tag2);
    virtual bool need_tag_code() override;
    virtual bool add_tag_code(std::string tag) override;
    virtual bool add_next_instruction() override;
    virtual ~JumpConditional3Args() override;
};

#endif
