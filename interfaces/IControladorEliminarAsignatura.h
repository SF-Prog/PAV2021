#ifndef ICONTROLADORELIMINARASIGNATURA
#define ICONTROLADORELIMINARASIGNATURA

#include <string>
#include <list>

using namespace std;

class IControladorEliminarAsignatura{
    public:
        virtual list<string> listarAsignaturas() = 0;
        virtual void selectAsignatura(string) = 0;
        virtual void eliminarAsignatura() = 0;
        virtual void cancelar() = 0;
};
#endif
