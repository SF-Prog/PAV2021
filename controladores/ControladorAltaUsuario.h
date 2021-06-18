#ifndef CONTROLADORALTAUSUARIO
#define CONTROLADORALTAUSUARIO

#include "../interfaces/IControladorAltaUsuario.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../enum/TipoPerfil.h"
#include "../clases/Docente.h"
#include "../clases/Estudiante.h"

class ControladorAltaUsuario: public IControladorAltaUsuario{
    private:
        DtPerfil datosPerfil;
        string documentoEstudiante;
        string institutoDocente;
        TipoPerfil tipoPerfil;
    public:
        ControladorAltaUsuario();
        void ingresarDatosPerfil(DtPerfil);
        void ingresarEstudiante(string);
        void ingresarDocente(string);
        void altaUsuario();
        void cancelar();
        ~ControladorAltaUsuario();
};
#endif