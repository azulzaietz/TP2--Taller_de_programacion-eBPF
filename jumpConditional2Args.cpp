#include "jumpConditional2Args.h"
#include <list>
#include <string>

JumpConditional2Args:: JumpConditional2Args(
    std::string& arg, std::string& tag) {
    this->tags.push_back(tag);
    //cout << "JUMP 2 ARGS" << arg << tag << '\n';
}

bool JumpConditional2Args:: need_tag_code() {
    return true;
}

bool JumpConditional2Args:: add_tag_code(std::string tag) {
    bool found_tag = (std::find(this->tags.begin(), 
        this->tags.end(), tag) != this->tags.end());
    return found_tag;
}

bool JumpConditional2Args:: add_next_instruction() {
    return true;
}

JumpConditional2Args:: ~JumpConditional2Args() {}
