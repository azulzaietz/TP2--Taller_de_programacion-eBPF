#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <iostream>
#include "instructionType.h"
#include "jumpUnconditional.h"
#include "jumpConditional2Args.h"
#include "jumpConditional3Args.h"
#include "ret.h"
#include "undefinedInstruction.h"
#include <list>
#include <string>

class Instruction {
    std::string instruction;

    bool _is_function = false;
    std:: string function_name;

    std::string command_name;
    std::list <std::string> parameters;
    InstructionType* instructionType;
    std:: list <const char*> jumps = {"jmp", "ja", "jeq", "jneq", 
    "jne", "jlt", "jle", "jgt", "jge", "jset"};

    InstructionType* FindInstructionType();

    public:
    //Inicializa la instruccion creando
    //el tipo de instruccion correspondiente.
    explicit Instruction(std::string instruction);
    //Devuelve true si la linea de instruccion
    //marca el comienzo de una funcion
    //en el programa eBPF, false en caso contrario
    bool is_function();
    //Devuelve true si la linea de instruccion
    //tiene un tag al que puede saltar
    //false en caso contrario.
    bool need_tag_code();
    //Devuelve true si el tag pasado como
    //parametro se encuentra en la linea
    //de la instruccion
    bool add_tag_code(std::string tag);
    //Devuelve el nombre de la funcion 
    //a la cual la instruccion da inicio, 
    //o una cadena vacia si no comienza
    //ninguna funcion
    std::string& get_function_name();
    //Devuelve el nombre del comando
    //de la instruccion 
    std::string& get_command_name();
    //Devuelve true si la instruccion
    //hace que el programa siga su ejecucion
    //en la siguiente linea del archivo, 
    //false en caso contrario.
    bool add_next_instruction();
    ~Instruction();
};

#endif
