#ifndef RET_H
#define RET_H

#include <iostream>
#include "instructionType.h"

class Ret: public InstructionType {
    public:
    Ret();
    virtual bool add_next_instruction() override;
};

#endif
