#ifndef CONTROLADORELIMINARASIGNATURA
#define CONTROLADORELIMINARASIGNATURA

#include "../interfaces/IControladorEliminarAsignatura.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorClase.h"
#include "../manejadores/ManejadorPerfil.h"


class ControladorEliminarAsignatura: public IControladorEliminarAsignatura{
    private:
        string codigo;
    public:
        ControladorEliminarAsignatura();
        list<string> listarAsignaturas();
        void selectAsignatura(int);
        void eliminarAsignatura();
        void cancelar();
};
#endif
