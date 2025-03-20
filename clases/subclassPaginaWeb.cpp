#include "classpublicacion.h"
#include"dataTypes.h"
#include <f_aux.h>


class PaginaWeb : public Publicacion {
    private:
        string url;
        string contExtraido;
    public:
        PaginaWeb();                                //Constructor por defecto
        PaginaWeb(string url, string contExtraido); //Constructor por valor
        PaginaWeb(PaginaWeb &PW);                   //Constructor por copia
        ~PaginaWeb();                               //Destructor

        void setURL(string url);
        void setContExtraido(string contExtraido);
        string getURL();
        string getContExtraido();

        bool contienePalabra(string palabra);
};

PaginaWeb :: PaginaWeb() {
    this->url = "";
    this->contExtraido = "";
}

PaginaWeb :: PaginaWeb(string url, string contExtraido) {
    this->url = url;
    this->contExtraido = contExtraido;
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
    
}