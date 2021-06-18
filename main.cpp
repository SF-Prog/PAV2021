
#include "clases/Fabrica.h"
#include "interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "interfaces/IControladorAltaAsignatura.h"
#include "interfaces/IControladorAltaUsuario.h"
#include "interfaces/IControladorAsignarAsignaturaDocente.h"
#include "interfaces/IControladorAsistenciaClaseEnVivo.h"
#include "interfaces/IControladorEliminarAsignatura.h"
#include "interfaces/IControladorEnvioDeMensaje.h"
#include "interfaces/IControladorInicioDeClase.h"
#include "interfaces/IControladorInscripcionAsignatura.h"
#include "interfaces/IControladorListarClases.h"
#include "datatypes/DtAsignatura.h"
#include "datatypes/DtInstanciaClase.h"
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

Fabrica *f;
IControladorAltaAsignatura *iConAltaAsignatura;
IControladorAltaUsuario *iConAltaUsuario;
IControladorAsignarAsignaturaDocente *iConAsignarAsignaturaDocente;
IControladorAsignarAsignaturaDocente *iConAsignaturaDocente;
IControladorAsistenciaClaseEnVivo *iConAsistenciaClaseEnVivo;
IControladorEliminarAsignatura *iConEliminarAsignatura;
IControladorEnvioDeMensaje *iConEnvioDeMensaje;
IControladorInicioDeClase *iConInicioDeClase;      
IControladorInscripcionAsignatura *iConInscripcionAsignatura;      
IControladorListarClases *iConListarClases;     

void agregarUsuario();
void agregarAsignatura();
void asignacionAsignaturaDocente();
void inscripcionAsignatura();
void inicioClase();
void asistenciaClaseEnVivo();
void envioDeMensaje();
void eliminDeAsignatura();
void listClase();

void menu(){
    cout<<"___________________________________"<<endl;
    cout<<endl<<"~~~~~~~~~~~~ Institucion ~~~~~~~~~~~~"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<"1 - Alta de usuario"<<endl;
    cout<<endl<<"2 - Alta de asignatura"<<endl;
    cout<<endl<<"3 - Asignacion de docentes a una asignatura"<<endl;
    cout<<endl<<"4 - Inscripcion a las asignaturas"<<endl;
    cout<<endl<<"5 - Inicio de clase"<<endl;
    cout<<endl<<"6 - Asistencia a clase en vivo"<<endl;
    cout<<endl<<"7 - Envio de mensaje"<<endl;
    cout<<endl<<"8 - Eliminacion de asignatura"<<endl;
    cout<<endl<<"9 - Listado de Clases"<<endl;
    cout<<"10 - Salir"<<endl<<endl;
    cout<<"Ingrese opcion: ";
}

void ingrese_enter(){    
    cout<<endl<<endl<<"Ingrese <enter>"<<endl;
    fflush(stdout);
    getchar();
    while(getchar()!= '\n');
}

void limpiarPantalla(){
    //sleep(1);
    //system("clear");
    //fflush(stdout);
};


// 1- ALTA USUARIO
void agregarUsuario(){
    string nombre, imagen, email, contrasenia;
    cout<<"ALTA USUARIO"<<endl;
    cout<<"Ingrese nombre del usuario"<<endl;
    cin>>nombre;
    cout<<"Ingrese imagen del usuario"<<endl;
    cin>>imagen;
    cout<<"Ingrese email del usuario"<<endl;
    cin>>email;
    cout<<"Ingrese contrasenia del usuario"<<endl;
    cin>>contrasenia;

    iConAltaUsuario->ingresarDatosPerfil(DtPerfil(nombre, imagen, email, contrasenia));

    string opt;
    cout<<"Indique si es un estudiante o docente (ESTUDIANTE/DOCENTE)"<<endl;
    cin>>opt;

    if(opt=="ESTUDIANTE"){
        string documento;
        cout<<"Ingrese documento"<<endl;
        cin>>documento;
        iConAltaUsuario->ingresarEstudiante(documento);
    }else{
        string inst;
        cout<<"Ingrese instituto"<<endl;
        cin>>inst;
        iConAltaUsuario->ingresarDocente(inst);
    }
    opt = "";
    while(opt != "si" && opt != "no"){
        cout<<"Desea confirmar (si/no)"<<endl;
        cin>>opt;
    };    
    if(opt=="si"){
        iConAltaUsuario->altaUsuario();
    }else
        iConAltaUsuario->cancelar();
}

// 2- ALTA ASIGNATURA
void agregarAsignatura(){

    cout<<"ALTA ASIGNATURA"<<endl;  
    string auxCod,auxNombre,auxTipMonitoreo,auxTipPractico,auxTipTeorico,confirma;
    cout<<"Codigo: ";
    cin>>auxCod;
    cout<<"Nombre: ";
    cin>>auxNombre;
    cout<<"Tiene instancia de Monitoreo(si/no): ";
    cin>>auxTipMonitoreo;
    cout<<"Tiene instancia de Practico(si/no): ";
    cin>>auxTipPractico;
    cout<<"Tiene instancia de Teorico(si/no): ";
    cin>>auxTipTeorico;

    DtInstanciaClase dtInstanciaClase = DtInstanciaClase(auxTipTeorico=="si",auxTipPractico=="si",auxTipMonitoreo=="si");
    DtAsignatura dtAsignatura = DtAsignatura(auxCod,auxNombre,dtInstanciaClase); 
    
    iConAltaAsignatura->ingresar(dtAsignatura);
    
    cout<<"¿Desea confirmar? (si/no)";
    cin>>confirma;

    if(confirma=="si"){
        try{
            
            iConAltaAsignatura->altaAsignatura();  

        }catch (const invalid_argument& e) {
            cerr << "Invalid argument: " << e.what() << '\n';
        }
    }else{
        iConAltaAsignatura->cancelar();
    } 
}

// 3- ASIGNACION DOCENTE
void asignacionAsignaturaDocente(){
    cout<<"ASIGNACION DE DOCENTES A UNA ASIGNATURA"<<endl;
    list<string> listaAsignaturas = iConAsignarAsignaturaDocente->listarAsignaturas();
    int indiceDeLaAsignaturaSeleccionada;
    int indexListaDocente = 1;
    int indiceDelDocenteSeleccionado;
    int indiceDeLaAsignatura = 1;
    cout << "\n\n\n\n\n ---------------LISTA DE ASIGNATURAS---------------\n\n\n" << endl;
    for(list<string>::iterator it=listaAsignaturas.begin(); it != listaAsignaturas.end(); it++){
        cout << "Indice de la Asignatura (" << indiceDeLaAsignatura << ") con codigo: "<< (*it) << endl;
    };
    cout << "SELECCIONE EL INDICE DE LA ASIGNATURA, Lista vacia? seleccione 0 :  ";
    cin >> indiceDeLaAsignaturaSeleccionada;
    if(indiceDeLaAsignaturaSeleccionada == 0){
        menu();
    };
    while(indiceDeLaAsignaturaSeleccionada  < listaAsignaturas.size()){
        cout << "\nIndice incorrecto, seleccione el indice de la asignatura nuevamente:" << listaAsignaturas.size();
        cin >> indiceDeLaAsignaturaSeleccionada;
    };
    //Obtengo el cod de la asignatura del indice que selecciono el usuario
    string codAsignaturaSeleccionada; 
    int iteratorIndexAsignatura = 1;
    for(list<string>::iterator itA=listaAsignaturas.begin(); itA != listaAsignaturas.end(); itA++){
        if(iteratorIndexAsignatura == indiceDeLaAsignaturaSeleccionada){
            codAsignaturaSeleccionada = *(itA);
        }
    };
    cout << "\nUsted ha seleccionado el codigo de Asignatura: " << codAsignaturaSeleccionada << endl;
    list<string> listaEmailsDocentes = iConAsignarAsignaturaDocente->docentesSinLaAsignatura(codAsignaturaSeleccionada);
    for(list<string>::iterator itD=listaEmailsDocentes.begin(); itD != listaEmailsDocentes.end(); itD++){
        cout << "Indice del docente "<< indexListaDocente << ", con email:   "<< (*itD) << endl;
    };
    cout << "SELECCIONE EL INDICE DEL DOCENTE, Lista vacia? seleccione 0 :  ";
    cin >> indiceDelDocenteSeleccionado;
    // busco y creo el Docente* de email seleccionado
    if(indiceDelDocenteSeleccionado == 0){
        menu();
    };
    while(indiceDelDocenteSeleccionado  < listaEmailsDocentes.size()){
        cout << "\nIndice incorrecto, seleccione el indice de la docente nuevamente:" << listaEmailsDocentes.size();
        cin >> indiceDelDocenteSeleccionado;
    };
    int iteratorIndexDocente = 1;
    string emailDocenteSeleccionado;
    for(list<string>::iterator itA=listaEmailsDocentes.begin(); itA != listaEmailsDocentes.end(); itA++){
        if(iteratorIndexDocente == indiceDeLaAsignaturaSeleccionada){
            emailDocenteSeleccionado = *(itA);
        }
    };
    bool agregarDocente = true;
    while(agregarDocente == true){
        int rolDelDocente;
        cout << "Ingrese el Rol del docente\n1 - TEORICO\n2 - PRACTICO\n3 - MONITOREO) \n";
        cin >> rolDelDocente;
        // Como se trabaja con el ENUM>?
        if(rolDelDocente < 1 || rolDelDocente > 3){
            cout << "ROL INCORRECTO -> Ingrese el Rol del docente nuevamente\n1 - TEORICO\n2 - PRACTICO\n3 - MONITOREO) \n";
            cin >> rolDelDocente;
        };
        TipoRol tipoRol;
        switch (rolDelDocente) {
            case 1: tipoRol = TEORICO;
                break;
            case 2: tipoRol = PRACTICO;
                break;
            case 3: tipoRol = MONITOREO;
                break;
        } // NO ESTOY SEGURO COMO ASIGNAR EL VALOR A UN ENUM
    
        iConAsignarAsignaturaDocente->selectDocente(emailDocenteSeleccionado, tipoRol);
        string deseaConfirmarString;
        cout << "Desea confirmar la operacion? (si/no): ";
        cin >> deseaConfirmarString;
        while(deseaConfirmarString != "si" && deseaConfirmarString != "no"){
            cout << "\nINPUT INCORRECTO\nDesea confirmar la operacion? (si/no): ";
            cin >> deseaConfirmarString;
        };
        if(deseaConfirmarString == "si"){
            iConAsignarAsignaturaDocente->asignarDocente();
            string deseaAgregarOtro;
            cout << "\nOPERACION REALIZADA EXITOSAMENTE, desea agregar otro Docente? (si/no): ";
            cin >> deseaAgregarOtro;
            while(deseaConfirmarString != "si" && deseaConfirmarString != "no"){
                cout << "\nINPUT INCORRECTO\nDesea agregar otro Docente? (si/no): ";
                cin >> deseaConfirmarString;
            };
            if(deseaConfirmarString == "no"){
                agregarDocente = false;
                menu();
            };
        } else if(deseaConfirmarString == "no"){
            menu(); // cancelar
        }
    }
}

// 4- INSCRIPCION ASIGNATURA
void inscripcionAsignatura(){}

// 5- INICIO CLASE
void inicioClase(){}

// 6- ASISTENCIA CLASE EN VIVO
void asistenciaClaseEnVivo(){}

// 7- ENVIO DE MENSAJE
void envioDeMensaje(){}

// 8- ELIMINACION DE ASIGNATURA
void eliminDeAsignatura(){}

// 9- LISTAR CLASE
void listClase(){}



/*
// FUNCIoN PARA CARGAR DATOS VALIDO UNA VEZ;
void cargarDatos(){
    iConAltaMozo->cargarMozos();                    //ingresa mozos al sistema;    
    iConAltaMesa->cargarMesas();                    //ingresa mesas al sistema y las asigna a los mozos.
    iConAltaProd->cargarDatos();                    //ingresa Productos al sistema
}
*/

void cargarDatos(){
    f = Fabrica::getInstancia();
    iConAltaAsignatura = f->getIControladorAltaAsignatura();
    iConAltaUsuario = f->getIControladorAltaUsuario();
    iConAsignarAsignaturaDocente = f->getIControladorAsignarAsignaturaDocente();
    iConAsignarAsignaturaDocente = f->getIControladorAsignaturaDocente();
    iConAsistenciaClaseEnVivo = f->getIControladorAsistenciaClaseEnVivo();
    iConEliminarAsignatura = f->getIControladorEliminarAsignatura();
    iConEnvioDeMensaje = f->getIControladorEnvioDeMensaje();
    iConInicioDeClase = f->getIControladorInicioDeClase();      
    iConInscripcionAsignatura = f->getIControladorInscripcionAsignatura();      
    iConListarClases = f->getIControladorListarClases();     
};

// MAIN

int main(){
    cargarDatos();//Carga datos de fabrica
    int num = 0;
    system("cls");
    while (num != 10){
        menu();
        cin>>num;
        switch (num)
        {
            case 1:
                limpiarPantalla();
                agregarUsuario();
                limpiarPantalla();             
                break;
            case 2:
                limpiarPantalla();
                agregarAsignatura();
                limpiarPantalla();             
                break;
            case 3:
                limpiarPantalla();
                asignacionAsignaturaDocente();
                limpiarPantalla();             
                break;
            case 4:
                limpiarPantalla();
                inscripcionAsignatura();
                limpiarPantalla();             
                break;
            case 5:
                limpiarPantalla();
                inicioClase();
                limpiarPantalla();             
                break;
            case 6:
                limpiarPantalla();
                asistenciaClaseEnVivo();
                limpiarPantalla();             
                break;
            case 7:
                limpiarPantalla();
                envioDeMensaje();
                limpiarPantalla();             
                break;
            case 8:
                limpiarPantalla();
                eliminDeAsignatura();
                limpiarPantalla();             
                break;
            case 9:
                limpiarPantalla();
                listClase();
                limpiarPantalla();             
                break;
            case 10:
                //salir
                return 0;                
                break;
            default:
                cout<<"Opcion incorrecta. Intente nuevamente."<<endl;
                ingrese_enter();
                limpiarPantalla();
                break;
        }
    } 
    return 0;
}