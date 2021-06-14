#include "ManejadorPerfil.h"

ManejadorPerfil* ManejadorPerfil::instancia=NULL;

ManejadorPerfil::ManejadorPerfil(){};
ManejadorPerfil::~ManejadorPerfil(){};
ManejadorPerfil* ManejadorPerfil::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorPerfil();
    return instancia;
};
void ManejadorPerfil::add(Perfil* perfil){
    this->perfiles.push_front(perfil);
};
Perfil* ManejadorPerfil::getPerfil(string email){
    list<Perfil*>::iterator it = this->perfiles.begin();
    while (it != this->perfiles.end() && (*it)->getEmail() != email){
        it++;
    };
    if(it != this->perfiles.end())
        return *it;
    else return NULL;
};
list<Perfil*> ManejadorPerfil::listarPerfiles(){
    return this->perfiles;
};