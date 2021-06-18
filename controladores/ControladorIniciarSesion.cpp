#include "ControladorIniciarSesion.h"

ControladorIniciarSesion::ControladorIniciarSesion(){};
void ControladorIniciarSesion::ingresarCredenciales(string email, string password){
    this->email = email;
    this->password = password;
};
void ControladorIniciarSesion::iniciarSesion(){
    ManejadorPerfil *mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->listarPerfiles();
    list<Perfil*>::iterator it = perfiles.begin();
    while (it!=perfiles.end() && this->email != (*it)->getEmail()){
        it++;
    };
    if(this->email == (*it)->getEmail() && this->password == (*it)->getPassword()){
        Perfil* perfilDeseado = (*it);
        Sesion *sesion = Sesion::getInstancia();
        sesion->setPerfil(perfilDeseado);
    }
    else
        throw invalid_argument("Algunos de los datos que ha ingresado son incorrectos");
};
void ControladorIniciarSesion::cancelar(){};
ControladorIniciarSesion::~ControladorIniciarSesion(){};