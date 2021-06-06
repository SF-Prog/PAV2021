#ifndef DTINICIARCLASE
#define DTINICIARCLASE

#include <string>

using namespace std;

class DtIniciarClase{
    private:
        string codigo;
        string nombre;
        time_t fechaHora;
    public:
        DtIniciarClase();
        DtIniciarClase(string, string, time_t);
        string getCodigo();
        string getNombre();
        time_t getFechaHora();
        void setCodigo(string);
        void setNombre(string);
        void setFechaHora(time_t);
        ~DtIniciarClase();
};
#endif