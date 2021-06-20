#ifndef DTASISTIR
#define DTASISTIR

#include <string>
#include <iostream>
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
        void setCod(string);
        void setId(int);
        string getCod();
        int getId();
        //Destructor
        ~DtAsistir();
        friend ostream& operator <<(ostream&, DtAsistir&);  
};
#endif