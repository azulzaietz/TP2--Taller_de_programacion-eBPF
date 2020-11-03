#ifndef JUMP_CONDITIONAL_3_H
#define JUMP_CONDITIONAL_3_H

#include "instructionType.h"
#include <string>
#include <list>

class JumpConditional3Args: public InstructionType {
    std::list <std::string> tags;

    public:
    //Inicializa el tipo de instruccion con sus 
    //argumentos y etiquetas correspondientes
    JumpConditional3Args(std::string& arg, 
    std::string& tag1, std::string& tag2);
    //Devuelve siempre true por el tipo de instruccion
    virtual bool need_tag_code() override;
    //Busca la etiqueta pasada como parametro en la lista
    //de etiquetas. Devuelve true si la encuentra, 
    //false en caso contrario
    virtual bool add_tag_code(std::string tag) override;
    //Devuelve siempre false por el tipo de instruccion
    virtual bool add_next_instruction() override;
    virtual ~JumpConditional3Args() override;
};

#endif
