#include <dataTypes.cpp>

class publicacion
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

DTRefer publicacion ::get_DT()
{
    return this->DT;
};