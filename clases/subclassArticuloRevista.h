#include "dataTypes.h"
#include "f_aux.h"
#include "classPublicacion.h"

class ArticuloRevista : public Publicacion
{
private:
    string revista;
    string extracto;

public:
    ArticuloRevista();                                // Constructor por defecto
    ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto); // Constructor por valor
    ArticuloRevista(ArticuloRevista &A);              // Constructor por copia
    ~ArticuloRevista();                               // Destructor
    void setRevista(string revista);
    void setExtracto(string extracto);
    string getRevista();
    string getExtracto();
    bool contienePalabra(string palabra);
};