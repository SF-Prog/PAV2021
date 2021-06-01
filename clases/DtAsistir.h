#ifndef DTASISTIR
#define DTASISTIR

#include <string>

using namespace std;

class DtAsistir{
    private:
        string cod;
        int id;
    public:
        void setCodigo(string);
        void setId(int);
        string getCodigo();
        int getId();
};
#endif