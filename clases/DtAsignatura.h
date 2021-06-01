#ifndef DTASIGNATURA
#define DTASIGNATURA

#include "DtInstanciaClase";

class DtAsignatura{
    private:
        string nombre;
        string codigo;
        DtInstanciaClase tipoClase;
    public:
        string getNombre();
        string getCodigo();
        DtInstanciaClase getTipoClase()
        void setNombre(string);
        void setCodigo(string);
        void setTipoClase(DtInstanciaClase);
}
#endif