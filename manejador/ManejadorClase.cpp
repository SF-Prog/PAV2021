#include "ManejadorClase.h"
        
ManejadorClase* ManejadorClase::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorClase();
    return instancia;
};
void ManejadorClase::agregarClase(Clase* clase){
    this->clases.push_front(clase);
};
list<Clase*> ManejadorClase::listarClases(){
    return this->clases;
};

Clase* ManejadorClase::getClase(int id){
    Clase* clase = NULL;
  /*  for(list<Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
        if(it2->getId() == id){
          clase = it;
        }    
    };
    return clase;
*/
};