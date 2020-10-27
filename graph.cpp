#include "graph.h"
#include <iostream>
#include <cstdlib>

void Graph:: add_node(std::string instruction) {
    if (!this->nodes.empty()) {
        Node* previous_node = this->nodes.back();
        this->nodes.push_back(new Node(instruction));
        if (previous_node->add_next()) {
            previous_node->add_adjacent(this->nodes.back());
        }
        if (this->nodes.back()->start_function()) {
            std::list<Node*>::iterator it;
            for (it = this->nodes.begin(); 
            it != this->nodes.end(); it++){
                if ((*it)->add_tag_code(this->nodes.back()->get_function_name())) {
                    (*it)->add_adjacent(this->nodes.back());
                }
            }
        }
    } else {
        this->nodes.push_back(new Node(instruction));
    }
}

bool Graph:: find_loops() {
    return this->loops;
}

bool Graph:: find_unexecuted_nodes() {
    this->DFS_wrapper();
    return this->unexecuted_nodes;
}

void Graph:: DFS 
(Node* origin, std::list<Node*> visited, 
std::map<Node*, int> order, std::map<Node*, Node*> parents) 
{ 
    visited.push_back(origin);

    if (origin->get_adjacents().empty()) return;

    std::list<Node*>::iterator it;
    for (it = origin->get_adjacents().begin(); 
    it != origin->get_adjacents().end(); it++)
    {
        Node* node = (*it);
        bool visited_node = (std::find(visited.begin(), 
        visited.end(), (*it)) != visited.end());
        if(!visited_node) {
            parents[node] = origin;
            order[node] = order[origin] + 1;
            return DFS(node, visited, order, parents);
        }
        
    }
} 

void Graph:: DFS_wrapper() { 
    	
    std::map<Node*, int> order;
    std::map<Node*, Node*> parents;
    std::list<Node*> visited;

    parents[this->nodes.front()] = NULL;
    order[this->nodes.front()] = 0;
    
    DFS(this->nodes.front(), visited, order, parents);

    if (visited.size() < this->nodes.size()) {
        this->unexecuted_nodes = true;
    }
}
