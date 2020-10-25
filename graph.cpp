#include "graph.h"
#include <iostream>
#include <cstdlib>

void Graph:: add_node(std::string instruction) {
    if (!nodes.empty()) {
        Node* previous_node = this->nodes.back();
        this->nodes.push_back(new Node(instruction));
        this->nodes.back()->add_adjacent(previous_node);
    } else {
        this->nodes.push_back(new Node(instruction));
    }
    cout << "tamaño nodes" << this->nodes.size() << '\n';
}

void Graph:: find_loops() {
    
}

void Graph:: find_unexecuted_nodes() {
    
}
