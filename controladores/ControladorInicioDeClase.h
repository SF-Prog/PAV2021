#ifndef CONTROLADORINICIODECLASE
#define CONTROLADORINICIODECLASE

#include "IControladorInicioDeClase.h"

class ControladorInicioDeClase: public IControladorInicioDeClase{
    private:
        //agregar los datos que se recuerdan
    public:
        void ingresarDatosPerfil(DtPerfil);
        void ingresarEstudiante(string);
        void ingresarDocente(string);
        void altaUsuario();
        void cancelar();
};
#endif