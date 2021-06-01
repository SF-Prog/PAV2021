#ifndef ICONTROLADORASIGNARASIGNATURADOCENTE
#define ICONTROLADORASIGNARASIGNATURADOCENTE

#include "TipoRol.h"
#include <list>
#include <string>

using namespace std;

class IControladorAsignarAsignaturaDocente{
    public:
        virtual list<string> listarAsignaturas();
        virtual void docentesSinLaAsignatura(string);
        virtual void selectDocente(string, TipoRol);
        virtual void asignarDocente();
};
#endif