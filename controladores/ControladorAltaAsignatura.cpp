#include "ControladorAltaAsignatura.h"
#include <iostream>

using namespace std;

DtAsignatura ControladorAltaAsignatura::ingresar(DtAsignatura dtAsignatura){
    this->datosAsignatura = dtAsignatura;
};

void ControladorAltaAsignatura::altaAsignatura(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    cout<<datosAsignatura.getCodigo();
    Asignatura* asignatura = new Asignatura(this->datosAsignatura.getCodigo(), this->datosAsignatura.getNombre(), this->datosAsignatura.getTipoClase());
    if(mA->existeAsignatura(this->datosAsignatura.getCodigo())){
        throw invalid_argument("El codigo ya existe."); 
    }else{
        mA->agregarAsignatura(asignatura);
    }
};

void ControladorAltaAsignatura::cancelar(){};