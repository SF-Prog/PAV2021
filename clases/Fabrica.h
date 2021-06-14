#ifndef FABRICA
#define FABRICA

#include "../Interfaces/IControladorAClaseEnVivo.h"
#include "../Interfaces/IControladorAltaAsignatura.h"
#include "../Interfaces/IControladorAltaUsuario.h"
#include "../Interfaces/IControladorAsignarAsignaturaDocente.h"
#include "../Interfaces/IControladorAsignaturaDocente.h"
#include "../Interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "../Interfaces/IControladorEliminarAsignatura.h"
#include "../Interfaces/IControladorEnvioDeMensaje.h"
#include "../Interfaces/IControladorInicioDeClase.h"
#include "../Interfaces/IControladorInscripcionAsignatura.h"
#include "../Interfaces/IControladorListarClases.h"


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