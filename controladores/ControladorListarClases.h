#ifndef CONTROLADORLISTARCLASES
#define CONTROLADORLISTARCLASES

#include "IControladorListarClases.h"
#include "ManejadorAsignatura.h"
#include "Sesion.h"
#include "Docente.h"
#include <iostream>

class ControladorListarClases: public IControladorListarClases{
    private:
        Docente* docente;
    public:
        list<string> asignaturasAsignadas();
        list<DtInfoClase> selectAsignatura(string);
};
#endif