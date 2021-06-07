#ifndef FABRICA
#define FABRICA

#include "IControladorAClaseEnVivo.h"
#include "IControladorAltaAsignatura.h"
#include "IControladorAltaUsuario.h"
#include "IControladorAsignarAsignaturaDocente.h"
#include "IControladorAsignaturaDocente.h"
#include "IControladorAsistenciaClaseEnVivo.h"
#include "IControladorEliminarAsignatura.h"
#include "IControladorEnvioDeMensaje.h"
#include "IControladorInicioDeClase.h"
#include "IControladorInscripcionAsignatura.h"
#include "IControladorListarClases.h"


class Fabrica{
    private: 
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorAClaseEnVivo* getIControladorAClaseEnVivo();
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



#endif