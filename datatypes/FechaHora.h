#ifndef FECHAHORA
#define FECHAHORA

#include <string>

using namespace std;

class FechaHora{
    private:
        time_t anio;
        time_t mes;
        time_t dia;
        time_t hora;
        time_t min;
        time_t segundos;
    public:
        //Constructores
        FechaHora();
        FechaHora(int, int, int,int,int,int);
        // Getters y Setters
        int getHora();
        int getMin();
        int getSegundos();
        int getAnio();
        int getMes();
        int getDia();
        void setHora(int);
        void setMin(int);
        void setSegundos(int);
        void setAnio(int);
        void setMes(int);
        void setDia(int);
        //Destructor
        ~FechaHora();
};
#endif