#ifndef CONTROLADORFINALIZACIONDEASISTENCIAACLASEENVIVO
#define CONTROLADORFINALIZACIONDEASISTENCIAACLASEENVIVO

#include <list>

using namespace std;

class ControladorfinalizacionDeAsistenciaAClase{
    private:

    public:
        list<int> clasesOnlineAsistido();
        void selectClase(int);
        void finalizarAsistencia();
        void cancelar();
};
#endif