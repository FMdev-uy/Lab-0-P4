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