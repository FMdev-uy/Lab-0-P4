#include <dataTypes.cpp>

// Clase abstracta
class Publicacion
{
private:
    string DOI;
    string Titulo;
    DTFecha Fecha;
    DTRefer DT;

public:
    Publicacion() {};
    // Constructor
    Publicacion(string doi, string titulo, DTFecha fecha, DTRefer dt)
        : DOI(doi), Titulo(titulo), Fecha(fecha), DT(dt) {} // Inicialización de miembros

    // Destructor
    virtual ~Publicacion() {}

    DTRefer get_DT()
    {
        return this->DT;
    }

    // Método virtual puro
    virtual bool contienePalabra(string palabra) = 0;
};