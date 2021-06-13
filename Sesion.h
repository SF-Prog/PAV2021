#ifndef SESION
#define SESION

#include "DtPerfil.h"

class Sesion{
    private:
        static Sesion *instancia;
        DtPerfil* perfil;
        Sesion();
        ~Sesion();
    public:
        static Sesion* getInstancia();
        DtPerfil* getPerfil();
        void setPerfil(DtPerfil*);
};
#endif