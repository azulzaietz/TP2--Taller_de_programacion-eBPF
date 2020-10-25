#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <fstream>
#include <list>
#include "node.h"
using namespace std;

class Graph {
    std::list < Node* > nodes;
    
    public:
    //Graph();
    //si lo primero es una etiqueta llama a agregar etiqueta para cada nodo en la lista de nodos, 
    //si no, crea un nodo solamente.
    void add_node(std::string instruction);
    void find_loops();
    void find_unexecuted_nodes();
    //~Graph();
};

#endif