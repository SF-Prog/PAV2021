#include "Fabrica.h"
#include "ControladorAClaseEnVivo.h"
#include "ControladorAltaAsignatura.h"
#include "ControladorAltaUsuario.h"
#include "ControladorAsignarAsignaturaDocente.h"
#include "ControladorAsignaturaDocente.h"
#include "ControladorAsistenciaClaseEnVivo.h"
#include "ControladorEliminarAsignatura.h"
#include "ControladorEnvioDeMensaje.h"
#include "ControladorInicioDeClase.h"
#include "ControladorInscripcionAsignatura.h"
#include "ControladorListarClases.h"


Fabrica* Fabrica::instancia=NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia==NULL)
        instancia= new Fabrica();
    return instancia;
}

IControladorAClaseEnVivo* Fabrica::getIControladorAClaseEnVivo(){
    return new ControladorAClaseEnVivo();
}

IControladorAltaAsignatura* Fabrica::getIControladorAltaAsignatura(){
    return new ControladorAltaAsignatura();
}

IControladorAltaUsuario* Fabrica::getIControladorAltaUsuario(){

    return new ControladorAltaUsuario();

}

IControladorAsignarAsignaturaDocente* Fabrica::getIControladorAsignarAsignaturaDocente(){
    return new ControladorAsignarAsignaturaDocente();
}

IControladorAsignaturaDocente* Fabrica::getIControladorAsignaturaDocente(){
    return new ControladorAsignaturaDocente();
}

IControladorAsistenciaClaseEnVivo* Fabrica::getIControladorAsistenciaClaseEnVivo(){
    return new ControladorAsistenciaClaseEnVivo();
}

IControladorEliminarAsignatura* Fabrica::getIControladorEliminarAsignatura(){
    return new ControladorEliminarAsignatura();
}


IControladorEnvioDeMensaje* Fabrica::getIControladorEnvioDeMensaje(){
    return new ControladorEnvioDeMensaje();
}


IControladorInicioDeClase* Fabrica::getIControladorInicioDeClase(){
    return new ControladorInicioDeClase();
}


IControladorInscripcionAsignatura* Fabrica::getIControladorInscripcionAsignatura(){
    return new ControladorInscripcionAsignatura();
}


IControladorListarClases* Fabrica::getIControladorListarClases(){
    return new ControladorListarClases();
}

Fabrica::~Fabrica(){}
