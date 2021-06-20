#ifndef FABRICA
#define FABRICA

//#include "../interfaces/IControladorIniciarSesion.h"
#include "../interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "../interfaces/IControladorAltaAsignatura.h"
#include "../interfaces/IControladorAltaUsuario.h"
#include "../interfaces/IControladorAsignarAsignaturaDocente.h"
#include "../interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "../interfaces/IControladorEliminarAsignatura.h"
#include "../interfaces/IControladorEnvioDeMensaje.h"
#include "../interfaces/IControladorInicioDeClase.h"
#include "../interfaces/IControladorInscripcionAsignatura.h"
#include "../interfaces/IControladorListarClases.h"
#include "../interfaces/IControladorAgregarDatos.h"
#include "../controladores/ControladorAsistenciaClaseEnVivo.h"
#include "../controladores/ControladorAltaAsignatura.h"
#include "../controladores/ControladorAltaUsuario.h"
#include "../controladores/ControladorAsignarAsignaturaDocente.h"
#include "../controladores/ControladorAsistenciaClaseEnVivo.h"
#include "../controladores/ControladorEliminarAsignatura.h"
#include "../controladores/ControladorEnvioDeMensaje.h"
#include "../controladores/ControladorInicioDeClase.h"
#include "../controladores/ControladorInscripcionAsignatura.h"
#include "../controladores/ControladorListarClases.h"
#include "../controladores/ControladorIniciarSesion.h"
#include "../controladores/ControladorAgregarDatos.h"

#include <string>
using namespace std;

class Fabrica{
    private: 
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorIniciarSesion* getIControladorIniciarSesion();
        IControladorAltaAsignatura* getIControladorAltaAsignatura();
        IControladorAltaUsuario* getIControladorAltaUsuario();
        IControladorAsignarAsignaturaDocente* getIControladorAsignarAsignaturaDocente();
        IControladorAsignarAsignaturaDocente* getIControladorAsignaturaDocente();
        IControladorAsistenciaClaseEnVivo* getIControladorAsistenciaClaseEnVivo();
        IControladorEliminarAsignatura* getIControladorEliminarAsignatura();
        IControladorEnvioDeMensaje* getIControladorEnvioDeMensaje();
        IControladorInicioDeClase* getIControladorInicioDeClase();      
        IControladorInscripcionAsignatura* getIControladorInscripcionAsignatura();      
        IControladorListarClases* getIControladorListarClases();
        IControladorAgregarDatos* getIControladorAgregarDatos(); 
        ~Fabrica();
};
#endif