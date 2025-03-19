#include <datatypes> 
using namespace std; 

class Investigador { 
 private: 
  string ORCID; //Open Researcher and Contributor ID
  string nombre; 
  string institucion; 
  set<Publicaciones*> publicaciones; 
 public: 
  Investigador() { //Constructor por defecto 
  this->ORCID = ORCID; 
  this->nombre = nombre; 
  this->institucion = institucion; 
  } 
  
  Investigador(const string &id, const string &name, const string &inst) { //constructor con asignación de variables 
      ORCID = id; 
      nombre = name; 
      institucion = inst; 
  } 
  
  string toString(); //devuelve los atributos 
  
  set<string> listarPublicaciones( const &DTFecha desde, const string &palabra); 
}; 

string Investigador::toString() { 
   return ORCID + "->" + nombre + "/" + institucion; 
} 

set<string> Investigador::listarPublicaciones(const &DTFecha desde,const string &palabra) {
 set<string> result; 
 for (Publicaciones* pub: publicaciones) { 
     if (FechaMayorIgual(desde,pub->getFecha()) && pub->contienePalabra(palabra)) {
      result.insert(pub->getDOI()); 
   }
 }
}