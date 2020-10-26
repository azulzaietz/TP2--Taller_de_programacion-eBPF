#include "node.h"

Node:: Node(std::string instruction) {
    this->instruction = new Instruction(instruction);
}

void Node:: add_adjacent(Node* previous_node) {
    this->adjacents.push_back(previous_node);
    cout << "cantidad de adyacentes" << this->adjacents.size() << '\n';
}

bool Node:: add_next() {
    return this->instruction->add_next_instruction();
}