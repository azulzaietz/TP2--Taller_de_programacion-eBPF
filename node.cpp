#include "node.h"

Node:: Node(std::string instruction) {
    this->instruction = new Instruction(instruction);
}

void Node:: add_adjacent(Node* previous_node) {
    this->adjacents.push_back(previous_node);
}

bool Node:: add_next() {
    return this->instruction->add_next_instruction();
}

bool Node:: start_function() {
    return this->instruction->is_function();
}

std::string Node:: get_function_name() {
    return this->instruction->get_function_name();
}

bool Node:: add_tag_code(std::string tag) {
    return this->instruction->add_tag_code(tag);
}

std::list<Node*>& Node:: get_adjacents() {
    return this->adjacents;
}

Node:: ~Node() {
    delete(this->instruction);
}
