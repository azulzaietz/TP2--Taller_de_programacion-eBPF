#ifndef JUMP_CONDITIONAL_3_H
#define JUMP_CONDITIONAL_3_H

#include "instructionType.h"
#include <string>
#include <list>

class JumpConditional3Args: public InstructionType {
    std::list <std::string> tags;

    public:
    JumpConditional3Args(std::string& arg, 
    std::string& tag1, std::string& tag2);
    virtual bool need_tag_code() override;
    virtual bool add_tag_code(std::string tag) override;
    virtual bool add_next_instruction() override;
    virtual ~JumpConditional3Args() override;
};

#endif
