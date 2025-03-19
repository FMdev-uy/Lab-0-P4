<<<<<<< Updated upstream
#include <dataTypes.cpp>

class Publicacion
{
=======
#include <iostream>
#include <string>
#include <dataTypes.cpp>
using namespace std;

// Definimos estructuras auxiliares (asumimos su existencia)
struct DTFecha {
    int dia, mes, anio;
};

struct DTRefer {
    string referencia;
};

// Clase abstracta
class publicacion {
>>>>>>> Stashed changes
private:
    string DOI;
    string Titulo;
    DTFecha Fecha;
    DTRefer DT;

public:
<<<<<<< Updated upstream
    DTRefer get_DT();
    bool contienePalabra(string);
};

DTRefer Publicacion ::get_DT()
{
    return this->DT;
};
=======
    // Constructor
    publicacion(string doi, string titulo, DTFecha fecha, DTRefer dt) 
        : DOI(doi), Titulo(titulo), Fecha(fecha), DT(dt) {}  // Inicialización de miembros

    // Destructor
    virtual ~publicacion() {}

    // Método getter
    DTRefer get_DT() {
        return this->DT;
    }

    // Método virtual puro (hace que la clase sea abstracta)
    virtual bool contienePalabra(string palabra) = 0;
};
>>>>>>> Stashed changes
