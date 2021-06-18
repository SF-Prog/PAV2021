#ifndef SESION
#define SESION

//#include "Perfil.h"
#include <string>

class Perfil;

class Sesion{
    private:
        static Sesion *instancia;
        Perfil *perfil;
        Sesion();
        ~Sesion();
    public:
        static Sesion* getInstancia();
        Perfil* getPerfil();
        void setPerfil(Perfil*);
};
#endif