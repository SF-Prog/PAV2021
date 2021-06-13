#ifndef MANEJADORASIGNATURA
#define MANEJADORASIGNATURA


#include <map>
#include <list>
#include "../clases/Asignatura.h"

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