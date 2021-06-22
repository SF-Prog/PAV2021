#ifndef DTPARTICIPACION
#define DTPARTICIPACION

#include <ctime>
#include <iostream>

using namespace std;

class DtParticipacion{
    private:
        int id;
        time_t fecha;
        char &mensaje;
        DtParticipacion* responde;
        
    public:
        // Constructores
        DtParticipacion();
        DtParticipacion(int, time_t, char&);
        DtParticipacion(int, time_t, char&, DtParticipacion*);

        // Getters and Setters
        int getId();
        time_t getFecha();
        char* getMensaje();
        DtParticipacion* getResponde();
        void setId(int);
        void setFecha(time_t);
        void setMensaje(char&);
        void setResponde(DtParticipacion*);

        // Destructor
        ~DtParticipacion();

        friend ostream& operator <<(ostream&, const DtParticipacion&);
};
#endif
