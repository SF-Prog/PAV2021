#ifndef CONTROLENVIODECLASE
#define CONTROLENVIODECLASE

#include "../interfaces/IControladorEnvioDeMensaje.h"
#include "../manejadores/ManejadorClase.h"
#include "../clases/Estudiante.h"
#include "../clases/Sesion.h"
#include "../clases/Participacion.h"
#include "../datatypes/Time.h"
#include "../datatypes/DtParticipacion.h"

#include <list>
#include <string>
#include <ctime>

class ControladorEnvioDeMensaje: public IControladorEnvioDeMensaje{
    private:
        int id, idP;
        char txt;
        time_t fecha;
        bool  vaAresponder;
    public:
        ControladorEnvioDeMensaje();
        list<int> clasesOnlineAsistiendo();
        list<DtParticipacion*> selectClase(int id);
        void responder(int);
        void ingresarTexto(char);
        void enviarMensaje();
        void cancelar();
        ~ControladorEnvioDeMensaje();
};
#endif