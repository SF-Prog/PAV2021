#include "ManejadorPerfil.h"

ManejadorPerfil* ManejadorPerfil::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorPerfil();
    return instancia;
};
void ManejadorPerfil::add(Perfil* perfil){
    this->perfiles.push_front(perfil);
};
list<Perfil*> ManejadorPerfil::listarPerfiles(){
    return this->perfiles;
};