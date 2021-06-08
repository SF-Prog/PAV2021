#ifndef MANEJADORCLASE
#define MANEJADORCLASE

#include "Clase.h"
#include <list>

class ManejadorClase {
    private:
        static ManejadorClase* instancia;
        list<Clase*> clases;
    public:
        static ManejadorClase* getInstancia();
        void agregarClase(Clase*);
        list<Clase*> listarClases();
};
#endif