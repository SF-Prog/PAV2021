#ifndef MANEJADORCLASE
#define MANEJADORCLASE

#include "../clases/Clase.h"
#include <map>

class ManejadorClase {
    private:
        static ManejadorClase* instancia;
        map<int, Clase*> clases;
        ManejadorClase();
        ~ManejadorClase();
    public:
        static ManejadorClase* getInstancia();
        void agregarClase(Clase*);
        Clase* getClase(int);
        map<int, Clase*> listarClases();
        void eliminarClase(int);
};
#endif