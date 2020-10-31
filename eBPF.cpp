#include "eBPF.h"

eBPF:: eBPF() {}

void eBPF:: read_code(const char* fn) {
    string line;
    ifstream myfile (fn);
    if (myfile.is_open()) {
        while (getline (myfile,line)) {
            this->graph.add_node(line);
        }
        myfile.close();
    } else { 
        cout << "Unable to open file"; 
    }
}

const char* eBPF:: verify() {
    this->graph.verify();
    if (this->graph.find_loops()) {
        return "FAIL: cycle detected";
    } else if (this->graph.find_unexecuted_nodes()) {
        return "FAIL: unused instructions detected";
    } else {
        return "GOOD";
    }
}

void eBPF:: print_grafo() {
    this->graph.print_grafo();
}

eBPF:: ~eBPF() {
    
}
