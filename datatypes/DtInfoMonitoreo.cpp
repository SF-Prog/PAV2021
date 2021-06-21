
#include "DtInfoMonitoreo.h"

DtInfoMonitoreo::DtInfoMonitoreo(){};
DtInfoMonitoreo::DtInfoMonitoreo(int id, string nombre, list<string> docentes, list<string> estudiantes):DtInfoClase(id, nombre, docentes){
    this->estudiantes = estudiantes;
};
void DtInfoMonitoreo::setEstudiante(string est){};
list<string> DtInfoMonitoreo::getEstudiantes(){ return this->estudiantes;};
DtInfoMonitoreo::~DtInfoMonitoreo(){};

ostream& operator<<(ostream& salida, const DtInfoMonitoreo &dtim){
    list<string> estudiantes = dtim.estudiantes;
    cout<<(DtInfoClase)dtim;
    for(list<string>::iterator it = estudiantes.begin(); it!=estudiantes.end(); it++)
        cout<<(*it)<<endl;
    return salida;
};