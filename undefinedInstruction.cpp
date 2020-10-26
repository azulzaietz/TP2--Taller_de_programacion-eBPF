#include "undefinedInstruction.h"

UndefinedInstruction:: UndefinedInstruction(std::list <string> parameters) {
    cout << parameters.front() << '\n';
};

bool UndefinedInstruction:: add_next_instruction() {
    return true;
};