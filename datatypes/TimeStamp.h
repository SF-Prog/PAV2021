#ifndef TIME
#define TIME

#include <string>

using namespace std;

class TimeStamp{
    private:
        int hora;
        int min;
        int segundos;
    public:
        //Constructores
        TimeStamp();
        TimeStamp(int, int, int);
        // Getters y Setters
        int getHora();
        int getMin();
        int getSegundos();
        void setHora(int);
        void setMin(int);
        void setSegundos(int);
        //Destructor
        ~TimeStamp();
};
#endif