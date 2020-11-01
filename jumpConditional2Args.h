#ifndef JUMP_2_ARGS_H
#define JUMP_2_ARGS_H

#include "instructionType.h"
#include <list>
#include <string>

class JumpConditional2Args: public InstructionType {
    std::list <std::string> tags;

    public:
    JumpConditional2Args(std::string& arg, std::string& tag);
    virtual bool need_tag_code() override;
    virtual bool add_tag_code(std::string tag) override;
    virtual bool add_next_instruction() override;
    virtual ~JumpConditional2Args() override;
};

#endif
