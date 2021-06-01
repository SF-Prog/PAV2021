#ifndef DTCLASEASIGNATURA
#define DTCLASEASIGNATURA

#include <string>
#include "Time.h"

using namespace std;

class DtClaseAsignatura{
    private:
        int id;
        string nombre;
        Time promedioAsistencia;
    public:
        //Constructores
        DtClaseAsignatura();
        DtClaseAsignatura(int, string, Time);
        // Getters y Setters
        int getId();
        string getNombre();
        Time getPromedioAsistencia();
        void setId(int);
        void setNombre(string);
        void setPromedioAsistencia(Time);
        //Destructor
        ~DtClaseAsignatura();
};
#endif