#include "eBPF.h"

void eBPF:: read_code() {
    string line;
    ifstream myfile ("prueba.txt");
    if (myfile.is_open()) {
        while (getline (myfile,line)) {
            this->graph.add_node(line);
        }
        myfile.close();
    } else { 
        cout << "Unable to open file"; 
    }
}

void eBPF:: find_loops() {
    if (this->graph.find_loops()) {
        cout << "FAIL: cycle detected" << '\n';
    }
}

void eBPF:: find_unexecuted_nodes() {
    if (this->graph.find_unexecuted_nodes()) {
        cout << "FAIL: unused instructions detected" << '\n';
    }
}