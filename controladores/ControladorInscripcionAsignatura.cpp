#include "ControladorInscripcionAsignatura.h"

ControladorInscripcionAsignatura::ControladorInscripcionAsignatura(){

};
list<string> ControladorInscripcionAsignatura::asignaturasNoInscripto(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    //asignaturas cargadas
    map<string, Asignatura*> listAsignaturas = mA->getAsignaturas();

    
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    //Asignaturas inscriptas del estudainte
    map<string, Asignatura*> mapAsignaturas = estudiante->getAsignaturas();
   list<string> listCodAsignaturas; 
    for(map<string, Asignatura*>::iterator itA = listAsignaturas.begin(); itA != listAsignaturas.end(); itA++){
            //LISTADO DE ASIGNATURAS
           string codigoAsignaturaItertor = itA->second->getCodigo();
          
           if(mapAsignaturas.size()<=0){
               listCodAsignaturas.push_front(codigoAsignaturaItertor);
           }else{
                list<string>::iterator j = listCodAsignaturas.begin();
                bool esta = false;
                while (j != listCodAsignaturas.end() && !esta){
                    if((*j)==codigoAsignaturaItertor){
                        esta = true;
                    }    
                    j++;            
                }
                
                map<string, Asignatura*>::iterator i = mapAsignaturas.find(codigoAsignaturaItertor);
                if( i == mapAsignaturas.end()&& !esta  ) {  
                   listCodAsignaturas.push_front(codigoAsignaturaItertor); 
                }
           }            
    }
    return listCodAsignaturas;
};
void ControladorInscripcionAsignatura::selectAsignatura(string cod){
    this->cod = cod;
    cout<<"Usted se ha inscripto a la materia de codigo:  "<<cod<<endl;
};
void ControladorInscripcionAsignatura::inscribir(){
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = mA->getAsignatura(this->cod);
    estudiante->addAsignatura(asignatura);
    //map<string, Asignatura*> asignaturasEstudiante= estudiante->getAsignaturas();
    //asignaturasEstudiante.insert(pair<string, Asignatura*>(asignatura->getCodigo(), asignatura));
};
void ControladorInscripcionAsignatura::cancelar(){};
ControladorInscripcionAsignatura::~ControladorInscripcionAsignatura(){};