#ifndef JUMP_2_ARGS_H
#define JUMP_2_ARGS_H

#include "instructionType.h"
#include <list>
#include <string>

class JumpConditional2Args: public InstructionType {
    std::list <std::string> tags;

    public:
    //Inicializa el tipo de instruccion con sus 
    //argumentos y etiquetas correspondientes
    JumpConditional2Args(std::string& arg, std::string& tag);
    //Devuelve siempre true por el tipo de instruccion
    virtual bool need_tag_code() override;
    //Busca la etiqueta pasada como parametro en la lista
    //de etiquetas. Devuelve true si la encuentra, 
    //false en caso contrario.
    virtual bool add_tag_code(std::string tag) override;
    //Devuelve siempre true por el tipo de instruccion
    virtual bool add_next_instruction() override;
    virtual ~JumpConditional2Args() override;
};

#endif
