#ifndef INSTRUCTION_TYPE_H
#define INSTRUCTION_TYPE_H

#include <iostream>
#include <list>
#include <algorithm>
#include <string>

class InstructionType {
    public:
    InstructionType();
    //Clase padre de la cual heredan todos los
    //tipos de instruccion para poder
    //aplicar polimorfismo
    virtual bool need_tag_code();
    virtual bool add_tag_code(std::string tag);
    virtual bool add_next_instruction();
    virtual ~InstructionType();
};

#endif
