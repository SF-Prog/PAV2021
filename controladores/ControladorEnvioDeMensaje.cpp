#include "../controladores/ControladorEnvioDeMensaje.h"


 list<int> ControladorEnvioDeMensaje::clasesOnlineAsistiendo(){
     list<int> clasesOnline;

    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    
    ManejadorClase* mC = ManejadorClase::getInstancia();
    list<Clase*> lstClases = mC->listarClases();

       
    for(list<Clase*>::iterator it = lstClases.begin(); it!=lstClases.end(); it++){
        list<AsisteEnVivo*> asistEnVivo = it*->getAsistenciasEnVivo();

        for(list<AsisteEnVivo*>::iterator it2 = asistEnVivo.begin(); it2!=asistEnVivo.end(); it2++){

            if(it2->getEstudiante() == estudiante){
                clasesOnline.push_front(it->getId());
            }
        
        };
    };

    return clasesOnline;

 };


DtParticipacion ControladorEnvioDeMensaje::selectClase(int id){
    this->id = id;
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase*  clase = mC->getClase(id);

    string s ;
    time_t tiempo ;
    DtParticipacion participacionDt = new DtParticipacion(id,tiempo,s);
    return participacionDt;
};




void ControladorEnvioDeMensaje::ControladorEnvioDeMensaje::responder(int){};
void ControladorEnvioDeMensaje::ingresarTexto(string){};
void ControladorEnvioDeMensaje::enviarMensaje(){};
void ControladorEnvioDeMensaje::cancelar(){};
