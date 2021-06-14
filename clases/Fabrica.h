#ifndef FABRICA
#define FABRICA

#include "../interfaces/IControladorAltaAsignatura.h"
#include "../interfaces/IControladorAltaUsuario.h"
#include "../interfaces/IControladorAsignarAsignaturaDocente.h"
//#include "../interfaces/IControladorAsignaturaDocente.h"
#include "../interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "../interfaces/IControladorEliminarAsignatura.h"
#include "../interfaces/IControladorEnvioDeMensaje.h"
#include "../interfaces/IControladorInicioDeClase.h"
#include "../interfaces/IControladorInscripcionAsignatura.h"
#include "../interfaces/IControladorListarClases.h"


class Fabrica{
    private: 
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorAltaAsignatura* getIControladorAltaAsignatura();
        IControladorAltaUsuario* getIControladorAltaUsuario();
        IControladorAsignarAsignaturaDocente* getIControladorAsignarAsignaturaDocente();
        IControladorAsignaturaDocente* getIControladorAsignaturaDocente();
        IControladorEliminarAsignatura* getIControladorEliminarAsignatura();
        IControladorEnvioDeMensaje* getIControladorEnvioDeMensaje();
        IControladorInicioDeClase* getIControladorInicioDeClase();      
        IControladorInscripcionAsignatura* getIControladorInscripcionAsignatura();      
        IControladorListarClases* getIControladorListarClases();        
        ~Fabrica();



#endif