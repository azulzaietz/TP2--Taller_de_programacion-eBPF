#ifndef EBPF_H
#define EBPF_H

#include <fstream>
#include <string>
#include <iostream>
#include "graph.h"

class eBPF {
    Graph graph;
    
    public:
    eBPF();
    //Lee el archivo pasado como parametro, llamando en cada linea
    //a la funcion add_node del grafo, para crear el grafo
    //con los datos leidos del archivo.
    //Pre: se inicializo un eBPF y se le paso un nombre
    //de archivo como parametro
    //Post: el archivo fue cerrado y el grafo del programa
    //eBPF fue creado.
    void read_code(const char* fn);
    //Verifica el programa eBPF utilizando el grafo creado
    //anteriormente. 
    //Pre: se leyo un archivo y se creo el grafo
    //correspondiente
    //Post: devuelve "GOOD" si no encontro ningun problema
    //En caso contrario devuelve: "FAIL: cycle detected" o 
    //"FAIL: unused instructions detected".
    const char* verify();
    ~eBPF();
};

#endif
