#include "classPublicacion.h"

void setRefer(string doi, string titulo, DTFecha fecha, set<string> autores){
    if(this->Refer != NULL){
        delete this->Refer;
    }
    this->Refer = crearRefer(doi,titulo,fecha,autores);
}

DTRefer get_Refer()
    {
        return this->Refer;
    }