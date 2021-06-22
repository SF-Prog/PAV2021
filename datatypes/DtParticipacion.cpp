#include "DtParticipacion.h"

// Constructores
DtParticipacion::DtParticipacion(){}
DtParticipacion::DtParticipacion(int id, time_t fecha, char *mensaje){
    this->id = id;
    this->fecha = fecha;
    this->mensaje = mensaje;
    this->responde = NULL;
}
DtParticipacion::DtParticipacion(int id, time_t fecha, char *mensaje, DtParticipacion* responde){
    this->id = id;
    this->fecha = fecha;
    this->mensaje = mensaje;
    this->responde = responde;
}

// Getters and Setters
int DtParticipacion::getId(){
    return this->id;
}
time_t DtParticipacion::getFecha(){
    return this->fecha;
}
char* DtParticipacion::getMensaje(){
    return this->mensaje;
}
DtParticipacion* DtParticipacion::getResponde(){
    return this->responde;
}
void DtParticipacion::setId(int id){
    this->id = id;
}
void DtParticipacion::setFecha(time_t fecha){
    this->fecha = fecha;
}
void DtParticipacion::setMensaje(char *mensaje){
    this->mensaje = mensaje;
}
void DtParticipacion::setResponde(DtParticipacion* responde){
    this->responde = responde;
}

// Destructor
DtParticipacion::~DtParticipacion(){}

ostream& operator <<(ostream& salida, const DtParticipacion &dtp){
    time_t t = dtp.fecha;
    struct tm *fecha;
    time(&t);
    fecha = localtime(&t);
    cout<<"\nId participacion: "<<dtp.id<<endl;
    cout<</*asctime(fecha)*/"Hora: "<<fecha->tm_hour<< " minuntos: "<<fecha->tm_min<<endl;
    cout<<"\n Mensaje: ";
    cout<<dtp.mensaje;
  /*  for(int i = 0; i<strlen(dtp.mensaje); i++)
        cout<<dtp.mensaje[i]; */
    cout<<endl;
    return salida;
};