#ifndef DTINFOTEORICO
#define DTINFOTEORCIO

#include "DtInfoClase.h"
#include <list>
#include <string>

#include <iostream>
using namespace std;

class DtInfoTeorico: public DtInfoClase{
    private:
        int cantAsistentes;
    public:
        DtInfoTeorico();
        DtInfoTeorico(int, string, list<string>, int);
        void setCantAsistentes(int);
        int getCantAsistentes();
        ~DtInfoTeorico();

        friend ostream& operator <<(ostream&, const DtInfoTeorico&);
};
#endif