#include "classPublicacion.h"

void setDt(string doi, string titulo, DTFecha fecha, set<string> autores){
    if(this->DT != NULL){
        delete this->DT;
    }
    this->DT = crearRefer(doi,titulo,fecha,autores);
}

void setDOI(string DOI) {
    this->DOI = DOI;
}

void setTitulo(string titulo) {
    this->titulo = titulo;
}

void setFecha(DTFecha fecha) {
    this->fecha = fecha;
}

DTRefer get_DT()
    {
        return this->DT;
    }