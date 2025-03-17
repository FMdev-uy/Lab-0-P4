#include <string>
#include <set>
using namespace std;

struct dtfecha
{
    int dia;
    int mes;
    int anio;
};
typedef dtfecha *DTFecha;

struct dtrefer
{
    string DOI;
    string titulo;
    set<string> autores;
};
typedef dtrefer *DTRefer;