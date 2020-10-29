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
    eBPF();
    void read_code();
    void verify();
    void print_grafo();
    ~eBPF();
};

#endif
