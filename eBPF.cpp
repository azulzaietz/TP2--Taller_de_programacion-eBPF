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
    this->graph.find_loops();
}

void eBPF:: find_unexecuted_nodes() {
    this->graph.find_unexecuted_nodes();
}