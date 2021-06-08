#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Perfil.h"
#include "../manejadores/ManejadorAsignatura.h"
#include "../datatypes/DtIniciarClase.h"

#include <string>

using namespace std;

class Estudiante: public Perfil{
  private:
    string documento;
    map<string, Asignatura*> asignaturas;
    bool member(Asignatura*);
  public:
    // Contructores
    Estudiante();
    Estudiante(string, string, string, string, string);
    // Getters y Setters
    string getDocumento();
    void setDocumento(string);

    bool estaInscripto(string);
    
    // DESTRUCTOR
    ~Estudiante();
};

#endif
