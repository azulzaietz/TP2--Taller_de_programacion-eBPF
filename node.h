#ifndef NODE_H
#define NODE_H

#include "instruction.h"
#include <list>
using namespace std;

class Node {
    Instruction* instruction;
    std::list < Node* > adjacents;
    
    public:
    Node(std::string instruction);
    bool add_next();
    void add_adjacent(Node* node);
    //~Node();
};

#endif
