#ifndef CONTROLADORINSCRIPCIONASIGNATURA
#define CONTROLADORINSCRIPCIONASIGNATURA

#include "../interfaces/IControladorInscripcionAsignatura.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../clases/Asignatura.h"
#include "../clases/Estudiante.h"
#include "../clases/Sesion.h"
#include <list>
#include <iterator>
#include <iostream>
using namespace std;
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