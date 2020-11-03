#ifndef UNDEFINED_INSTRUCTION_H
#define UNDEFINED_INSTRUCTION_H

#include <iostream>
#include <list>
#include <string>
#include "instructionType.h"

class UndefinedInstruction: public InstructionType {
    public:
    //Inicializa el tipo de instruccion con sus
    //respectivos parametros
    explicit UndefinedInstruction(std::list <std::string>& parameters);
    //Devuelve siempre true por el tipo de instruccion
    virtual bool add_next_instruction() override;
    virtual ~UndefinedInstruction() override;
};

#endif
