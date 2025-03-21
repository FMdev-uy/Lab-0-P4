#include "subclassLibro.h"

Libro :: Libro(){};

Libro :: Libro(string DOI,string titulo, DTFecha fecha, string ed, set<string> palDestacada){
    editorial = ed;
    palabrasDestacadas = paldestacada;
    setDOI(DOI);
    setTitulo(titulo);
    setFecha(fecha);
};

void Libro::setEditorial(string editorial){
    this->editorial = editorial;
};
void Libro::setPalabrasDestacadas(set<string> palabras){
    this->palabrasDestacadas = palabras;
};
string Libro::getEditorial(){
    return this->editorial;
};
set<string> Libro::getPalabrasDestacadas(){
    return this->palabrasDestacadas;
};
bool Libro::contienePalabra(const string palabra, const set<string> palabrasDestacadas) {
    return palabrasDestacadas.find(palabra) != palabrasDestacadas.end();
};

Libro:: ~Libro(){};