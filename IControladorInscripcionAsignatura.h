#ifndef ICONTROLADORINSCRIPCIONASIGNATURA
#define ICONTROLADORINSCRIPCIONASIGNATURA

#include <list>
#include <string>

using namespace std;

class IControladorInscripcionAsignatura{
    public:
        virtual list<string*> asignaturasNoInscipto() = 0;
        virtual void selectAsignatura(string) = 0;
        virtual void inscribir() = 0;
        virtual void cancelar() = 0;
};
#endif