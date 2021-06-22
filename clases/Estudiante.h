#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "../manejadores/ManejadorAsignatura.h"
#include "../datatypes/DtIniciarClase.h"

#include <string>
#include <map>

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
    void addAsignatura(Asignatura* asignatura);
    // Getters y Setters
    string getDocumento();
    map<string, Asignatura*> getAsignaturas();
    void setDocumento(string);

    bool estaInscripto(string);
    void eliminarAsignatura(string);

    // DESTRUCTOR
    ~Estudiante();
};

#endif
