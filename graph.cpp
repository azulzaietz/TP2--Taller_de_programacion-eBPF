#include "graph.h"
#include <iostream>
#include <cstdlib>

void Graph:: add_node(std::string instruction) {
    if (!nodes.empty()) {
        Node* previous_node = this->nodes.back();
        this->nodes.push_back(new Node(instruction));
        if (previous_node->add_next()) {
            previous_node->add_adjacent(this->nodes.back());
        }
    } else {
        this->nodes.push_back(new Node(instruction));
    }
}

void Graph:: find_loops() {
    
}

void Graph:: find_unexecuted_nodes() {
    
}
