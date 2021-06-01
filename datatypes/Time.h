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
        int getsegundos();
        void setHora(int);
        void setMin(int);
        void setsegundos(int);
        //Destructor
        ~Time();
};
#endif