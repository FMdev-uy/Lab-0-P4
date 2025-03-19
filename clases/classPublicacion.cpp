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
    Publicacion() {};                                                  // Constructor por defecto
    Publicacion(string doi, string titulo, DTFecha fecha, DTRefer dt)  // Constructor por valor
        : DOI(doi), Titulo(titulo), Fecha(fecha), DT(dt) {}            // Inicialización de miembros
    virtual ~Publicacion() {}                                          // Destructor
    DTRefer get_DT()
    {
        return this->DT;
    }

    // Método virtual puro
    virtual bool contienePalabra(string palabra) = 0;
};