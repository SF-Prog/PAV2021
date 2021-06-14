#include "ManejadorClase.h"

ManejadorClase* ManejadorClase::instancia=NULL;
ManejadorClase::ManejadorClase(){};
ManejadorClase::~ManejadorClase(){};
ManejadorClase* ManejadorClase::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorClase();
    return instancia;
};
void ManejadorClase::agregarClase(Clase* clase){
    this->clases.push_front(clase);
};
Clase* ManejadorClase::getClase(int id){
    Clase* clase = NULL;
    for(list<Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
        if((*it)->getId() == id){
          clase = (*it);
        }
    };
    return clase;
};
list<Clase*> ManejadorClase::listarClases(){
    return this->clases;
};