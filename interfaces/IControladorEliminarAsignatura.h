#ifndef ICONTROLADORELIMINARASIGNATURA
#define ICONTROLADORELIMINARASIGNATURA

#include <string>
#include <list>

using namespace std;

class IControladorEliminarAsignatura{
    private:
        //agregar los datos que se recuerdan
    public:
        list<string> listarAsignaturas();
        void selectAsignatura(string);
        void eliminarAsignatura();
        void cancelar();
};
#endif