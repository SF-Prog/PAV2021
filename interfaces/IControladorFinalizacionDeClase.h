#ifndef ICONTROLADORFINALIZACIONDECLASE
#define ICONTROLADORFINALIZACIONDECLASE

#include <string>
#include <list>

using namespace std;

class IControladorFinalizacionDeClase {
    public:
         virtual void ingresarDatosPerfil() = 0; // Solo para definir la clase virtual
        // virtual void ingresarEstudiante(string) = 0;
        // virtual void ingresarDocente(string) = 0;
        // virtual void altaUsuario() = 0;
        // virtual void cancelar() = 0;
};
#endif