#ifndef CONTROLADORASIGNARASIGNATURADOCENTE
#define CONTROLADORASIGNARASIGNATURADOCENTE

#include "IControladorAsignarAsignaturaDocente.h"
#include "ManejadorAsignatura.h"
#include "TipoRol.h"
#include <iostream>
#include <list>
#include <map>
#include <iterator>

class ControladorAsignarAsignaturaDocente: public IControladorAsignarAsignaturaDocente{
    private:
        string cod;
        string email;
        TipoRol Rol;

    public:
        list<string> listarAsignaturas();
        void docentesSinLaAsignatura(string);
        void selectDocente(string, TipoRol);
        void asignarDocente();
};
#endif