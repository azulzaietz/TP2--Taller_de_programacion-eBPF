#include "thread.h"
#include <utility>

Thread::Thread() {}

void Thread::start() {
    this->thread = std::thread(&Thread::run, this);
}

void Thread::join() {
    this->thread.join();
}

Thread::~Thread() {}
