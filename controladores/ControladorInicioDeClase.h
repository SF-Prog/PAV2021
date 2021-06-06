#ifndef CONTROLADORINICIODECLASE
#define CONTROLADORINICIODECLASE

#include "../clases/Sesion.h"
#include "../clases/Docente.h"
#include "../clases/Estudiante.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../interfaces/IControladorInicioDeClase.h"
#include "../datatypes/DtIniciarClase.h"
#include "../datatypes/DtIniciarClaseFull.h"

class ControladorInicioDeClase: public IControladorInicioDeClase{
    private:
        Docente* docente;
        DtIniciarClase dtInicio;
        string email;
    public:
        list<string> asignaturasAsignadas();
        bool selectAsignatura(DtIniciarClase);
        list<string> inscriptosAsignatura();
        void habilitar(string);
        DtIniciarClaseFull Ingresados();
        void iniciarClase();
        void cancelar();
};
#endif