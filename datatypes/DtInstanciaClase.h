#ifndef DTINSTANCIACLASE
#define DTINSTANCIACLASE

#include <string>

using namespace std;

class DtInstanciaClase{
    private:
        bool teorico;
        bool practico;
        bool monitoreo;
    public:
        //Constructores
        DtInstanciaClase();
        DtInstanciaClase(bool, bool, bool);
        // Getters y Setters
        bool getTeorico();
        bool getPractico();
        bool getMonitoreo();
        void setTeorico(bool);
        void setPractico(bool);
        void setMonitoreo(bool);
        //Destructor
        ~DtInstanciaClase();
};
#endif