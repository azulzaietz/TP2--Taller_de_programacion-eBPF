#ifndef EBPF_H
#define EBPF_H

#include <fstream>
#include <string>
#include <iostream>
#include "graph.h"
using namespace std;

class eBPF {
    Graph graph;
    
    public:
    //eBPF();
    void read_code();
    void find_loops();
    void find_unexecuted_nodes();
    //~eBPF();
};

#endif
