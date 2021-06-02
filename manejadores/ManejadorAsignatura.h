#ifndef MANEJADORASIGNATURA
#define MANEJADORASIGNATURA

#include "Asignatura.h"
#include <map>
#include <list>

using namespace std;

class ManejadorAsignatura{
    private:
       static ManejadorAsignatura* instancia;
       map<string, Asignatura*> asignaturas;
       ManejadorAsignatura();
    public:
       static ManejadorAsignatura* getInstancia();
       list<Asignatura*> getAsignaturas();
       Asignatura* getAsignatura(string);
       void removerAsignatura(Asignatura*);
       void agregarAsignatura(Asignatura*);
};
#endif