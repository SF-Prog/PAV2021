
#include "DtInfoMonitoreo.h"

DtInfoMonitoreo::DtInfoMonitoreo(){};
DtInfoMonitoreo::DtInfoMonitoreo(int id, string nombre, list<Docente*> docentes, list<string> estudiantes):DtInfoClase(id, nombre, docentes){
    this->estudiantes = estudiantes;
};
void DtInfoMonitoreo::setEstudiante(string est){};
list<string> DtInfoMonitoreo::getEstudiantes(){ return this->estudiantes;};
DtInfoMonitoreo::~DtInfoMonitoreo(){};