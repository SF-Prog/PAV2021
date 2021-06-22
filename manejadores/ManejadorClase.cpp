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
    this->clases.insert(pair<int, Clase*>(clase->getId(), clase));
};
Clase* ManejadorClase::getClase(int id){
    map<int, Clase*>::iterator it = this->clases.find(id);
    if (it!=this->clases.end()){
        return this->clases.find(id)->second;
    }else{
      return NULL;
    }
};
map<int, Clase*> ManejadorClase::listarClases(){
    return this->clases;
};
void ManejadorClase::eliminarClase(int id){
    map<int, Clase*>::iterator it = this->clases.find(id);
    this->clases.erase(it);
};
