#include "Fabrica.h"

Fabrica* Fabrica::instancia=NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia==NULL)
        instancia= new Fabrica();
    return instancia;
}

IControladorIniciarSesion* Fabrica::getIControladorIniciarSesion(){
    return new ControladorIniciarSesion();
};

IControladorAltaAsignatura* Fabrica::getIControladorAltaAsignatura(){
    return new ControladorAltaAsignatura();
}

IControladorAltaUsuario* Fabrica::getIControladorAltaUsuario(){
    return new ControladorAltaUsuario();
}

IControladorAsignarAsignaturaDocente* Fabrica::getIControladorAsignarAsignaturaDocente(){
    return new ControladorAsignarAsignaturaDocente();
}

IControladorAsignarAsignaturaDocente* Fabrica::getIControladorAsignaturaDocente(){
    return new ControladorAsignarAsignaturaDocente();
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
