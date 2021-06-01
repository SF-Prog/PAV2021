#ifndef MANEJADORPERFIL
#define MANEJADORPERFIL

#include "Perfil.h"
#include <list>

class ManejadorPerfil {
    public:
        void add(Perfil);
        list<Perfil> listarPerfiles();
};
#endif