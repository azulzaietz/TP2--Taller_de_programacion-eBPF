#include "ret.h"

Ret:: Ret(std::list <string> parameters) {
    cout << parameters.front() << '\n';
};

bool Ret:: add_next_instruction() {
    return false;
};