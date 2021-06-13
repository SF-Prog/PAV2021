#ifndef ICONTROLADORASIGNARASIGNATURADOCENTE
#define ICONTROLADORASIGNARASIGNATURADOCENTE

#include "TipoRol.h"
#include <string>
#include <list>

using namespace std;

class IControladorAsignarAsignaturaDocente{
    public:
        virtual list<string> listarAsignaturas() = 0;
        virtual void docentesSinLaAsignatura(string) = 0;
        virtual void selectDocente(string, TipoRol) = 0;
        virtual void asignarDocente() = 0;
};
#endif