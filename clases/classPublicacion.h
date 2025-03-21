#include"dataTypes.h"
#include"f-aux/f_aux.h"

// Clase abstracta
class Publicacion
{
private:
    string DOI;
    string Titulo;
    DTFecha Fecha;
    DTRefer  Refer;
public:
    Publicacion() {};                                                  // Constructor por defecto
    Publicacion(string doi, string titulo, DTFecha fecha, DTRefer refer)  // Constructor por valor
        : DOI(doi), Titulo(titulo), Fecha(fecha), Refer(refer) {}            // Inicialización de miembros
    virtual ~Publicacion() {}                                          // Destructor
    void setRefer(string doi, string titulo, DTFecha fecha, set<string> autores);
    DTRefer get_Refer();
    // Método virtual puro
    virtual bool contienePalabra(string palabra) = 0;
};