#ifndef UNDEFINED_INSTRUCTION_H
#define UNDEFINED_INSTRUCTION_H

#include <iostream>
#include "instructionType.h"

class UndefinedInstruction: public InstructionType {
    public:
    UndefinedInstruction(std::list <string> parameters);
    virtual bool add_next_instruction() override;
    virtual ~UndefinedInstruction() override;
};

#endif
