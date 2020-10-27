#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <fstream>
#include <list>
#include "node.h"
using namespace std;

class Graph {
    std::list < Node* > nodes;
    bool loops = false;
    bool unexecuted_nodes = false;
    void DFS (std::list<Node*> adjacents, std::list<Node*> visited);
    void DFS_wrapper();
    
    public:
    //Graph();
    //si lo primero es una etiqueta llama a agregar etiqueta para cada nodo en la lista de nodos, 
    //si no, crea un nodo solamente.
    void add_node(std::string instruction);
    bool find_loops();
    bool find_unexecuted_nodes();
    //~Graph();
};

#endif
