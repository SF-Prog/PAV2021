#include "DtInfoClase.h"

DtInfoClase::DtInfoClase(){};
DtInfoClase::DtInfoClase(int id, string nombre, list<Docente*> docentes){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
};
ostream& operator <<(ostream& salida, DtInfoClase& dtic){
    cout<<"Clases: "<<endl<<endl;
    list<Docente*> listaDocentes = dtic.docentes;
    list<Docente*>::iterator it = listaDocentes.begin();
    while(it != listaDocentes.end()){
        cout<< dtic.id<<"\t\t"<<dtic.nombre<<(*it)<<endl;
        it++;
    }    
    return salida;
}