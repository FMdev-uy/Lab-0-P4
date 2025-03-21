#include "subclassArticuloRevista.h"

ArticuloRevista::ArticuloRevista()
{
    this->revista = "";
    this->extracto = "";
}

ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto)
{
    this->revista = revista;
    this->extracto = extracto;
    setDOI(DOI);
    setTitulo(titulo);
    setFecha(fecha);
}

ArticuloRevista::ArticuloRevista(ArticuloRevista &A)
{
    ArticuloRevista *Art;
    Art = new ArticuloRevista;
    Art->revista = A.revista;
    Art->extracto = A.extracto;
}

void ArticuloRevista::setRevista(string revista)
{
    this->revista = revista;
}

void ArticuloRevista::setExtracto(string extracto)
{
    this->extracto = extracto;
}

string ArticuloRevista::getRevista()
{
    return this->revista;
}

string ArticuloRevista::getExtracto()
{
    return this->extracto;
}

bool ArticuloRevista::contienePalabra(string palabra)
{
    return buscarPalabra(palabra, extracto); // La descripcion de esta función está en f_aux.h
}

ArticuloRevista::~ArticuloRevista() {}