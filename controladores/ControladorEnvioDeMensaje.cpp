#include "../controladores/ControladorEnvioDeMensaje.h"


 list<int> ControladorEnvioDeMensaje::clasesOnlineAsistiendo(){
    /* list<int> clasesOnline;

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

    return clasesOnline;*/

 };


list<DtParticipacion*> ControladorEnvioDeMensaje::selectClase(int id){
    /*this->id = id;
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase*  clase = mC->getClase(id);
    clase->getParticipaciones();

    list<DtParticipacion*> listDtParticipacion ;    
    for(list<Participacion*>::iterator it = clase->getParticipaciones().begin(); it!=clase->getParticipaciones().end(); it++){
        listDtParticipacion.push_front(new DtParticipacion(it->getid(),it->getFecha(),it->getMensaje(),it->getResponde());
    };

   return listDtParticipacion;*/
};




void ControladorEnvioDeMensaje::ControladorEnvioDeMensaje::responder(int idP){
    this->idP = idP ;
};
void ControladorEnvioDeMensaje::ingresarTexto(string mensaje){
 this->txt = mensaje;
};
void ControladorEnvioDeMensaje::enviarMensaje(){
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase*  clase = mC->getClase(this->id);
    clase->getParticipaciones();

    
    if(this->idP != NULL && this->idP != ''){
        for(list<Participacion*>::iterator it = clase->getParticipaciones().begin(); it!=clase->getParticipaciones().end(); it++){
            if(*it->getId() == idP){
                *it->setResponde(new Participacion(id,fecha,mensaje));
            }        
        };        
    }else{
        clase->addParticipaciones(new Participacion(id,fecha,mensaje))
    }
    
};
void ControladorEnvioDeMensaje::cancelar(){};
