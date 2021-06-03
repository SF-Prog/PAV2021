#ifndef DTCLASEASISTENCIA
#define DTCLASEASISTENCIA

#include <string>
#include "Time.h"

using namespace std;

class DtClaseAsistencia{
    private:
        int id;
        string nombre;
        Time promedioAsistencia;
    public:
        //Constructores
        DtClaseAsistencia();
        DtClaseAsistencia(int, string, Time);
        // Getters y Setters
        int getId();
        string getNombre();
        Time getPromedioAsistencia();
        void setId(int);
        void setNombre(string);
        void setPromedioAsistencia(Time);
        //Destructor
        ~DtClaseAsistencia();
};
#endif