#include "thread_ebpf.h"

ThreadEbfp:: ThreadEbfp(FileController* fc, OutPutController* opc) {
    this->file_controller = fc;
    this->output_controller = opc;
}

void ThreadEbfp:: run() {
    while (!this->file_controller->isEmpty()) {
        const char* fn = this->file_controller->getFileName();
        eBPF ebpf;
        ebpf.read_code(fn);
        const char* check = ebpf.verify();
        this->output_controller->addOutPut(fn, check);
    }
}

ThreadEbfp:: ~ThreadEbfp(){}
