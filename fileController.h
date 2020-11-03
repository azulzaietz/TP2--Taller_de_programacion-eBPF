#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

#include <list>
#include <mutex>

class FileController {
    std::mutex mtx;
    std::list<const char*> fileList;

    public:
    FileController();
    //Recibe un nombre de archivo como
    //parametro y lo guarda en la lista
    //de archivos a procesar
    //Pre: se inicializo un file controller
    //Post: se guardo el archivo a procesar
    void receiveFileName(const char* fn);
    //Devuelve el ultimo archivo de la 
    //lista de archivos para que sea procesado
    //por la entidad correspondiente y lo borra
    //de la lista
    //Pre: se agregaron archivos a la lista
    //Post: el archivo devuelto ya fue procesado
    //y borrado de la lista.
    const char* getFileName();
    //Devuelve true si no hay mas archivos a procesar,
    //false si todavia hay archivos en la lista.
    bool isEmpty();
};

#endif
