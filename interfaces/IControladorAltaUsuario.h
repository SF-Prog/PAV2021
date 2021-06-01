#ifndef ICONTROLADORALTAUSUARIO
#define ICONTROLADORALTAUSUARIO

#include "DtPerfil.h"
#include <string>

using namespace std;

class IControladorAltaUsuario{
    public:
        virtual void ingresarDatosPerfil(DtPerfil);
        virtual void ingresarEstudiante(string);
        virtual void ingresarDocente(string);
        virtual void altaUsuario();
        virtual void cancelar();
};
#endif