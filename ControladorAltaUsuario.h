#ifndef CONTROLADORALTAUSUARIO
#define CONTROLADORALTAUSUARIO

#include "IControladorAltaUsuario.h"
#include "ManejadorPerfil.h"
#include "TipoPerfil.h"
#include "Docente.h"
#include "Estudiante.h"

class ControladorAltaUsuario: public IControladorAltaUsuario{
    private:
        DtPerfil datosPerfil;
        string documentoEstudiante;
        string institutoDocente;
        TipoPerfil tipoPerfil;
    public:
        void ingresarDatosPerfil(DtPerfil);
        void ingresarEstudiante(string);
        void ingresarDocente(string);
        void altaUsuario();
        void cancelar();
};
#endif