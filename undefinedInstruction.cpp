#include "undefinedInstruction.h"
#include <list>
#include <string>

UndefinedInstruction:: UndefinedInstruction(
    std::list <std::string>& parameters) {
    //cout << "undefined instruction arg: " << parameters.front() << '\n';
}

bool UndefinedInstruction:: add_next_instruction() {
    return true;
}

UndefinedInstruction:: ~UndefinedInstruction() {}
