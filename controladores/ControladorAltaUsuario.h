#ifndef CONTROLADORALTAUSUARIO
#define CONTROLADORALTAUSUARIO

#include "IControladorAltaUsuario.h"

class ControladorAltaUsuario: public IControladorAltaUsuario{
    private:
        DtPerfil datosUsuario;
        string documentoEstudiante;
        string institutoDocente;
    public:
        void ingresarDatosPerfil(DtPerfil);
        void ingresarEstudiante(string);
        void ingresarDocente(string);
        void altaUsuario();
        void cancelar();
};
#endif