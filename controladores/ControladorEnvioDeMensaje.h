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
<<<<<<< HEAD
        char* txt;
=======
        char txt;
>>>>>>> 8d3b0f3cd8c657ccac244b190e6d034c4d2234f5
        time_t fecha;
        bool  vaAresponder;
    public:
        ControladorEnvioDeMensaje();
        list<int> clasesOnlineAsistiendo();
        list<DtParticipacion*> selectClase(int id);
        void responder(int);
<<<<<<< HEAD
        void ingresarTexto(char*);
=======
        void ingresarTexto(char);
>>>>>>> 8d3b0f3cd8c657ccac244b190e6d034c4d2234f5
        void enviarMensaje();
        void cancelar();
        ~ControladorEnvioDeMensaje();
};
#endif