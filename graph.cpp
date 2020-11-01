#include "graph.h"
#include <iostream>
#include <cstdlib>
#include <string>

Graph:: Graph() {}

void Graph:: add_node(std::string instruction) {
    if (!this->nodes.empty()) {
        Node* previous_node = this->nodes.back();
        this->nodes.push_back(new Node(instruction));
        if (this->nodes.back()->need_tag_code()) {
            std::list<Node*>::iterator it1;
            for (it1 = this->nodes.begin(); 
            it1 != this->nodes.end(); it1++){
                if (this->nodes.back()->add_tag_code(
                    (*it1)->get_function_name())){
                    this->nodes.back()->add_adjacent(*it1);
                    break;
                }
            }
        }
        if (previous_node->add_next()) {
            previous_node->add_adjacent(this->nodes.back());
        }
        if (this->nodes.back()->start_function()) {
            std::list<Node*>::iterator it;
            for (it = this->nodes.begin(); 
            it != this->nodes.end(); it++){
                if ((*it)->add_tag_code(
                    this->nodes.back()->get_function_name())) {
                    (*it)->add_adjacent(this->nodes.back());
                }
            }
        }
    } else {
        this->nodes.push_back(new Node(instruction));
    }
}

void Graph:: print_grafo() {
    std::cout << "----------------IMPRESION GRAFO------------" << '\n';
    std::list<Node*>::iterator it;
    for (it = this->nodes.begin(); 
    it != this->nodes.end(); it++){
        std::cout << "nodo" << (*it)->get_command_name() << '\n';
        std::list<Node*>::iterator it2;
        for (it2 = (*it)->get_adjacents().begin(); 
        it2 != (*it)->get_adjacents().end(); it2++)
        {
            std::cout << "adyacentes" << (*it2)->get_command_name() << '\n';
        }
    }
}

void Graph:: verify() {
    this->DFS_wrapper();
}

bool Graph:: find_loops() {
    return this->loops;
}

bool Graph:: find_unexecuted_nodes() {
    return this->unexecuted_nodes;
}

void Graph:: DFS 
(Node* origin, std::list<Node*>& visited, 
std::list<Node*>& stack) 
{ 
    visited.push_back(origin);
    stack.push_back(origin);
    //stack.push(origin);

    std::list<Node*>::iterator it;
    for (it = origin->get_adjacents().begin(); 
    it != origin->get_adjacents().end(); it++)
    {
        Node* node = (*it);

        bool stack_node = (std::find(stack.begin(), 
        stack.end(), node) != stack.end());

        bool visited_node = (std::find(visited.begin(), 
        visited.end(), node) != visited.end());

        if (stack_node) {
            this->loops = true;
            return;
        } else if (!visited_node){
            DFS(node, visited, stack);
        }  
    }
    //stack.pop();
    stack.pop_back();
}

void Graph:: DFS_wrapper() {
    std::list<Node*> visited;
    std::list<Node*> stack;

    DFS(this->nodes.front(), visited, stack);

    if (visited.size() < this->nodes.size()) {
        this->unexecuted_nodes = true;
    }
}

Graph:: ~Graph() {
    std::list<Node*>::iterator it;
    for (it = this->nodes.begin(); 
    it != this->nodes.end(); it++){
        delete (*it);
    }
}
