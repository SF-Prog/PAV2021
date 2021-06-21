#include "../controladores/ControladorEnvioDeMensaje.h"

ControladorEnvioDeMensaje::ControladorEnvioDeMensaje(){
    this->vaAresponder = false;
};
list<int> ControladorEnvioDeMensaje::clasesOnlineAsistiendo(){
    list<int> clasesOnline;
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    ManejadorClase* mC = ManejadorClase::getInstancia();
    map<int, Clase*> clases = mC->listarClases();

    for(map<int, Clase*>::iterator it = clases.begin(); it!=clases.end(); it++){
        list<AsisteEnVivo*> asistEnVivo = it->second->getAsistenciasEnVivo();
        for(list<AsisteEnVivo*>::iterator it2 = asistEnVivo.begin(); it2!=asistEnVivo.end(); it2++){
            if((*it2)->getEstudiante() == estudiante){
                clasesOnline.push_front(it->second->getId());
            }
        };
    };
    return clasesOnline;
 };
list<DtParticipacion*> ControladorEnvioDeMensaje::selectClase(int id){
    this->id = id;
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase*  clase = mC->getClase(id);
    clase->getParticipaciones();

    list<DtParticipacion*> listDtParticipacion;
    for(map<int, Participacion*>::iterator it = clase->getParticipaciones().begin(); it!=clase->getParticipaciones().end(); it++){
        listDtParticipacion.push_front(new DtParticipacion(it->second->getId(), it->second->getFecha(),it->second->getMensaje(), it->second->getResponde()));
    };
    return listDtParticipacion;
};
void ControladorEnvioDeMensaje::ControladorEnvioDeMensaje::responder(int idP){
    this->idP = idP;
    this->vaAresponder = true;
};
void ControladorEnvioDeMensaje::ingresarTexto(string mensaje){
    this->txt = mensaje;
};
void ControladorEnvioDeMensaje::enviarMensaje(){
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase*  clase = mC->getClase(this->id);
    clase->getParticipaciones();
    time_t fecha = time(&fecha);

    if(this->vaAresponder){
        map<int, Participacion*> clases = clase->getParticipaciones();
        map<int, Participacion*>::iterator it = clases.find(this->idP);
        if(it != clases.end())
            it->second->respondeA(new Participacion(fecha, this->txt));
    }else{
        clase->addParticipacion(new Participacion(fecha, this->txt));
    }

};
void ControladorEnvioDeMensaje::cancelar(){};
ControladorEnvioDeMensaje::~ControladorEnvioDeMensaje(){};
