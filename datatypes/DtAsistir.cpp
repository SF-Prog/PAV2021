#include  "DtAsistir.h"

//Constructores

DtAsistir::DtAsistir() {}
DtAsistir::DtAsistir(string cod, int id) {
    this->cod = cod;
    this->id = id;
}

// Getters and Setters

string DtAsistir::getCod() {
    return this->cod;
}
int DtAsistir::getId() {
    return this->id;
}
void DtAsistir::setCod(string cod) {
    this->cod = cod;
}
void DtAsistir::setId(int id) {
    this->id = id;
}
// Destructor 

DtAsistir::~DtAsistir(){}

ostream& operator <<(ostream& salida, DtAsistir& dtAsis){
    cout<<" Codico: "<<dtAsis.getCod()<<" Id: "<<dtAsis.getId() <<endl;
     
    return salida;
}