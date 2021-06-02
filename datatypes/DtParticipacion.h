#ifndef DTPARTICIPACION
#define DTPARTICIPACION

#include "DtParticipacion.h"
#include <string>

class DtParticipacion{
    private:
        int id;
        timeStamp fecha;
        string mensaje;
        DtParticipacion responde;
    public:
        // Constructores
        DtParticipacion();
        DtParticipacion(int, timeStamp, string, DtParticipacion);

        // Getters and Setters
        int getId();
        timeStamp getFecha();
        string getMensaje();
        DtParticipacion getResponde();
        void setId(int);
        void setFecha(timeStamp);
        void setMensaje(string);
        void setResponde(DtParticipacion);

        // Destructor
        ~DtParticipacion();
};
#endif
