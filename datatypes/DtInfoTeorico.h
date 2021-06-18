#ifndef DTINFOTEORICO
#define DTINFOTEORCIO

#include "DtInfoClase.h"
#include <list>
#include <string>

class DtInfoTeorico: public DtInfoClase{
    private:
        int cantAsistentes;
    public:
        DtInfoTeorico();
        DtInfoTeorico(int, string, list<Docente*>, int);
        void setCantAsistentes(int);
        int getCantAsistentes();
        ~DtInfoTeorico();

        friend ostream& operator <<(ostream&, DtInfoTeorico);
};
#endif