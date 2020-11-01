#include "outPutController.h"

void OutPutController:: addOutPut(std::string& outPutFn, 
std::string& outPutCheck) {
    this->mtx.lock();
    std::string s;
    s.append(outPutFn);
    s.append(" ");
    s.append(outPutCheck);
    this->outPuts.push_back(s);
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
