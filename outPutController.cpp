#include "outPutController.h"

void OutPutController:: addOutPut(std::string outPut) {
    this->mtx.lock();
    this->outPuts.push_back(outPut);
    this->mtx.unlock();
}

void OutPutController:: showOutPut() {
    this->outPuts.sort();
    std::list<std::string>::iterator it;
    for (it = this->outPuts.begin(); 
    it != this->outPuts.end(); it++) {
        std::cout << (*it) << '\n';
    }
}
