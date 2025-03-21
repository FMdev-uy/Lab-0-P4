#include"dataTypes.h"
#include"f_aux.h"

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
    void setDt(string doi, string titulo, DTFecha fecha, set<string> autores);
    void setDOI(string DOI);
    void setTitulo(string titulo);
    void setFecha(DTFecha fecha);
    DTRefer get_DT();
    // Método virtual puro
    virtual bool contienePalabra(string palabra) = 0;
};