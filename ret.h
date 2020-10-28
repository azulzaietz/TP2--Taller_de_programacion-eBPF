#ifndef RET_H
#define RET_H

#include <iostream>
#include "instructionType.h"

class Ret: public InstructionType {
    public:
    Ret(std::list <string>& parameters);
    virtual bool add_next_instruction() override;
    virtual ~Ret() override;
};

#endif
