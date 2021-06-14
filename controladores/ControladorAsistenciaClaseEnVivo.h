#ifndef CONTROLADORASISTENCIACLASEENVIVO
#define CONTROLADORASISTENCIACLASEENVIVO

#include "../interfaces/IControladorAsistenciaClaseEnVivo.h"
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
        ControladorAsistenciaClaseEnVivo();
        list<string> asignaturasInscripto();
        list<int> clasesOnlineDisponibles(string);
        DtAsistir selectClase(int);
        void asistirClaseEnVivo();
        void cancelar();
        ~ControladorAsistenciaClaseEnVivo();
};
#endif