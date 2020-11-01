#include "jumpUnconditional.h"
#include <string>

JumpUnconditional:: JumpUnconditional(std::string& tag) {
    this->tags.push_back(tag);
}

bool JumpUnconditional:: need_tag_code() {
    return true;
}

bool JumpUnconditional:: add_tag_code(std::string tag) {
    bool found_tag = (std::find(this->tags.begin(), 
        this->tags.end(), tag) != this->tags.end());
    return found_tag;
}

bool JumpUnconditional:: add_next_instruction() {
    return false;
}

JumpUnconditional:: ~JumpUnconditional() {}
