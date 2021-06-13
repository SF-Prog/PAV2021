#ifndef ICONTROLADORLISTARCLASES
#define ICONTROLADORLISTARCLASES

#include "../datatypes/DtInfoClase.h"
#include <string>
#include <map>
#include <list>

using namespace std;

class IControladorListarClases{
    public:
        virtual list<string> asignaturasAsignadas() = 0;
        virtual list<DtInfoClase> selectAsignatura(string) = 0;
};
#endif