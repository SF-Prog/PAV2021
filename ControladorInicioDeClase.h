#ifndef CONTROLADORINICIODECLASE
#define CONTROLADORINICIODECLASE

#include "Sesion.h"
#include "Docente.h"
#include "Estudiante.h"
#include "ManejadorPerfil.h"
#include "ManejadorAsignatura.h"
#include "ManejadorClase.h"
#include "IControladorInicioDeClase.h"
#include "DtIniciarClase.h"
#include "DtIniciarClaseFull.h"

#include <Rpc.h>

class ControladorInicioDeClase: public IControladorInicioDeClase{
    private:
        Docente* docente;
        DtIniciarClase dtInicio;
        DtIniciarClaseFull data;
        list<string> habilitados;
    public:
        list<string> asignaturasAsignadas();
        bool selectAsignatura(DtIniciarClase);
        list<string> inscriptosAsignatura();
        void habilitar(string);
        DtIniciarClaseFull datosIngresados();
        void iniciarClase();
        void cancelar();
};
#endif