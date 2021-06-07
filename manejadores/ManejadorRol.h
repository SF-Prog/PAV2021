#ifndef MANEJADORROL
#define MANEJADORROL

#include "Rol.h"
#include <list>

class ManejadorRol {
    private:
        static ManejadorRol* instancia;
        list<Rol*> roles;
    public:
        static ManejadorRol* getInstancia();
        bool noDictaAsignatura(string);
};
#endif