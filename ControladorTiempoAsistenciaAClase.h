#ifndef CONTROLADORTIEMPOASISTENCIAACLASE
#define CONTROLADORTIEMPOASISTENCIAACLASE

#include "IControladorTiempoAsistenciaAClase.h"

class ControladorTiempoAsistenciaAClase: public IControladorTiempoAsistenciaAClase{
    list<string> asignaturasAsignadas();
    list<DtClaseAsistencia> selectAsignatura(string);
};
#endif
