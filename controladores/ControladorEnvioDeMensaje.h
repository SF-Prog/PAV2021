#ifndef CONTROLENVIODECLASE
#define CONTROLENVIODECLASE

#include "../interfaces/IControladorEnvioDeMensaje.h"

class ControladorEnvioDeMensaje: public IControladorEnvioDeMensaje{
    private:
        int id, idP;
        string txt;
    public:
        list<int> clasesOnlineAsistiendo();
        list<DtParticipacion> selectClase(int id);
        void responder(int);
        void ingresarTexto(string);
        void enviarMensaje();
        void cancelar();
};
#endif