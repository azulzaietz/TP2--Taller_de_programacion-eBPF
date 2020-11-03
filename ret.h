#ifndef RET_H
#define RET_H

#include <iostream>
#include <string>
#include <list>
#include "instructionType.h"

class Ret: public InstructionType {
    public:
    //Inicializa el tipo de instruccion
    //con sus parametros
    explicit Ret(std::list <std::string>& parameters);
    //Devuelve siempre false por el tipo de instruccion
    virtual bool add_next_instruction() override;
    virtual ~Ret() override;
};

#endif
