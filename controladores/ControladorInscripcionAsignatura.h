#ifndef CONTROLADORINSCRIPCIONASIGNATURA
#define CONTROLADORINSCRIPCIONASIGNATURA

#include "IControladorInscripcionAsignatura.h"

class ControladorInscripcionAsignatura: public IControladorInscripcionAsignatura{
    private:
        string cod;

    public:
        list<string*> asignaturasNoInscipto();
        void selectAsignatura(string);
        void inscribir();
        void cancelar();
};
#endif