#ifndef CONTROLADORINSCRIPCIONASIGNATURA
#define CONTROLADORINSCRIPCIONASIGNATURA

#include "../interfaces/IControladorInscripcionAsignatura.h"

class ControladorInscripcionAsignatura: public IControladorInscripcionAsignatura{
    private:
        string cod;
    public:
        ControladorInscripcionAsignatura();
        list<string> asignaturasNoInscripto();
        void selectAsignatura(string);
        void inscribir();
        void cancelar();
        ~ControladorInscripcionAsignatura();
};
#endif