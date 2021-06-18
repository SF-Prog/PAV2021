#ifndef CONTROLADORINICIARSESION
#define CONTROLADORINICIARSESION

#include "../interfaces/IControladorIniciarSesion.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../clases/Sesion.h"
#include <string>
#include <iostream>

using namespace std;

class Sesion;

class ControladorIniciarSesion: public IControladorIniciarSesion{
    private:    
        string email;
        string password;
    public:
        ControladorIniciarSesion();
        void ingresarCredenciales(string, string);
        void iniciarSesion();
        void cancelar();
        ~ControladorIniciarSesion();
};
#endif