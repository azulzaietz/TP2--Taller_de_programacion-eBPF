#include <iostream>
#include "node.h"

class Graph {
    Node nodes[];
    
    public:
    void add_node();
    void find_loops();
    void find_unexecuted_nodes();
};