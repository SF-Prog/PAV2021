#ifndef TIME
#define TIME

#include <string>

using namespace std;

class Time{
    private:
        int hora;
        int min;
        int segundos;
    public:
        //Constructores
        Time();
        Time(int, int, int);
        // Getters y Setters
        int getHora();
        int getMin();
        int getSegundos();
        void setHora(int);
        void setMin(int);
        void setSegundos(int);
        //Destructor
        ~Time();
};
#endif