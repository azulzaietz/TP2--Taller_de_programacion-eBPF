#ifndef UNDEFINED_INSTRUCTION_H
#define UNDEFINED_INSTRUCTION_H

#include <iostream>
#include <list>
#include <string>
#include "instructionType.h"

class UndefinedInstruction: public InstructionType {
    public:
    explicit UndefinedInstruction(std::list <std::string>& parameters);
    virtual bool add_next_instruction() override;
    virtual ~UndefinedInstruction() override;
};

#endif
