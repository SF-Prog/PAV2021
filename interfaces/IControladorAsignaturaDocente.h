#ifndef ICONTROLADORASIGNATURADOCENTE
#define ICONTROLADORASIGNATURADOCENTE

#include "../enum/TipoRol.h"
#include <list>
#include <string>

using namespace std;

class IControladorAsignaturaDocente{
    public:
        virtual list<string> listarAsignaturas() = 0;
        virtual void docentesSinLaAsignatura(string) = 0;
        virtual void selectDocente(string, TipoRol) = 0;
        virtual void asignarDocente() = 0;
};
#endif