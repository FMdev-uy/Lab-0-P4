#include "dataTypes.h"
#include "f-aux/f_aux.h"
#include "classPublicacion.h"

class ArticuloRevista : public Publicacion
{
private:
    string revista;
    string extracto;

public:
    ArticuloRevista();                                // Constructor por defecto
    ArticuloRevista(string revista, string extracto); // Constructor por valor
    ArticuloRevista(ArticuloRevista &A);              // Constructor por copia
    ~ArticuloRevista();                               // Destructor
    void setRevista(string revista);
    void setExtracto(string extracto);
    string getRevista();
    string getExtracto();
    bool contienePalabra(string palabra);
};

ArticuloRevista::ArticuloRevista()
{
    this->revista = "";
    this->extracto = "";
}

ArticuloRevista::ArticuloRevista(string revista, string extracto)
{
    this->revista = revista;
    this->extracto = extracto;
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