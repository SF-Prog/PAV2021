#include "ControladorListarClases.h"

map<string, string> ControladorListarClases::asignaturasAsignadas(){
    this->docente = dynamic_cast<Docente*>(Sesion::getInstancia()->getPerfil());
    list<string> codigosAsignatura = this->docente->asignaturas();
    //imprimir la lista
};
list<DtInfoClase>ControladorListarClases::selectAsignatura(string cod){
    
