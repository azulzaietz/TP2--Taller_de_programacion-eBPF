#include "eBPF.h"

eBPF:: eBPF() {}

void eBPF:: read_code(const char* fn) {
    std::string line;
    std::ifstream myfile(fn);
    if (myfile.is_open()) {
        while (getline(myfile,line)) {
            if (!line.empty()) {
                this->graph.add_node(line);
            }
        }
        myfile.close();
    } else { 
        std::cout << "Unable to open file"; 
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

eBPF:: ~eBPF() {}
