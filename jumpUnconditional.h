#ifndef JUMP_UNCONDITIONAL_H
#define JUMP_UNCONDITIONAL_H

#include "instructionType.h"
#include <list>
#include <string>

class JumpUnconditional: public InstructionType {
    std::list <std::string> tags;
    public:
    //Inicializa el tipo de instruccion con sus 
    //argumentos y etiquetas correspondientes
    explicit JumpUnconditional(std::string& tag);
    //Devuelve siempre true por el tipo de instruccion
    virtual bool need_tag_code() override;
    //Busca la etiqueta pasada como parametro en la lista
    //de etiquetas. Devuelve true si la encuentra, 
    //false en caso contrario
    virtual bool add_tag_code(std::string tag) override;
    //Devuelve siempre false por el tipo de instruccion
    virtual bool add_next_instruction() override;
    virtual ~JumpUnconditional() override;
};

#endif
