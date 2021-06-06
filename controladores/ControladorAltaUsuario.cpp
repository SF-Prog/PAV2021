#include "ControladorAltaUsuario.h"

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
    if (this->tipoPerfil == DOCENTE){
        Docente* docente = new Docente(this->datosPerfil.getNombre(), this->datosPerfil.getImagenUrl(),
                                       this->datosPerfil.getEmail(), this->datosPerfil.getPassword(),
                                       this->institutoDocente);
    }
    else
        Estudiante* estudiante = new Estudiante(this->datosPerfil.getNombre(), this->datosPerfil.getImagenUrl(),
                                                this->datosPerfil.getEmail(), this->datosPerfil.getPassword(),
                                                this->documentoEstudiante);
};
void ControladorAltaUsuario::cancelar(){};