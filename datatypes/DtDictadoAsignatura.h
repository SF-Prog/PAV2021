#ifndef DTDICTADOASIGNATURA
#define DTDICTADOASIGNATURA

#include <string>
#include "../datatypes/TimeStamp.h"

using namespace std;

class DtDictadoAsignatura{
    private:
        string codigo;
        string nombre;
        TimeStamp tiempoTotal;
    public:
        //Constructores
        DtDictadoAsignatura();
        DtDictadoAsignatura(string, string, TimeStamp);
        // Getters y Setters
        string getCodigo();
        string getNombre();
        TimeStamp getTiempoTotal();
        void setCodigo(string);
        void setNombre(string);
        void setTiempoTotal(TimeStamp);
        //Destructor
        ~DtDictadoAsignatura();
};
#endif