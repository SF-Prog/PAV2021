#ifndef DTCLASE
#define DTCLASE

#include "../enum/TipoRol.h"
#include <string>
#include <ctime>

using namespace std;

class DtClase{
    private:
        int id;
        string nombre;
        TipoRol tipo;
        time_t inicio;
    public:
        // Constructores
        DtClase();
        DtClase(int, string, TipoRol, time_t);

        // Getters and Setters
        int getId();
        string getNombre();
        TipoRol getTipo();
        time_t getInicio();
        void setId(int);
        void setNombre(string);
        void setTipo(TipoRol);
        void setInicio(time_t);

        // Destructor
        ~DtClase();
};
#endif