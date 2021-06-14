#ifndef CONTROLADORINICIODECLASE
#define CONTROLADORINICIODECLASE

#include "../clases/Sesion.h"
#include "../clases/Docente.h"
#include "../clases/Estudiante.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorClase.h"
#include "../interfaces/IControladorInicioDeClase.h"
#include "../datatypes/DtIniciarClase.h"
#include "../datatypes/DtIniciarClaseFull.h"

#include <Rpc.h>

class ControladorInicioDeClase: public IControladorInicioDeClase{
    private:
        Docente* docente;
        DtIniciarClase dtInicio;
        DtIniciarClaseFull data;
        list<string> habilitados;
    public:
        ControladorInicioDeClase();
        list<string> asignaturasAsignadas();
        bool selectAsignatura(DtIniciarClase);
        list<string> inscriptosAsignatura();
        void habilitar(string);
        DtIniciarClaseFull datosIngresados();
        void iniciarClase();
        void cancelar();
        ~ControladorInicioDeClase();
};
#endif