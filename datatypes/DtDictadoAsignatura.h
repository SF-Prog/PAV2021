#ifndef DTDICTADOASIGNATURA
#define DTDICTADOASIGNATURA

#include <string>
#include "Time.h"

using namespace std;

class DtDictadoAsignatura{
    private:
        string codigo;
        string nombre;
        Time tiempoTotal;
    public:
        //Constructores
        DtDictadoAsignatura();
        DtDictadoAsignatura(string, string, Time);
        // Getters y Setters
        string getCodigo();
        string getNombre();
        Time getTiempoTotal();
        void setCodigo(string);
        void setNombre(string);
        void setTiempoTotal(Time);
        //Destructor
        ~DtDictadoAsignatura();
};
#endif