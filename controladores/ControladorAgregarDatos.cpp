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

void ControladorAgregarDatos::cargarDatos(){
    list<Rol*> roles; // incializar esta variable
    //Perfiles
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    Perfil* d1 = new Docente("Juan Malcom", "image01.jpg", "juanmalcom@gmail.com", "juan1010", "Facultad de ingenieria", roles);
    Perfil* d2 = new Docente("Pedro Tunez", "image02.jpg", "pedrotunex@gmail.com", "pedro1010", "Facultad de Economia", roles);
    Perfil* d3 = new Docente("Alberto Gacia", "image03.jpg", "albertogarcia@gmail.com", "alberto1010", "Facultad de Quimica", roles);
    Perfil* e1 = new Estudiante("Santiago Martinez", "image04.jpg", "santiagomartinez@gmail.com", "santiago1010", "4723727");
    Perfil* e2 = new Estudiante("Gonzalo Perez", "image05.jpg", "gonzaloperez@gmail.com", "gonzalo1010", "4723721");
    Perfil* e3 = new Estudiante("Facundo De los Santos", "image06.jpg", "facundedelossantos@gmail.com", "facundo1010", "4723724");
    mP->add(d1);
    mP->add(d2);
    mP->add(d3);
    mP->add(e1);
    mP->add(e2);
    mP->add(e3);
    // Asignaturas
    ManejadorAsignatura* mA =ManejadorAsignatura::getInstancia();
    DtInstanciaClase dtIC = DtInstanciaClase(true, true, true);
    Asignatura* a1 = new Asignatura("MAT01", "Calculo1" , dtIC);
    Asignatura* a2 = new Asignatura("MAT02", "Calculo2" , dtIC);
    Asignatura* a3 = new Asignatura("MAT03", "Calculo3" , dtIC);
    Asignatura* a4 = new Asignatura("PROG01", "P. Programacion" , dtIC);
    Asignatura* a5 = new Asignatura("PROG02", "EDA" , dtIC);
    Asignatura* a6 = new Asignatura("PROG03", "PAV" , dtIC);
    Asignatura* a7 = new Asignatura("BD1", "Bases de datos I" , dtIC);
    Asignatura* a8 = new Asignatura("BD2", "Bases de datos II" , dtIC);
    // Clase
    ManejadorClase* mC = ManejadorClase::getInstancia();
    time_t timer;
    time(&timer);
    cout << timer << endl;
    // Otros

}