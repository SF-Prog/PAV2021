#include "ControladorAltaAsignatura.h"
#include <iostream>

using namespace std;

DtAsignatura ControladorAltaAsignatura::ingresar(DtAsignatura dtAsignatura){
    this->datosAsignatura = dtAsignatura;
};

void ControladorAltaAsignatura::altaAsignatura(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = new Asignatura(this->datosAsignatura.getCodigo(), this->datosAsignatura.getNombre(), this->datosAsignatura.getTipoClase());
    cout << mA->existeAsignatura(this->datosAsignatura.getCodigo()) << endl;
    if(mA->existeAsignatura(this->datosAsignatura.getCodigo())){
        cout << "Adentro del if" << endl;
        throw invalid_argument("El código ya existe."); 
    }else{
        cout << "Adentro del else" << endl;
        mA->agregarAsignatura(asignatura);
    }
};

void ControladorAltaAsignatura::cancelar(){};