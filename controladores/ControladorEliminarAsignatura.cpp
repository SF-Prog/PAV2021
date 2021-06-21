#include "ControladorEliminarAsignatura.h"

ControladorEliminarAsignatura::ControladorEliminarAsignatura(){};

list<string> ControladorEliminarAsignatura::listarAsignaturas(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    map<string, Asignatura*> asignaturas = mA->getAsignaturas();
    std::cout << "[RS] - asignaturas.size() es " << asignaturas.size() << '\n';
    list<string> codigosAsignatura;
    for(map<string, Asignatura*>::iterator it=asignaturas.begin(); it!=asignaturas.end(); it++){
        codigosAsignatura.push_front(it->second->getCodigo());
    };
    return codigosAsignatura;
};
void ControladorEliminarAsignatura::selectAsignatura(string codigo){
    this->codigo = codigo;
};
void ControladorEliminarAsignatura::eliminarAsignatura(){
  //     EN CONSTRUCCION
  // //1 - a) Corto relacion estudiante asignatura
  //   ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
  //     list<Perfil*> listPerfiles = mP->listarPerfiles();
  //
  //     for(list<Perfil*>::iterator it = listPerfiles.begin(); it != listPerfiles.end(); it++){
  //         if(Estudiante* est = dynamic_cast<Estudiante*>(*it)){
  //           if(est->estaInscripto(this->codigo)){
  //             est->borrarAsignatura(this->codigo);
  //           }
  //         }else if (Docente* doc = dynamic_cast<Docente*>(it)){
  //             //1 - b) Corto relacion rol asignatura
  //           doc->eliminarAsignatura(this->codigo);
  //         }
  //     }
  //
  //
  // //2 - Corto relacion de "docente" asociada a una instancia de "clase" conectada a la instancia de "asignatura"
  // //3 - De cada clase asociada a la asignatura a eliminar, elimino relacion con "ASiste en diferido", "asiste en vivo", "Participacion".
  // //4 - Se desconecta clase de asignatura
  // //5 - Se elimina la asignatura
  //
  // //Se elimina clase
  //   ManejadorClase* mC = ManejadorClase::getInstancia();
  //   mC->eliminarClase(/*RS - Aca va una variable con un int, esto es string*/this->codigo);
  //
  // 
};
void ControladorEliminarAsignatura::cancelar(){};
