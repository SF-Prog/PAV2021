#ifndef CONTROLADORASISTENCIACLASEENVIVO
#define CONTROLADORASISTENCIACLASEENVIVO

#include "../interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "../datatypes/DtAsistir.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorPerfil.h"
#include "../clases/Sesion.h"
#include "../clases/Docente.h"
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