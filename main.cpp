#include <iostream>
#include <list>
#include <map>
#include <clases.cpp>
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
}

void parte_b()
{
}

void parte_c()
{
}

void parte_d()
{
}

void parte_e()
{
}

void parte_f()
{
}

void parte_g()
{
}

void parte_h()
{
}

void parte_i()
{
}

void parte_j()
{
}

void parte_k()
{
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