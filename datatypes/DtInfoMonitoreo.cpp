
#include "DtInfoMonitoreo.h"

DtInfoMonitoreo::DtInfoMonitoreo(){};
DtInfoMonitoreo::DtInfoMonitoreo(int id, string nombre, list<Docente*> docentes, list<string> estudiantes):DtInfoClase(id, nombre, docentes){
    this->estudiantes = estudiantes;
};
void DtInfoMonitoreo::setEstudiante(string est){};
list<string> DtInfoMonitoreo::getEstudiantes(){ return this->estudiantes;};
DtInfoMonitoreo::~DtInfoMonitoreo(){};

ostream& operator<<(ostream& salida, DtInfoMonitoreo dtim){
    list<string> estudiantes = dtim.getEstudiantes();
    for(list<string>::iterator it=estudiantes.begin(); it!=estudiantes.end(); it++)
        salida<<(DtInfoClase)dtim<<(*it);
    return salida;
};