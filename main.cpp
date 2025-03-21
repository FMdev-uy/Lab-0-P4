#include <list>
#include <map>
#include "clases/clases.h"

using namespace std;

list<Publicacion *> publicaciones;
map<string, Publicacion *> map_publicaciones;

list<Investigador *> investigadores;
map<string, Investigador *> map_investigadores;

void coleccion_guardarPublicacion(Publicacion *pub)
{
    publicaciones.push_back(pub);
    pair<string, Publicacion *> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion *pub)
{
    publicaciones.remove(pub);
    map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador *inv)
{
    investigadores.push_back(inv);
    pair<string, Investigador *> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador *coleccion_getInvestigador(string ORCID)
{
    return map_investigadores[ORCID];
}

Publicacion *coleccion_getPublicacion(string DOI)
{
    return map_publicaciones[DOI];
}

void parte_a()
{
    //crear ciertos objetos de clase ArticuloRevista (constructor por parámetros)
}

void parte_b()
{
    //crear ciertos objetos de clase Libro (constructor por parámetros)
}

void parte_c()
{
    //crear ciertos objetos de clase PaginaWeb (constructor por parámetros)
    //PaginaWeb* paginaWeb = new PaginaWeb(10.3456/ghi789, Diagramas para Principiantes, 20/10/2024, www.umlparaprincipiantes.com, En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.);
    cout << "Se guardó la página web" <<"\n";
}

void parte_d()
{
    /*imprimir en consola el restulado de getDT() para todos los objetos 
      Publicacion creados (usar la insercion de flujo)*/
}

void parte_e()
{
    //crear ciertos objetos de clase investigador (constructor por parámetros)
}

void parte_f()
{
    /*imprimir en consola el restultado de ejecutar toString para todos
      los objetos de investigador creados*/
}

void parte_g()
{
    //crear links entre publicaciones e investigadores
}

void parte_h()
{
    /*invocar la operacion listarPublicaciones(10/12/2023, "UML") para la investigadora
      0000-0003-1234-5678(Carla Oliveri) e imprimir en consola de a un string por linea*/
}

void parte_i()
{
    /*ejecutar la eliminacion del objeto 10.4567/jkl012 (segundo de ArticuloRevista)
      de clase publicacion*/
}

void parte_j()
{
    /*invocar la operacion listarPublicaciones(1/1/2020, "UML") para la investigadora
      0000-0003-1234-5678(Carla Oliveri) e imprimir en consola de a un string por linea*/
}

void parte_k()
{
    /*imprimir en consola el restulado de getDT() para todos los objetos 
      Publicacion creados (usar la insercion de flujo) (mismo codigo que parte d)*/
}

int main()
{
    cout << "parte_a" << endl;
    parte_a();
    cout << "parte_b" << endl;
    parte_b();
    cout << "parte_c" << endl;
    parte_c();
    cout << "parte_d" << endl;
    parte_d();
    cout << "parte_e" << endl;
    parte_e();
    cout << "parte_f" << endl;
    parte_f();
    cout << "parte_g" << endl;
    parte_g();
    cout << "parte_h" << endl;
    parte_h();
    cout << "parte_i" << endl;
    parte_i();
    cout << "parte_j" << endl;
    parte_j();
    cout << "parte_k" << endl;
    parte_k();
    cout << "cleanUp" << endl;
    cleanUp();
    cout << "fin" << endl;

    return 0;
}