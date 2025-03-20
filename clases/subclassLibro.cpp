#include "classPublicacion.h"
#include "f-aux\f_aux.h"

class Libro : public Publicacion
{
private:
    string editorial;
    set<string> palabrasDestacadas;

public:
    Libro();                                       // Constructor por defecto
    Libro(string editorial, set<string> palabras); // Constructor por valor
    void setEditorial(string editorial);
    void setPalabrasDestacadas(set<string> palabras);
    string getEditorial();
    set<string> getPalabrasDestacadas();
    bool contienePalabra(string palabra);
};

Libro::Libro()
{
}
Libro::Libro(string editorial, set<string> palabras)
{
}
void Libro::setEditorial(string editorial)
{
}
void Libro::setPalabrasDestacadas(set<string> palabras)
{
}
string Libro::getEditorial()
{
}
set<string> Libro::getPalabrasDestacadas()
{
}
bool Libro::contienePalabra(string palabra)
{
}
