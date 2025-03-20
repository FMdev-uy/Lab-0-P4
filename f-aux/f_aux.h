#include "clases/dataTypes.h"

// FUNCIONES AUXILIARES
/*
-crearFecha es una función que crea una instancia de la estructura DTFecha con los datos que recibe
*/
DTFecha crearFecha(int dia, int mes, int anio);

/*
-crearDT es una función que crea una instancia de la estructura DTRefer con los datos que recibe
*/
DTRefer crearRefer(string doi, string titulo, DTFecha fecha, set<string> autores);

/*
-buscarPalabra es una función que devuelve True si la palabra p se encuentra en el extracto en caso contrario retorna False.
Esta función utiliza el metodo <string>.find(<string>) de la biblioteca <string> el cual intenta encontrar la primera aparición del string p dentro de extracto.
Si la encuentra, devuelve la posición (int) donde comienza la palabra dentro de extracto.
Si NO la encuentra, devuelve string::npos (un valor especial que indica "no encontrado").
*/
bool buscarPalabra(string p, string extracto);
