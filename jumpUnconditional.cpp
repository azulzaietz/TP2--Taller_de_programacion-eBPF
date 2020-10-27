#include "jumpUnconditional.h"

JumpUnconditional:: JumpUnconditional(string tag) {
    cout << "JUMP UNCONDITIONAL tag:" << tag << '\n';
}

bool JumpUnconditional:: add_tag_code(std::string tag) {
    bool found_tag = (std::find(this->tags.begin(), 
        this->tags.end(), tag) != this->tags.end());
    return found_tag;
}

bool JumpUnconditional:: add_next_instruction() {
    return false;
}
