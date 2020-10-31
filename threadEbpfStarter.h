#ifndef THREAD_EBPF_STARTER_H
#define THREAD_EBPF_STARTER_H

#include <vector>
#include <iostream>
#include <thread>
#include "eBPF.h"
#include "fileController.h"
#include "thread_ebpf.h"

class ThreadEbpfStarter {
    int numberOfThreads;
    std::vector<ThreadEbfp*> threads;
    FileController fc;
    OutPutController opc;

    public:
    ThreadEbpfStarter(int argc, const char* argv[]);
    void start();
    ~ThreadEbpfStarter();

};

#endif