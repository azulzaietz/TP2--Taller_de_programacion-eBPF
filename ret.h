#ifndef RET_H
#define RET_H

#include <iostream>
#include <string>
#include <list>
#include "instructionType.h"

class Ret: public InstructionType {
    public:
    explicit Ret(std::list <std::string>& parameters);
    virtual bool add_next_instruction() override;
    virtual ~Ret() override;
};

#endif
