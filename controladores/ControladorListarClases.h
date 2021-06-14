#ifndef CONTROLADORLISTARCLASES
#define CONTROLADORLISTARCLASES

#include "../interfaces/IControladorListarClases.h"
#include "../manejador/ManejadorAsignatura.h"
#include "../clases/Sesion.h"
#include "../clases/Docente.h"
#include <iostream>
#include <string>

using namespace std;

class ControladorListarClases: public IControladorListarClases{
    class ManejadorAsignatura{};
    private:
        Docente* docente;
    public:
        list<string> asignaturasAsignadas();
        list<DtInfoClase> selectAsignatura(string);
};
#endif