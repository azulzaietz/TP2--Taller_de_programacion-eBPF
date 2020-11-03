#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <string>
#include "node.h"

class Graph {
    std::list < Node* > nodes;
    bool loops = false;
    bool unexecuted_nodes = false;
    void DFS 
    (Node* origin, std::list<Node*>& visited, 
    std::list<Node*>& stack);
    void DFS_wrapper();
    
    public:
    Graph();
    //Recibe una instruccion leida de un archivo
    //crea un nodo y lo agrega al grafo
    //Pre: un grafo fue inicializado
    //Post: un nuevo nodo fue agregado al grafo
    void add_node(std::string instruction);
    //Llama a DFS para verificar el programa eBPF
    void verify();
    //Devuelve true si hay loops en el grafo
    //del programa eBPF, 
    //false en caso contrario
    bool find_loops();
    //Devuelve true si hay instrucciones sin
    //ejecutar en el grafo del programa
    //eBPF, false en caso contrario
    bool find_unexecuted_nodes();
    ~Graph();
};

#endif
