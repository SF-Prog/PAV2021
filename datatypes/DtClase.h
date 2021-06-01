#ifndef DTCLASE
#define DTCLASE

#include "DtClase";

class DtClase{
    private:
        int id;
        string nombre;
        tipoRol tipo;
        timeStamp inicio;
    public:
        // Constructores
        DtClase();
        DtClase(int, string, tipoRol, timeStamp);

        // Getters and Setters
        int getId();
        string getNombre();
        tipoRol getTipo();
        timeStamp getInicio();
        void setId(int);
        void setNombre(string);
        void setTipo(tipoRol);
        void setInicio(timeStamp);

        // Destructor
        ~DtClase();
}
#endif