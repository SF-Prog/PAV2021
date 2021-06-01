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
string DtAsistir::getId() {
    return this->id;
}
void DtAsistir::setCod(string cod) {
    this->cod = cod;
}
void DtAsistir::setId(string id) {
    this->id = id;
}
// Destructor 

DtAsistir::~DtAsistir(){}