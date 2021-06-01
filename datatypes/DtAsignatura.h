#ifndef DTASIGNATURA
#define DTASIGNATURA

#include "DtInstanciaClase.h";

class DtAsignatura{
    private:
        string nombre;
        string codigo;
        DtInstanciaClase tipoClase;
    public:
        // Constructores
        DtAsignatura();
        DtAsignatura(string, string, tipoClase);

        // Getters and Setters
        string getNombre();
        string getCodigo();
        DtInstanciaClase getTipoClase()
        void setNombre(string);
        void setCodigo(string);
        void setTipoClase(DtInstanciaClase);

        // Destructor
        ~DtAsignatura();
}
#endif