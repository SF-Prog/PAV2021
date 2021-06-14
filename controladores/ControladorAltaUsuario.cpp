#include "ControladorAltaUsuario.h"

ControladorAltaUsuario::ControladorAltaUsuario(){};
void ControladorAltaUsuario::ingresarDatosPerfil(DtPerfil dtPerfil){
    this->datosPerfil = dtPerfil;
};
void ControladorAltaUsuario::ingresarEstudiante(string docEstudiante){
    this->documentoEstudiante = docEstudiante;
    this->tipoPerfil = ESTUDIANTE;
};
void ControladorAltaUsuario::ingresarDocente(string inst){
    this->institutoDocente = inst;
    this->tipoPerfil = DOCENTE;
};
void ControladorAltaUsuario::altaUsuario(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    if (this->tipoPerfil == DOCENTE){
        Docente* docente = new Docente(this->datosPerfil.getNombre(), this->datosPerfil.getImagenUrl(),
                                       this->datosPerfil.getEmail(), this->datosPerfil.getPassword(),
                                       this->institutoDocente);
        mP->add(docente);
    }
    else{
        Estudiante* estudiante = new Estudiante(this->datosPerfil.getNombre(), this->datosPerfil.getImagenUrl(),
                                                this->datosPerfil.getEmail(), this->datosPerfil.getPassword(),
                                                this->documentoEstudiante);
        mP->add(estudiante);
    }

};
ControladorAltaUsuario::~ControladorAltaUsuario(){};

void ControladorAltaUsuario::cancelar(){};