#ifndef CONTROLADORLISTARCLASES
#define CONTROLADORLISTARCLASES

#include "IControladorListarClases.h"

class ControladorListarClases: public IControladorListarClases{
    public:
        list<string> asignaturasAsignadas();
        list<DtInfoClase> selectAsignatura(string);
};
#endif