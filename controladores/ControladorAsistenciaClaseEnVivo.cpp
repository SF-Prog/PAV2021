#include "ControladorAsistenciaClaseEnVivo.h"

list<string> ControladorAsistenciaClaseEnVivo::asignaturasInscripto(){
    list<string> codigosAsignatura;

    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    map<string, Asignatura*> mapAsignatura = estudiante->getAsignaturas();

    for(map<string, Asignatura*>::iterator it = mapAsignatura.begin(); it!=mapAsignatura.end(); it++){
        codigosAsignatura.push_front(it->second->getCodigo());        
    };
    return codigosAsignatura;
};

list<int> ControladorAsistenciaClaseEnVivo::clasesOnlineDisponibles(string codAsignatura){
    this->codigo = codAsignatura;
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = mA->getAsignatura(codAsignatura);

    list<Clase*> lstClase = asignatura->getClases();

    // for(list<Clase*>::iterator it = this->lstClase.begin(); it!=this->lstClase.end(); it++){
    //     list<int> lstClaseOnlineDisponible.push_front(it->getId());
    // };

    // return lstClaseOnlineDisponible;

};

DtAsistir ControladorAsistenciaClaseEnVivo::selectClase(int idClase){
    this->id = idClase;
    //DtAsistir asistirDt = new DtAsistir(this->codigo,idClase);
    
    //return asistirDt;
};


void ControladorAsistenciaClaseEnVivo::AsistirClaseEnVivo(){
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    // time_t inicio =   
    //time_t Fir =   

    // AsistirEnVivo asistir = new AsisteEnVivo(time_t, time_t, estudiante);

    // ManejadorClase* mC = ManejadorClase::getInstancia();
    // list<Clase*> lstClases = mC->listarClases();
  
    // list<Clase*>::iterator it;
    // while (it != lstClases.end() && *it->getId() != this->id){
    //     it++;
    // };
        
    // if (*it->getId() == this->id){
    //     //agrego
    //     *it->addAsistenciasEnVivo(asistir);
    // }

};

void ControladorAsistenciaClaseEnVivo::cancelar(){};