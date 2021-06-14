#ifndef CONTROLADORFINALIZACIONDECLASE
#define CONTROLADORFINALIZACIONDECLASE

#include <list>
#include "../datatypes/DtClase.h"
#include "../interfaces/IControladorFinalizacionDeClase.h"

class ControladorFinalizacionDeClase: public IControladorFinalizacionDeClase{
    private:
        int id;
        int getId();
        void setId(int);
    public:
        list<int> clasesIniciadasSinFinalizar();
        DtClase selectClase(int id);
        void finalizarClase();
        void cancelar();
};
#endif