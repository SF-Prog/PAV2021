// Controladores
#include "../controladores/ControladorAltaAsignatura.h"
#include "../controladores/ControladorAltaUsuario.h"
#include "../controladores/ControladorAgregarDatos.h"
// Manejadores
#include "../manejadores/ManejadorAsignatura.h"
#include "../manejadores/ManejadorClase.h"
#include "../manejadores/ManejadorPerfil.h"
// DataTypes
#include "../datatypes/DtInstanciaClase.h"
#include "../datatypes/DtParticipacion.h"
#include <time.h>

void ControladorAgregarDatos::cargarDatos(){
    list<Rol*> roles; // incializar esta variable
    //Perfiles
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    Docente* d1 = new Docente("Juan Malcom", "image01.jpg", "j", "j", "Facultad de ingenieria");
    Docente* d2 = new Docente("Pedro Tunez", "image02.jpg", "pedrotunex@gmail.com", "pedro1010", "Facultad de Economia");
    Docente* d3 = new Docente("Alberto Gacia", "image03.jpg", "albertogarcia@gmail.com", "alberto1010", "Facultad de Quimica");
    Estudiante* e1 = new Estudiante("Santiago Martinez", "image04.jpg", "s", "s", "4723727");
    Estudiante* e2 = new Estudiante("Gonzalo Perez", "image05.jpg", "gonzaloperez@gmail.com", "gonzalo1010", "4723721");
    Estudiante* e3 = new Estudiante("Facundo De los Santos", "image06.jpg", "facundedelossantos@gmail.com", "facundo1010", "4723724");
    mP->add(d1);
    mP->add(d2);
    mP->add(d3);
    mP->add(e1);
    mP->add(e2);
    mP->add(e3);
    // Asignaturas
    DtInstanciaClase dtIC = DtInstanciaClase(true, true, true);
    Asignatura* a1 = new Asignatura("MAT01", "Calculo1" , dtIC);
    Asignatura* a2 = new Asignatura("MAT02", "Calculo2" , dtIC);
    Asignatura* a3 = new Asignatura("MAT03", "Calculo3" , dtIC);
    Asignatura* a4 = new Asignatura("PROG01", "P. Programacion" , dtIC);
    Asignatura* a5 = new Asignatura("PROG02", "EDA" , dtIC);
    Asignatura* a6 = new Asignatura("PROG03", "PAV" , dtIC);
    Asignatura* a7 = new Asignatura("BD1", "Bases de datos I" , dtIC);
    Asignatura* a8 = new Asignatura("BD2", "Bases de datos II" , dtIC);
    ManejadorAsignatura* mA =ManejadorAsignatura::getInstancia();
    mA->agregarAsignatura(a1);
    mA->agregarAsignatura(a2);
    mA->agregarAsignatura(a3);
    mA->agregarAsignatura(a4);
    mA->agregarAsignatura(a5);
    mA->agregarAsignatura(a6);
    mA->agregarAsignatura(a7);
    mA->agregarAsignatura(a8);
    e1->addAsignatura(a1);
    // Asignar Asignatura
   // Practico* claseP = new Practico("clase1", 10, 10,)
    Rol* rol = new Rol(MONITOREO);
    rol->setAsignatura(a1);
    d1->agregarAsignatura(rol);
   // a1->agregarClase

    // Clase
    ManejadorClase* mC = ManejadorClase::getInstancia();
    time_t timer;
    time(&timer);
    cout << timer << endl;
    // Datatypes
    struct tm fecha = {0};
    fecha.tm_year = 2020;
    fecha.tm_mon = 2;
    fecha.tm_mday = 2;
    fecha.tm_hour = 20;
    fecha.tm_min = 30;
    time_t t = mktime(&fecha);
    char mensaje [50] = "hola me llamo santi";
    DtParticipacion dtP = DtParticipacion();
}