#ifndef CONTROLADORASISTENCIACLASEENVIVO
#define CONTROLADORASISTENCIACLASEENVIVO

#include "IControladorAsistenciaClaseEnVivo.h"
#include "DtAsistir.h"
#include "ManejadorAsignatura.h"
#include "ManejadorPerfil.h"
#include "Sesion.h"
#include "Docente.h"
#include <iostream>

class ControladorAsistenciaClaseEnVivo: public IControladorAsistenciaClaseEnVivo{
    private:
        string codigo;
        int id;
    public:
        list<string> asignaturasInscripto();
        list<int> clasesOnlineDisponibles(string);
        DtAsistir selectClase(int);
        void AsistirClaseEnVivo();
        void cancelar();
};
#endif