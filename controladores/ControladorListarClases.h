#ifndef CONTROLADORLISTARCLASES
#define CONTROLADORLISTARCLASES

#include "IControladorListarClases.h"
#include "Sesion.h"
#include "Docente.h"

class ControladorListarClases: public IControladorListarClases{
    private:
        Docente* docente;
    public:
        list<string, string> asignaturasAsignadas();
        list<DtInfoClase> selectAsignatura(string);
};
#endif