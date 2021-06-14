#ifndef DTINICIARCLASE
#define DTINICIARCLASE

#include <string>
#include "TimeStamp.h"

using namespace std;

class DtIniciarClase{
    private:
        string codigo;
        string nombre;
        TimeStamp fechaHora;
    public:
        DtIniciarClase();
        DtIniciarClase(string, string, TimeStamp);
        string getCodigo();
        string getNombre();
        TimeStamp getFechaHora();
        void setCodigo(string);
        void setNombre(string);
        void setFechaHora(TimeStamp);
        ~DtIniciarClase();
};
#endif