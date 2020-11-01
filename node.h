#ifndef NODE_H
#define NODE_H

#include "instruction.h"
#include <list>
#include <string>

class Node {
    Instruction* instruction;
    std::list<Node*> adjacents;
    
    public:
    Node(std::string instruction);
    bool start_function();
    bool add_next();
    std::string& get_function_name();
    std::string& get_command_name();
    void add_adjacent(Node* node);
    bool need_tag_code();
    bool add_tag_code(std::string tag);
    std::list<Node*>& get_adjacents();
    ~Node();
};

#endif
