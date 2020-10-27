#include "jumpConditional2Args.h"

JumpConditional2Args:: JumpConditional2Args(string arg, string tag) {
    this->tags.push_back(tag);
    //cout << "JUMP 2 ARGS" << arg << tag << '\n';
}

bool JumpConditional2Args:: add_tag_code(std::string tag) {
    bool found_tag = (std::find(this->tags.begin(), 
        this->tags.end(), tag) != this->tags.end());
    return found_tag;
}

bool JumpConditional2Args:: add_next_instruction() {
    return true;
}
