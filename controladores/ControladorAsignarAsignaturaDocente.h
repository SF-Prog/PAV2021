#ifndef CONTROLADORASIGNARASIGNATURADOCENTE
#define CONTROLADORASIGNARASIGNATURADOCENTE

#include "../interfaces/IControladorAsignarAsignaturaDocente.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../enum/TipoRol.h"
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
        ControladorAsignarAsignaturaDocente();
        list<string> listarAsignaturas();
        void docentesSinLaAsignatura(string);
        void selectDocente(string, TipoRol);
        void asignarDocente();
        ~ControladorAsignarAsignaturaDocente();
};
#endif