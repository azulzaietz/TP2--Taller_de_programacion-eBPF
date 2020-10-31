#include "threadEbpfStarter.h"

ThreadEbpfStarter:: ThreadEbpfStarter(int argc, const char* argv[]) {
    this->numberOfThreads = std::atoi(argv[1]);
    for (int i = 2; i < argc; i++) {
        this->fc.receiveFileName(argv[i]);
    }
}

void ThreadEbpfStarter:: start() {
    
    for (int i = 0; i < this->numberOfThreads; i++) {
        this->threads.push_back(new ThreadEbfp(&this->fc, &this->opc));
    }

    for (int i = 0; i < this->numberOfThreads; i++) {
        this->threads[i]->start();
    }

    for (int i = 0; i < this->numberOfThreads; i++) {
        this->threads[i]->join();
        delete threads[i];
    }

    this->opc.showOutPut();
}