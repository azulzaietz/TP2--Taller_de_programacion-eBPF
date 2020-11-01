#include "ret.h"
#include <list>
#include <string>

Ret:: Ret(std::list <std::string>& parameters) {
    //cout << "ret arg: " << parameters.front() << '\n';
}

bool Ret:: add_next_instruction() {
    return false;
}

Ret:: ~Ret() {}
