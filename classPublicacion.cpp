#include <dataTypes.cpp>

class Publicacion
{
private:
    string DOI;
    string Titulo;
    DTFecha Fecha;
    DTRefer DT;

public:
    DTRefer get_DT();
    bool contienePalabra(string);
};

DTRefer Publicacion ::get_DT()
{
    return this->DT;
};