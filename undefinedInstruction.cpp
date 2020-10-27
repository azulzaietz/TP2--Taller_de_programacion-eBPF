#include "undefinedInstruction.h"

UndefinedInstruction:: UndefinedInstruction(std::list <string> parameters) {
    //cout << "undefined instruction arg: " << parameters.front() << '\n';
}

bool UndefinedInstruction:: add_next_instruction() {
    return true;
}

UndefinedInstruction:: ~UndefinedInstruction() {
    
}
