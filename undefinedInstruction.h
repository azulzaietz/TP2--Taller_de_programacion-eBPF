#include <iostream>
#include "instructionType.h"

class UndefinedInstruction: public InstructionType {
    public:
    UndefinedInstruction();
    virtual bool add_next_instruction() override;
};