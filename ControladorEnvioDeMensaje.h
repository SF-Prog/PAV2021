#ifndef CONTROLENVIODECLASE
#define CONTROLENVIODECLASE

#include "IControladorEnvioDeMensaje.h"
#include "ManejadorClase.h"
#include "Estudiante.h"
#include "Sesion.h"
#include "Time.h"
#include "DtParticipacion.h"



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