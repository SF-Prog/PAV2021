#include "DtInfoClase.h"

DtInfoClase::DtInfoClase(){};
DtInfoClase::DtInfoClase(int id, string nombre, list<string> docentes){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
};
ostream& operator <<(ostream& salida, const DtInfoClase &dtic){
    list<string> docentes = dtic.docentes;
    cout<<dtic.id<<" - "<<dtic.nombre<<endl;
    for(list<string>::iterator it=docentes.begin(); it!=dtic.docentes.end(); it++){
        cout<<(*it)<<endl;
    };
    return salida;
};
DtInfoClase::~DtInfoClase(){};
/*    cout<<dtic.id<<" - "<<dtic.nombre<<end;
    for(list<string>dtic::iterator it=dtic.)
    
    list<string> listaDocentes = dtic.docentes;
    list<string>::iterator it = listaDocentes.begin();
    salida<<dtic.nombre<<":" <<endl;
    while(it != listaDocentes.end()){
        salida<<(*it)<<endl;//(*it)<<endl;
        it++;
    }
    return salida;
*/