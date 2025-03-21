#include "classInvestigador.h"

string Investigador::toString() { 
   return ORCID + "->" + nombre + "/" + institucion; 
} 

set<string> Investigador::listarPublicaciones( const DTFecha desde,const string &palabra) {
 set<string> result; 
 for (Publicacion* pub: publicaciones) { 
     if (FechaMayorIgual(desde,pub->getFecha()) && pub->contienePalabra(palabra)) {
      result.insert(pub->getDOI()); 
   }
 }
}