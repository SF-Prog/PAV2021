#include "../controladores/ControladorEnvioDeMensaje.h"

ControladorEnvioDeMensaje::ControladorEnvioDeMensaje(){
    this->vaAresponder = false;
};
list<int> ControladorEnvioDeMensaje::clasesOnlineAsistiendo(){
    list<int> clasesOnline;
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    ManejadorClase* mC = ManejadorClase::getInstancia();
    map<int, Clase*> clases = mC->listarClases();
    cout<<"cantidad de clases"<<clases.size()<<endl;
   
    for(map<int, Clase*>::iterator it = clases.begin(); it!=clases.end(); it++){
        list<AsisteEnVivo*> asistEnVivo = it->second->getAsistenciasEnVivo();
        //cout<<"CANTIDAD DE ASISTENCIAS EN VIVO ("<<asistEnVivo.size() <<") DE CLASE"<<it->first<<endl;
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
    map<int, Participacion*> participaciones  = clase->getParticipaciones();

    list<DtParticipacion*> listDtParticipacion;
    if(participaciones.size()>0){
        for(map<int, Participacion*>::iterator it = participaciones.begin(); it!=participaciones.end(); it++){
           cout<<it->second->getId()<<endl;
           cout<<it->second->getFecha()<<endl;
           cout<<it->second->getMensaje()<<endl;
            DtParticipacion* prticipacion = new DtParticipacion(it->second->getId(), it->second->getFecha(),it->second->getMensaje());
           //cout<<"PUNTERO" <<prticipacion->getId()<<endl;
            listDtParticipacion.push_front(prticipacion);
        };
    }
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
        if(it != clases.end()){
            
            clase->addParticipacion(new Participacion(fecha, this->txt,it->second));
        }
        
    }else{
        clase->addParticipacion(new Participacion(fecha, this->txt));
    }

};
void ControladorEnvioDeMensaje::cancelar(){};
ControladorEnvioDeMensaje::~ControladorEnvioDeMensaje(){};
