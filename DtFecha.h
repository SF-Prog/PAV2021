#ifndef DTFECHA
#define DTFECHA
using namespace std;
class DtFecha {
  private:
    int dia;
    int mes;
    int anio;
  public:
    DtFecha();
    DtFecha(int,int,int);
    int getDia();
    void setDia(int);
    int getMes();
    void setMes(int);
    int getAnio();
    void setAnio(int);
    ~DtFecha();
};

#endif