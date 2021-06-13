#ifndef CONTROLENVIODECLASE
#define CONTROLENVIODECLASE

#include "../interfaces/IControladorEnvioDeMensaje.h"
#include "../manejadores/ManejadorClase.h"
#include "../clases/Estudiante.h"
#include "../clases/Sesion.h"
#include "../datatypes/Time.h"
#include "../datatypes/DtParticipacion.h"



#include <list>
#include <string>
#include <ctime>

class ControladorEnvioDeMensaje: public IControladorEnvioDeMensaje{
    private:
        int id, idP;
        string txt;
    public:
        list<int> clasesOnlineAsistiendo();
        DtParticipacion selectClase(int id);
        void responder(int);
        void ingresarTexto(string);
        void enviarMensaje();
        void cancelar();
};
#endif