#ifndef CONTROLADORLISTARCLASES
#define CONTROLADORLISTARCLASES

#include "../interfaces/IControladorListarClases.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../clases/Sesion.h"
#include "../clases/Docente.h"
#include <iostream>

class ControladorListarClases: public IControladorListarClases{
    private:
        Docente* docente;
    public:
        list<string> asignaturasAsignadas();
        list<DtInfoClase> selectAsignatura(string);
};
#endif