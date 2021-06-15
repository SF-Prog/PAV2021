#ifndef CONTROLADORASIGNARASIGNATURADOCENTE
#define CONTROLADORASIGNARASIGNATURADOCENTE

#include "../interfaces/IControladorAsignarAsignaturaDocente.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../clases/Docente.h"
#include "../clases/Rol.h"
#include "../enum/TipoRol.h"
#include <iostream>
#include <list>
#include <map>
#include <iterator>

class ControladorAsignarAsignaturaDocente: public IControladorAsignarAsignaturaDocente{
    private:
        string cod;
        string email;
        TipoRol rol;

    public:
        ControladorAsignarAsignaturaDocente();
        list<string> listarAsignaturas();
        list<string> docentesSinLaAsignatura(string);
        void selectDocente(string, TipoRol);
        void asignarDocente();
        ~ControladorAsignarAsignaturaDocente();
};
#endif