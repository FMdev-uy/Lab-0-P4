#include <dataTypes.cpp>
#include <classPublicacion.cpp>

class ArticuloRevista
{
private:
    string revista;
    string extracto;
public:
    ArticuloRevista();//Constructor por defecto
    ArticuloRevista(string revista,string extracto);//Constructor por valor
    ArticuloRevista(ArticuloRevista &A);//Constructor por copia
    ~ArticuloRevista();//Destructor
};

ArticuloRevista::ArticuloRevista(){
    this->revista = "";
    this->extracto = "";
}

ArticuloRevista::ArticuloRevista(string revista,string extracto){
    this->revista = revista;
    this->extracto = extracto;
}

ArticuloRevista::ArticuloRevista(ArticuloRevista &A){
    ArticuloRevista *Art;
    Art = new ArticuloRevista;
    Art->revista = A.revista;
    Art->extracto = A.extracto;
}

ArticuloRevista::~ArticuloRevista(){}

class Publicacion : public ArticuloRevista{
    public: bool contienePalabra(string);
};





