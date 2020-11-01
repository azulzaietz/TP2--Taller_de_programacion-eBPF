#ifndef THREAD_EBPF_H
#define THREAD_EBPF_H

#include <stdio.h>
#include <string.h>
#include "thread.h"
#include "eBPF.h"
#include "fileController.h"
#include "outPutController.h"

class ThreadEbfp: public Thread {
    FileController* file_controller;
    OutPutController* output_controller;

    public:
    ThreadEbfp(FileController* fc, OutPutController* opc);
    virtual void run() override;
    virtual ~ThreadEbfp() override;
};

#endif
