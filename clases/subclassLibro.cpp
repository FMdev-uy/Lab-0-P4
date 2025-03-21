#include "subclassLibro.h"

Libro :: Libro(){};

Libro::Libro(string ed, set<string> paldestacada){
    editorial = ed;
    palabrasDestacadas = paldestacada;
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