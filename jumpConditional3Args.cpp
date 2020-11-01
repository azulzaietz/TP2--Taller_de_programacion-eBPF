#include "jumpConditional3Args.h"
#include <string>

JumpConditional3Args:: JumpConditional3Args(std::string& arg, 
std::string& tag1, std::string& tag2) {
    this->tags.push_back(tag1);
    this->tags.push_back(tag2);
    //cout << "JUMP 3 ARGS" << arg << tag1 << tag2 << '\n';
}

bool JumpConditional3Args:: need_tag_code() {
    return true;
}

bool JumpConditional3Args:: add_tag_code(std::string tag) {
    bool found_tag = (std::find(this->tags.begin(), 
        this->tags.end(), tag) != this->tags.end());
    return found_tag;
}

bool JumpConditional3Args:: add_next_instruction() {
    return false;
}

JumpConditional3Args:: ~JumpConditional3Args() {}
