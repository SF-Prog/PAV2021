#include "ControladorAsistenciaClaseEnVivo.h"

ControladorAsistenciaClaseEnVivo::ControladorAsistenciaClaseEnVivo(){};

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
    list<int> lstClaseOnlineDisponible;
    for(list<Clase*>::iterator it = lstClase.begin(); it!=lstClase.end(); it++){
        lstClaseOnlineDisponible.push_front((*it)->getId());
    };

    return lstClaseOnlineDisponible;
};
DtAsistir ControladorAsistenciaClaseEnVivo::selectClase(int idClase){
    this->id = idClase;
    DtAsistir asistirDt = DtAsistir(this->codigo,idClase);
    
    return asistirDt;

};
void ControladorAsistenciaClaseEnVivo::asistirClaseEnVivo(){
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    time_t inicio = time(&inicio);
    time_t fin = time(&fin);

    AsisteEnVivo* asistir = new AsisteEnVivo(inicio, fin, estudiante);
    ManejadorClase* mC = ManejadorClase::getInstancia();
    Clase* clase = mC->getClase(this->id);
    clase->addAsistenciasEnVivo(asistir);
};

void ControladorAsistenciaClaseEnVivo::cancelar(){};

ControladorAsistenciaClaseEnVivo::~ControladorAsistenciaClaseEnVivo(){};