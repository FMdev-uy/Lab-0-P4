#include "subclassPaginaWeb.h"

PaginaWeb :: PaginaWeb() {
    this->url = "";
    this->contExtraido = "";
}

PaginaWeb :: PaginaWeb(string DOI, string titulo,DTFecha fecha, string url, string contExtraido) {
    this->url = url;
    this->contExtraido = contExtraido;
    setDOI(DOI);
    setTitulo(titulo);
    setFecha(fecha);
}

PaginaWeb :: PaginaWeb(PaginaWeb &PW) {
    PaginaWeb *pagWeb;
    pagWeb = new PaginaWeb;
    pagWeb->url = PW.url;
    pagWeb->contExtraido = PW.contExtraido;
}

void PaginaWeb :: setURL(string url) {
    this->url = url;
}

void PaginaWeb :: setContExtraido(string contExtraido) {
    this->contExtraido = contExtraido;
}

string PaginaWeb :: getURL() {
    return this->url;
}

string PaginaWeb :: getContExtraido() {
    return this->contExtraido;
}

bool contienePalabra(string palabra) {
    return buscarPalabra(palabra, contExtraido);
}