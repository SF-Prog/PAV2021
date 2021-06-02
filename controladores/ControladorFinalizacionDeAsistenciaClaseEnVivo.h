#ifndef CONTROLADORDEASISTENCIACLASEENVIVO
#define CONTROLADORDEASISTENCIACLASEENVIVO


class ControladorDeAsistenciaClaseEnVivo: public IControladorDeAsistenciaClaseEnVivo{
    private:
        int id;
    public:
        list<int> clasesOnlineAsistiendo();
        void selectClase(int);
        void finalizarAsistencia();
        void cancelar();
};
#endif