#ifndef MANEJADORPERFIL
#define MANEJADORPERFIL

#include "Perfil.h"
#include <list>

class ManejadorPerfil {
    private:
        static ManejadorPerfil* instancia;
        list<Perfil*> perfiles;
    public:
        static ManejadorPerfil* getInstancia();
        void add(Perfil*);
        list<Perfil*> listarPerfiles();
};
#endif