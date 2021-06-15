#ifndef MANEJADORASIGNATURA
#define MANEJADORASIGNATURA

#include "../clases/Asignatura.h"
#include <map>
#include <list>

using namespace std;

class ManejadorAsignatura{
    private:
       static ManejadorAsignatura* instancia;
       map<string, Asignatura*> asignaturas;
       ManejadorAsignatura();
       ~ManejadorAsignatura();
    public:
       static ManejadorAsignatura* getInstancia();
       map<string, Asignatura*> getAsignaturas();
       Asignatura* getAsignatura(string);
       void removerAsignatura(Asignatura*);
       void agregarAsignatura(Asignatura*);
};
#endif