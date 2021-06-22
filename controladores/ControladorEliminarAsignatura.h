#ifndef CONTROLADORELIMINARASIGNATURA
#define CONTROLADORELIMINARASIGNATURA

#include "../interfaces/IControladorEliminarAsignatura.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorClase.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../clases/Perfil.h"

class Estudiante;
class Docente;


class ControladorEliminarAsignatura: public IControladorEliminarAsignatura{
    private:
        string codigo;
    public:
        ControladorEliminarAsignatura();
        list<string> listarAsignaturas();
        void selectAsignatura(string);
        void eliminarAsignatura();
        void cancelar();
};
#endif
