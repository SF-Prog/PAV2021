#ifndef RELOJ
#define RELOJ

class Reloj{
    private:
        static Reloj* instancia;
        int seg;
        int min;
        int hora;
        int dia;
        int mes;
        int anio;
        Reloj();
        ~Reloj();
    public:
        Reloj* getInstancia();
};
#endif