#ifndef CONTROLADORCLASE
#define CONTROLADORCLASE

#include <list>

using namespace std;

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