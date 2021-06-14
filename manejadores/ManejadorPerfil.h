#ifndef MANEJADORPERFIL
#define MANEJADORPERFIL

#include "../clases/Perfil.h"
#include <list>

class ManejadorPerfil {
    private:
        static ManejadorPerfil* instancia;
        list<Perfil*> perfiles;
        ManejadorPerfil();
        ~ManejadorPerfil();
    public:
        static ManejadorPerfil* getInstancia();
        void add(Perfil*);
        Perfil* getPerfil(string);
        list<Perfil*> listarPerfiles();
};
#endif