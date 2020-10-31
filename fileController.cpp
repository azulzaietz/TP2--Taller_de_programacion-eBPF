#include "fileController.h"

FileController:: FileController() {
}

void FileController:: receiveFileName(const char* fn) {
    this->fileList.push_back(fn);
}

const char* FileController:: getFileName() {
    this->mtx.lock();
    const char* fn = this->fileList.back();
    this->fileList.pop_back();
    this->mtx.unlock();
    return fn;
}

bool FileController:: isEmpty() {
    return this->fileList.empty();
}
