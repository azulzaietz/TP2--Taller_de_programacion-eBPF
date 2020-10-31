#ifndef EBPF_H
#define EBPF_H

#include <fstream>
#include <string>
#include <iostream>
#include "graph.h"

class eBPF {
    Graph graph;
    
    public:
    eBPF();
    void read_code(const char* fn);
    const char* verify();
    void print_grafo();
    ~eBPF();
};

#endif
