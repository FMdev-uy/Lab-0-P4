#include "classPublicacion.h"
#include "f-aux\f_aux.h"

class Libro : public Publicacion
{
private:
    string editorial;
    set<string> palabrasDestacadas;

public:
    Libro();                                     
    Libro(string, set<string>); 
    void setEditorial(string);
    void setPalabrasDestacadas(set<string>);
    string getEditorial();
    set<string> getPalabrasDestacadas();
    bool contienePalabra(string, set<string>);
};
