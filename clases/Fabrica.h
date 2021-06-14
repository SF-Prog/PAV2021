#ifndef FABRICA
#define FABRICA
#include "../Interfaces/IControladorAltaAsignatura.h"
#include "../Interfaces/IControladorAltaUsuario.h"
class Fabrica{
    private: 
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IControladorAltaAsignatura* getIControladorAltaAsignatura();
        IControladorAltaUsuario* getIControladorAltaUsuario();
        ~Fabrica();


};
#endif