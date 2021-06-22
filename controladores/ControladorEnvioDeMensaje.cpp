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
          // cout<< "id seteado: " << it->second->getId()<<endl;
          // cout<< "fecha seteada: " << it->second->getFecha()<<endl;
          // cout<< "mensaje seteado: " <<it->second->getMensaje()<<endl;
            DtParticipacion* dtParticipacion = new DtParticipacion(it->second->getId(), it->second->getFecha(),it->second->getMensaje());
           //cout<<"PUNTERO" <<prticipacion->getId()<<endl;
            listDtParticipacion.push_front(dtParticipacion);
        };
    }
    return listDtParticipacion;
};
void ControladorEnvioDeMensaje::ControladorEnvioDeMensaje::responder(int idP){
    this->idP = idP;
    this->vaAresponder = true;
};
void ControladorEnvioDeMensaje::ingresarTexto(char* mensaje){
    this->txt = mensaje;
 //   cout << mensaje<< "llega char a controlador"  << endl;
};
void ControladorEnvioDeMensaje::enviarMensaje(){
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase* clase = mC->getClase(this->id);
    //clase->getParticipaciones();
    time_t fecha = time(&fecha);

    if(this->vaAresponder){
        map<int, Participacion*> particips = clase->getParticipaciones();
        map<int, Participacion*>::iterator it = particips.find(this->idP);
        if(it != particips.end()){
            Participacion* p = new Participacion(fecha, this->txt,it->second);
            clase->addParticipacion(p);
        }
    }else{
        //cout << "datos de participacion - \nFecha: " << fecha<<"\ntxt:"<< this->txt <<endl;
        Participacion* pr = new Participacion(fecha, this->txt);
        clase->addParticipacion(pr);

        DtParticipacion* dtpr = new DtParticipacion(pr->getId(), this->fecha, this->txt);
    }
};
void ControladorEnvioDeMensaje::cancelar(){};
ControladorEnvioDeMensaje::~ControladorEnvioDeMensaje(){};
