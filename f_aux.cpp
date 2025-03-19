#include<clases\dataTypes.cpp>

DTFecha crearFecha(int dia ,int mes , int anio){
    DTFecha f = new dtfecha{dia,mes,anio};
    return f;
}

DTRefer crearDT(string doi, string titulo, DTFecha fecha, set<string> autores){
    DTRefer dt = new dtrefer{doi,titulo,fecha,autores};
    return dt;
}

bool buscarPalabra(string p,string extracto){
    return extracto.find(p) != string::npos;  
}



















