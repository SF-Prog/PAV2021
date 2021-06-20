#include "DtInfoClase.h"

DtInfoClase::DtInfoClase(){};
DtInfoClase::DtInfoClase(int id, string nombre, list<Docente*> docentes){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
};
ostream& operator <<(ostream& salida, DtInfoClase& dtic){
    salida<<"Clases: "<<endl<<endl;
    list<Docente*> listaDocentes = dtic.docentes;
    list<Docente*>::iterator it = listaDocentes.begin();
    salida<<dtic.nombre<<":" <<endl;
    while(it != listaDocentes.end()){
        salida<<(*it)<<endl;//(*it)<<endl;
        it++;
    }
    return salida;
}