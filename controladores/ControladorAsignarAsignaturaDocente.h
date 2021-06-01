#ifndef CONTROLADORASIGNARASIGNATURADOCENTE
#define CONTROLADORASIGNARASIGNATURADOCENTE

#include "IControladorAsignarAsignaturaDocente.h"

class ControladorAsignarAsignaturaDocente: public IControladorAsignarAsignaturaDocente{
    public:
        list<string> listarAsignaturas();
        void docentesSinLaAsignatura(string);
        void selectDocente(string, TipoRol);
        void asignarDocente();
};
#endif