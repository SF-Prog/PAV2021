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