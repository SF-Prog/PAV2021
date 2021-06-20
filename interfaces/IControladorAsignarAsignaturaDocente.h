#ifndef ICONTROLADORASIGNARASIGNATURADOCENTE
#define ICONTROLADORASIGNARASIGNATURADOCENTE

#include "../enum/TipoRol.h"
#include <string>
#include <list>

using namespace std;

class IControladorAsignarAsignaturaDocente{
    public:
        virtual list<string> listarAsignaturas() = 0;
        virtual list<string> docentesSinLaAsignatura(string) = 0;
        virtual void selectDocente(string, TipoRol) = 0;
        virtual void asignarDocente() = 0;
        virtual void cancelar() = 0;
};
#endif