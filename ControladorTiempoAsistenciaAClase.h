#ifndef CONTROLADORTIEMPOASISTENCIAACLASE
#define CONTROLADORTIEMPOASISTENCIAACLASE

#include "../interfaces/IControladorTiempoAsistenciaAClase.h"

class ControladorTiempoAsistenciaAClase: public IControladorTiempoAsistenciaAClase{
    list<string> asignaturasAsignadas();
    list<DtClaseAsistencia> selectAsignatura(string);
};
#endif
