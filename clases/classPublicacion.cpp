#include "classPublicacion.h"

void setDt(string doi, string titulo, DTFecha fecha, set<string> autores){
    if(this->DT != NULL){
        delete this->DT;
    }
    this->DT = crearRefer(doi,titulo,fecha,autores);
}

DTRefer get_DT()
    {
        return this->DT;
    }