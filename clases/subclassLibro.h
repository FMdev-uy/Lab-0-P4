#include "classPublicacion.h"
#include "f_aux.h"

class Libro : public Publicacion
{
private:
    string editorial;
    set<string> palabrasDestacadas;

public:
    Libro();                                     
    Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> palDestacada); 
    void setEditorial(string);
    void setPalabrasDestacadas(set<string>);
    string getEditorial();
    set<string> getPalabrasDestacadas();
    bool contienePalabra(string, set<string>);
};
