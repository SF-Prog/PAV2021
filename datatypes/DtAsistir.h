#ifndef DTASISTIR
#define DTASISTIR

#include <string>

using namespace std;

class DtAsistir{
    private:
        string cod;
        int id;
    public:
        //Constructores
        DtAsistir();
        DtAsistir(string, int);
        // Getters y Setters
        void setCodigo(string);
        void setId(int);
        string getCodigo();
        int getId();
        //Destructor
        ~DtAsistir();  
};
#endif