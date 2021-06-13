#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Perfil.h"
#include "ManejadorAsignatura.h"
#include "DtIniciarClase.h"
#include "Asignatura.h"

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
    map<string, Asignatura*> getAsignaturas();
    void setDocumento(string);

    bool estaInscripto(string);
    
    // DESTRUCTOR
    ~Estudiante();
};

#endif