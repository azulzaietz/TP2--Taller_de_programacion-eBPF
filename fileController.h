#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

#include <list>
#include <mutex>

class FileController {
    std::mutex mtx;
    std::list<const char*> fileList;

    public:
    FileController();
    void receiveFileName(const char* fn);
    const char* getFileName();
    bool isEmpty();
};

#endif
