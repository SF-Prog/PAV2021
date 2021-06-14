#ifndef CONTROLADORASIGNARASIGNATURADOCENTE
#define CONTROLADORASIGNARASIGNATURADOCENTE

#include "../interfaces/IControladorAsignarAsignaturaDocente.h"
#include "../manejador/ManejadorAsignatura.h"
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
        list<string> listarAsignaturas();
        /*list<string> docentesSinLaAsignatura(string);
        void selectDocente(string, TipoRol);
        void asignarDocente();*/
};
#endif