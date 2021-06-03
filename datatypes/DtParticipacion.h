#ifndef DTPARTICIPACION
#define DTPARTICIPACION

#include <string>
#include <ctime>

using namespace std;

class DtParticipacion{
    private:
        int id;
        time_t fecha;
        string mensaje;
        DtParticipacion* responde;
    public:
        // Constructores
        DtParticipacion();
        DtParticipacion(int, time_t, string, DtParticipacion*);

        // Getters and Setters
        int getId();
        time_t getFecha();
        string getMensaje();
        DtParticipacion* getResponde();
        void setId(int);
        void setFecha(time_t);
        void setMensaje(string);
        void setResponde(DtParticipacion*);

        // Destructor
        ~DtParticipacion();
};
#endif
