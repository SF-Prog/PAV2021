#include "../clases/Fabrica.h"

#include "../controladores/ControladorAsignarAsignaturaDocente.h"
#include "../controladores/ControladorAsistenciaClaseEnVivo.h"
#include "../controladores/ControladorEliminarAsignatura.h"
#include "../controladores/ControladorEnvioDeMensaje.h"
#include "../controladores/ControladorFinalizacionDeAsistenciaClaseEnVivo.h"
#include "../controladores/ControladorFinalizacionDeClase.h"
#include "../controladores/ControladorInicioDeClase.h"
#include "../controladores/ControladorInscripcionAsignatura.h"
#include "../controladores/ControladorListarClases.h"
#include "../controladores/ControladorReproduccionDeClaseEnDiferido.h"
#include "../controladores/ControladorTiempoAsistenciaAClase.h"
#include "../controladores/ControladorTiempoDictadoDeClases.h"
#

#include <string>


using namespace std;


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
