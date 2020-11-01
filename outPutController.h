#ifndef OUTPUT_CONTROLLER_H
#define OUTPUT_CONTROLLER_H

#include <iostream>
#include <string>
#include <mutex>
#include <list>

class OutPutController {
    std::list<std::string> outPuts;
    std::mutex mtx;

    public:
    void addOutPut(std::string outPutFn, std::string outPutCheck);
    void showOutPut();
};

#endif
