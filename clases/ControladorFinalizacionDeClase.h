#ifndef CONTROLADORFINALIZACIONDECLASE
#define CONTROLADORFINALIZACIONDECLASE

class ControladorFinalizacionDeClase: public IControladorFinalizacionDeClase{
    private:
        int id;

        int getId();
        void setId(int);
    public:
        map<int, int> clasesIniciadasSinFinalizar();
        DtClase selectClase(int id);
        void finalizarClase();
        void cancelar();
}
#endif