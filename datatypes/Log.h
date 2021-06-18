#ifndef LOG
#define LOG

#include <string>
#include <ctime>

class Log{
    private:
        time_t inicio;
        time_t fin;
    public:
        // Constructores
        Log();
        Log(time_t, time_t);

        // Getters and Setters
        time_t getInicio();
        time_t getFin();
        void setInicio(time_t);
        void setFin(time_t);

        // Destructor
        ~Log();
};
#endif