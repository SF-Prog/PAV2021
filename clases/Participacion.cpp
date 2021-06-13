Participacion::Participacion(){};
Participacion::Participacion(int id, time_t fecha, string mensaje){
    this->id=id;
    this->fecha=fecha;
    this->mensaje=mensaje;
    this->responde=0;
    
};
Participacion::Participacion(int id, time_t fecha, string mensaje, int responder){
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
int Participacion::getResponde(){
    return this->responder;
};

void Participacion::setId(int id){
    this->id=id;
};
void Participacion::setFecha(time_t fecha){
    this->fecha=fecha;
};
void Participacion::setMensaje(string mensaje){
    this->mensaje=mensaje;
};
void Participacion::setResponde(int responde){
    this->responde=responder;
};

// DESTRUCTOR
~Participacion(){};