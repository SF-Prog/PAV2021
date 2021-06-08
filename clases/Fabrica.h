#ifndef FABRICA
#define FABRICA

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


#include <string>
using namespace std;

class Fabrica{
    private: 
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorAsistenciaClaseEnVivo* getIControladorAClaseEnVivo();
        IControladorAltaAsignatura* getIControladorAltaAsignatura();
        IControladorAltaUsuario* getIControladorAltaUsuario();
        IControladorAsignarAsignaturaDocente* getIControladorAsignarAsignaturaDocente();
        IControladorAsignaturaDocente* getIControladorAsignaturaDocente();
        IControladorAsistenciaClaseEnVivo* getIControladorAsistenciaClaseEnVivo();
        IControladorEliminarAsignatura* getIControladorEliminarAsignatura();
        IControladorEnvioDeMensaje* getIControladorEnvioDeMensaje();
        IControladorInicioDeClase* getIControladorInicioDeClase();      
        IControladorInscripcionAsignatura* getIControladorInscripcionAsignatura();      
        IControladorListarClases* getIControladorListarClases();        
        ~Fabrica();
};
#endif