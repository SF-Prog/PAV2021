#include "Participacion.h"

Participacion::Participacion(){};
Participacion::Participacion(int id, time_t fecha, string mensaje){
    this->id=id;
    this->fecha=fecha;
    this->mensaje=mensaje;
    this->responde = NULL;
    
};
Participacion::Participacion(int id, time_t fecha, string mensaje, DtParticipacion* responder){
    this->id=id;
    this->fecha=fecha;
    this->mensaje=mensaje;
    this->responde=responder;
};
//Getters y setters
int Participacion::getId(){
    return this->id;
};
time_t Participacion::getFecha(){
    return this->fecha;
};
string Participacion::getMensaje(){
    return this->mensaje;
};
DtParticipacion* Participacion::getResponde(){
    return this->responde;
};

void Participacion::setId(int id){
    this->id=id;
};
void Participacion::setFecha(time_t fecha){
    this->fecha = fecha;
};
void Participacion::setMensaje(string mensaje){
    this->mensaje=mensaje;
};
void Participacion::setResponde(DtParticipacion* responde){
    this->responde=responde;
};

// DESTRUCTOR
Participacion::~Participacion(){};