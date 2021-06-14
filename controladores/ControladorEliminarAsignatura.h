#ifndef CONTROLADORELIMINARASIGNATURA
#define CONTROLADORELIMINARASIGNATURA

#include "../interfaces/IControladorEliminarAsignatura.h"

class ControladorEliminarAsignatura: public IControladorEliminarAsignatura{
    private:
        //agregar los datos que se recuerdan
    public:
        ControladorEliminarAsignatura();
        list<string> listarAsignaturas();
        void selectAsignatura(string);
        void eliminarAsignatura();
        void cancelar();
};
#endif