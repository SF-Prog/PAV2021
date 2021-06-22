
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
#include "datatypes/DtInfoClase.h"
#include "datatypes/DtAsignatura.h"
#include "datatypes/DtInstanciaClase.h"
#include "datatypes/DtIniciarClase.h"
#include "datatypes/DtIniciarClaseFull.h"
#include "enum/TipoRol.h"
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

Fabrica *f;
IControladorIniciarSesion *iConIniciarSesion;
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
IControladorAgregarDatos *iConAgD;

void agregarUsuario();
void agregarAsignatura();
void asignacionAsignaturaDocente();
void inscripcionAsignatura();
void inicioClase();
void asistenciaClaseEnVivo();
void envioDeMensaje();
void eliminacionDeAsignatura();
void listClase();

//PROPIEDADES
bool primeraVezCargaDeDatos = true;

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
    cout<<endl<<"99 - Cargar Datos de Prueba"<<endl;
    cout<<"10 - Salir"<<endl<<endl;
    cout<<"Ingrese opcion: ";
}

void menuAdministrador(){
    cout<<"___________________________________"<<endl;
    cout<<endl<<"~~~~~~~~~~~~ Institucion ~~~~~~~~~~~~"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<"1 - Alta de usuario"<<endl;
    cout<<endl<<"2 - Alta de asignatura"<<endl;
    cout<<endl<<"3 - Asignacion de docentes a una asignatura"<<endl;
    cout<<endl<<"4 - Eliminacion de asignatura"<<endl;
    cout<<endl<<"99 - Cargar Datos de Prueba"<<endl;
    cout<<"10 - Salir"<<endl<<endl;
    cout<<"Ingrese opcion: ";
}

void menuEstudiante(){
    cout<<"___________________________________"<<endl;
    cout<<endl<<"~~~~~~~~~~~~ Institucion ~~~~~~~~~~~~"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<"1 - Inscripcion a las asignaturas"<<endl;
    cout<<endl<<"2 - Asistencia a clase en vivo"<<endl;
    cout<<endl<<"3 - Envio de mensaje"<<endl;
    cout<<"10 - Salir"<<endl<<endl;
    cout<<"Ingrese opcion: ";
}

void menuDocente(){
    cout<<"___________________________________"<<endl;
    cout<<endl<<"~~~~~~~~~~~~ Institucion ~~~~~~~~~~~~"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<"1 - Inicio de clase"<<endl;
    cout<<endl<<"2 - Envio de mensaje"<<endl;
    cout<<endl<<"3 - Listado de Clases"<<endl;
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
    cout << "_____________________________________________________" << endl;
    cout << "==================AGREGAR USUARIO==================" << endl;
    cout << "_____________________________________________________" << endl;
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
    cout << "_____________________________________________________" << endl;
    cout << "==================ALTA ASIGNATURA==================" << endl;
    cout << "_____________________________________________________" << endl;
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
void asignacionAsignaturaDocente(){

    cout << "_____________________________________________________" << endl;
    cout << "=============ASIGNAR DOCENTE A ASIGNATURA===========" << endl;
    cout << "_____________________________________________________" << endl;

    list<string> asignaturas = iConAsignarAsignaturaDocente->listarAsignaturas();
    for(list<string>::iterator it=asignaturas.begin(); it != asignaturas.end(); it++){
        cout << (*it) << endl;
    };
    string cod;
    cout << "Ingrese el codigo de la asignatura:" << endl;
    cin>> cod;
    bool agregar = true;
    while(agregar){
        string emailDocente;
        int rolDelDocente;
        list<string> docSinAsignatura = iConAsignarAsignaturaDocente->docentesSinLaAsignatura(cod);
        for(list<string>::iterator it=docSinAsignatura.begin(); it != docSinAsignatura.end(); it++){
            cout << (*it) << endl;
        };
        cout<< "Seleccione el email del docente"<<endl;
        cin>>emailDocente;
        cout << "Ingrese el indice del Rol del docente\n1 - TEORICO\n2 - PRACTICO\n3 - MONITOREO \n";
            cin >> rolDelDocente;
        TipoRol tipoRol;
        switch (rolDelDocente) {
             case 1: tipoRol = TEORICO;
                 break;
             case 2: tipoRol = PRACTICO;
                 break;
             case 3: tipoRol = MONITOREO;
                 break;
        };
        iConAsignarAsignaturaDocente->selectDocente(emailDocente, tipoRol);
        string confirma = "";
        while(confirma != "si" && confirma != "no"){
            cout << "Desea confirmar? (si/no)"<<endl;
            cin >> confirma;
            if(confirma == "si")
                iConAsignarAsignaturaDocente->asignarDocente();
            else
                iConAsignarAsignaturaDocente->cancelar();
        };
        string respuesta = "";
        while (respuesta != "si" && respuesta != "no"){
            cout << "Desea seguir agregando docentes a la asignatura (si/no)"<<endl;
            cin >>respuesta;
        };
        if(respuesta == "no")
            agregar = false;
    };
}

// 4- INSCRIPCION ASIGNATURA
void inscripcionAsignatura(){
    cout << "_____________________________________________________" << endl;
    cout << "=========INSCRIPCION ESTUDIANTE A ASIGNATURA========" << endl;
    cout << "_____________________________________________________" << endl;
    bool sigue = true;
    while (sigue){
        cout<<"Listado de asignaturas :"<<endl;
        list<string> listaAsignaturas = iConInscripcionAsignatura->asignaturasNoInscripto();
        cout<<"CANTIDAD ASIGNATURAS:"<< listaAsignaturas.size()<<endl;
        for(list<string>::iterator it=listaAsignaturas.begin(); it != listaAsignaturas.end(); it++){
        cout << "Codigo de la Asignatura :"<< (*it) << endl;
        };
        string cod;// ver si no deberia ser un string
        cout<<"Ingrese el codigo de la asignatura a inscribirse"<<endl;
        cin>>cod;
        iConInscripcionAsignatura->selectAsignatura(cod);
        string confirma;
        cout<<"¿Desea confirmar? (si/no)";
        cin>>confirma;
        if(confirma=="si"){
            iConInscripcionAsignatura->inscribir();
            cout<<"Inscripcion confirmada";
        }else{
            iConInscripcionAsignatura->cancelar();
        }
        cout<<"¿Desea continuar inscribiendo asignaturas? (si/no)";
        cin>>confirma;
        if(confirma=="no"){
            sigue = false;
        }

    }
}

// 5- INICIO CLASE
void inicioClase(){
    cout<<"INICIO DE CLASE"<<endl;
    list<string> listaAsignaturas = iConInicioDeClase->asignaturasAsignadas();
    for(list<string>::iterator it=listaAsignaturas.begin(); it != listaAsignaturas.end(); it++){
        cout << "Codigo de la Asignatura :"<< *it << endl;
    };
    string nombre,cod ;
    int anio, mes, dia, hora, minutos;
    struct tm fecha = {0};
    cout << "INGRESE CODIGO DE LA ASIGNATURA"<< endl;
    cin>>cod;
    cout << "INGRESE NOMBRE"<< endl;
    cin>>nombre;
    cout << "INGRESE LA FECHA Y HORA DEL INICIO DE CLASE:"<< endl;
    cout << "ANIO:"<< endl;
    cin>>anio;
    cout << "MES:"<< endl;
    cin>>mes;
    cout << "DIA:"<< endl;
    cin>>dia;
    cout << "INGRESE LA HORA"<< endl;
    cout << "HORA:"<< endl;
    cin>>hora;
    cout << "MINUTOS:"<< endl;
    cin>>minutos;
    fecha.tm_year = anio;
    fecha.tm_mon = mes;
    fecha.tm_mday = dia;
    fecha.tm_hour = hora;
    fecha.tm_min = minutos;
    time_t t = mktime(&fecha);
    cout<< fecha.tm_year << "/" << fecha.tm_mon << "/" << fecha.tm_mday << "  hora: " << fecha.tm_hour << ":" << fecha.tm_min <<endl;
    DtIniciarClase dtic = DtIniciarClase(cod, nombre, t);
    bool monitoreo = iConInicioDeClase->selectAsignatura(dtic);
    if(monitoreo){
        cout << "INSCRIPTOS EN LA ASIGNATURA"<< endl;
        list<string> listaInscriptos = iConInicioDeClase->inscriptosAsignatura();
        for(list<string>::iterator it=listaInscriptos.begin(); it != listaInscriptos.end(); it++){
            cout <<  (*it) << endl;
        };
        string habilitar = "si";
        while (habilitar == "si"){
            cout << "¿Quiere habilitar más estudiantes ?(si/no) "<< endl;
            cin >> habilitar;
            if(habilitar == "si"){
                string email;
                cout << "Ingrese email"<< endl;
                cin>>email;
                iConInicioDeClase->habilitar(email);
            }
        }

    }
    string confirmar;
    iConInicioDeClase->datosIngresados();
    cout << "¿Confirmar inicio de clase ?(si/no) "<< endl;
    cin >> confirmar;
    if(confirmar == "si"){
       iConInicioDeClase->iniciarClase();
    }else{
       iConInicioDeClase->cancelar();
    }
}

// 6- ASISTENCIA CLASE EN VIVO
void asistenciaClaseEnVivo(){
    list<string> listAsignaturasInscripto = iConAsistenciaClaseEnVivo->asignaturasInscripto();
    if(listAsignaturasInscripto.size() != 0){

        for(list<string>::iterator it=listAsignaturasInscripto.begin(); it != listAsignaturasInscripto.end(); it++){
            cout << "Codigo de la Asignatura :"<< (*it) << endl;
        };
        string cod;
        cout << "INGRESE CODIGO DE LA ASIGNATURA"<< endl;
        cin>>cod;
        list<int> listClaseDisponiles = iConAsistenciaClaseEnVivo->clasesOnlineDisponibles(cod);
        if(listClaseDisponiles.size() != 0){
            for(list<int>::iterator it=listClaseDisponiles.begin(); it != listClaseDisponiles.end(); it++){
                cout << "Codigo de la Clase :"<< (*it) << endl;
            };
            int id;
            cout << "INGRESE CODIGO DE LA CLASE"<< endl;
            cin>>id;
            DtAsistir dtAsistir = iConAsistenciaClaseEnVivo->selectClase(id);
            cout<< dtAsistir << endl;
            string respuesta="";
            while(respuesta != "si" && respuesta != "no"){
                cout << "¿Desea confirmar la asistencia? (si/no)"<< endl;
                cin>>respuesta;
            }

            if(respuesta=="si"){
                iConAsistenciaClaseEnVivo->asistirClaseEnVivo();
            }else{
                iConAsistenciaClaseEnVivo->cancelar();
            }
        } else {
            cout << "No hay ninguna Clase de esta materia a la cual inscribirse." << endl;
        }
    } else {
        cout << "El Estudiante no esta inscripto a ninguna asignatura." << endl;
    }
}

// 7- ENVIO DE MENSAJE
void envioDeMensaje(){
    string responde;
    char texto[50];
    string confirma = "";
    int idC, idP;
    list<int> clases;
    cout << "_____________________________________________________" << endl;
    cout << "==================ENVIO DE MENSAJE==================" << endl;
    cout << "_____________________________________________________" << endl;
    cout<<"\n------Clases disponibles -----\n"<<endl;
    clases = iConEnvioDeMensaje->clasesOnlineAsistiendo();
    if(clases.size() != 0){

        for(list<int>::iterator it=clases.begin(); it!=clases.end(); it++){
            cout<< "Clase con id: " << (*it)<<endl;
        }
        cout<<"\nSeleccione el id de la clase:"<<endl;
        cin>>idC;
        list<DtParticipacion*> dtParticipaciones = iConEnvioDeMensaje->selectClase(idC);
        if(dtParticipaciones.size() > 0){
            cout<<"\nParticipaciones para la clase de id: "<< idC << endl;
            for(list<DtParticipacion*>::iterator it=dtParticipaciones.begin(); it!=dtParticipaciones.end(); it++){
                cout<<(*it)<<endl;
            };
            cout<<"Indique el id si desea responder, de lo contrario ingrese 0"<<endl;
            cin>>idP;
            if(idP != 0)
                iConEnvioDeMensaje->responder(idP);
        }
        cout<<"Ingrese su mensaje:"<<endl;
        scanf(" %[^\n]s",texto);
        iConEnvioDeMensaje->ingresarTexto(texto);
        cout << "\n\n El texto ingreado es: " << texto << endl;

        cout<<"¿Desea confirmar? (si/no)"<<endl;
        cin>>confirma;
        while(confirma != "si" && confirma != "no"){
            cout<<"¿Desea confirmar? (si/no)"<<endl;
            cin>>confirma;
        }
        if (confirma == "si")
            iConEnvioDeMensaje->enviarMensaje();
        iConEnvioDeMensaje->cancelar();
    } else {
        cout << "\nEl estudiante no tiene clases Online a las que se ha inscripto.\n" << endl;
    }
}

// 8- ELIMINACION DE ASIGNATURA
void eliminacionDeAsignatura(){
    string cod;
    string confirma = "";
    cout << "_____________________________________________________" << endl;
    cout << "==================ELIMINACION DE ASIGNATURA==================" << endl;
    cout << "_____________________________________________________" << endl;
    iConEliminarAsignatura->listarAsignaturas();
    cout<<"Seleccione una asignatura: ";
    cin>>cod;
    iConEliminarAsignatura->selectAsignatura(cod);
    while (confirma != "si" && confirma != "no"){
        cout<<"¿Desea confirmar? (si/no): ";
        cin>>confirma;
    };
    if (confirma == "si"){
            iConEliminarAsignatura->eliminarAsignatura();
        }else
            iConEliminarAsignatura->cancelar();
};

// 9- LISTAR CLASE
void listarClase(){
    cout << "_____________________________________________________" << endl;
    cout << "==================Listado De Clases==================" << endl;
    cout << "_____________________________________________________" << endl;
    cout<<"Listado de asignaturas:"<<endl;
    list<string> listaAsignaturas = iConListarClases->asignaturasAsignadas();
    for(list<string>::iterator it=listaAsignaturas.begin(); it != listaAsignaturas.end(); it++){
        cout << "Codigo de la Asignatura :"<< (*it) << endl;
    };
    string cod;
    cout<<"Ingrese el codigo de la asignatura:"<<endl;
    cin>>cod;
    list<DtInfoClase*> listaDtInfoClase = iConListarClases->selectAsignatura(cod);
    DtInfoMonitoreo* m;
    DtInfoTeorico* t;
    for(list<DtInfoClase*>::iterator it=listaDtInfoClase.begin(); it != listaDtInfoClase.end(); it++){
        t = static_cast<DtInfoTeorico*>(*it);
			if (t!=NULL)
				cout << "\n\n" << *(t);
			else{
				m = static_cast<DtInfoMonitoreo*>(*it);
				if (m!=NULL)
					cout << "\n\n" << *(m);
                else
                   cout << "\n\n" << *(it);
			}
    };
}

bool iniciarSesion(){
    bool sesionIniciada = false;
    string email, password;
    string confirma = "";
    cout<<"INICIAR SESION"<<endl;
    cout<<"Ingrese su email:"<<endl;
    cin>>email;
    cout<<"Ingrese su password:"<<endl;
    cin>>password;
    iConIniciarSesion->ingresarCredenciales(email, password);
    while (confirma != "si" && confirma != "no"){
        cout<<"¿Desea confirmar? (si/no)"<<endl;
        cin>>confirma;
    };
    if (confirma == "si")
        try{
            iConIniciarSesion->iniciarSesion();
            sesionIniciada = true;
        }catch(const invalid_argument& e){
            sesionIniciada = false;
            cout<< e.what() <<endl;
        }
    else
        iConIniciarSesion->cancelar();
    return sesionIniciada;
};

// FUNCION PARA CARGAR DATOS VALIDO UNA VEZ;
void cargarDatos(){
    cout << "_____________________________________________________" << endl;
    cout << "=====C A R G A R   D A T O S   D E   P R U E B A=====" << endl;
    cout << "_____________________________________________________" << endl;
    try {
        if (primeraVezCargaDeDatos) {
            iConAgD->cargarDatos();
            primeraVezCargaDeDatos = false;
            cout << endl << "Datos de prueba cargados." << endl;
        } else
            cout << endl << "No es posible volver a generar datos de prueba." << endl;
    } catch (exception& e) {
        cout << endl << e.what() << endl;
    }
}

void cargarFabrica(){
    f = Fabrica::getInstancia();
    iConIniciarSesion = f->getIControladorIniciarSesion();
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
    iConAgD = f->getIControladorAgregarDatos();
};

// MAIN
int menuFuncionesDocente(int num){
    switch (num){
        case 1:
            limpiarPantalla();
            inicioClase();
            limpiarPantalla();
            break;
        case 2:
            limpiarPantalla();
            envioDeMensaje();
            limpiarPantalla();
            break;
        case 3:
            limpiarPantalla();
            listarClase();
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

int menuFuncionesEstudiante(int num){
    switch (num){
        case 1:
            limpiarPantalla();
            inscripcionAsignatura();
            limpiarPantalla();
            break;
        case 2:
            limpiarPantalla();
            asistenciaClaseEnVivo();
            limpiarPantalla();
            break;
        case 3:
            limpiarPantalla();
            envioDeMensaje();
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

int menuFuncionesAdministrado(int num){

    switch (num){
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
            eliminacionDeAsignatura();
            limpiarPantalla();
            break;
        case 99:
            limpiarPantalla();
            cargarDatos();
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

/*
int main(){
    cargarFabrica();//Carga datos de fabrica
    int num = 0;
    system("cls");
    while (num != 10){
        if(iniciarSesion()){
            int opcion = 3;
            while (opcion!=1 && opcion!=2 && opcion !=0 ){
                cout<<"Si eres docente ingrese 1, si eres estudiante ingrese 2 y si desea salir ingrese 0"<<endl;
                cin>>opcion;
                if(opcion == 1){
                    /// MENU DOCENTE
                    menuDocente();
                    cin>>num;
                    menuFuncionesDocente(num);
                }else if(opcion == 2){
                    /// MENU ESTUDIANTE
                    menuEstudiante();
                    cin>>num;
                    menuFuncionesEstudiante(num);
                }else{
                    cout<<"Ingreso un dato invalido"<<endl;
                }
            }


        }else{
            /// MENU ADMINISTRADOR
            menuAdministrador();
            cin>>num;
            menuFuncionesAdministrado(num);
        }

    }
    return 0;
} */
bool deseaIniciarSesion(){
    string respuesta="";
    while(respuesta != "si" && respuesta != "no"){
        cout<<"Desea iniciar Sesion? (si/no)"<<endl;
        cin>>respuesta;
    }
    return respuesta == "si";
};

int main(){
    cargarFabrica();
    int menuOpcion = 0;
    while (menuOpcion != 10){
        while(deseaIniciarSesion()){
            if(iniciarSesion()){
                int opcion = 3;
                while (opcion!=1 && opcion!=2 && opcion !=0){
                    cout<<"Si eres docente ingrese 1, si eres estudiante ingrese 2 y si desea salir ingrese 0"<<endl;
                    cin>>opcion;
                    switch(opcion){
                        case 1:
                            /// MENU DOCENTE
                            menuDocente();
                            cin>>menuOpcion;
                            menuFuncionesDocente(menuOpcion);
                            break;
                        case 2:
                            /// MENU ESTUDIANTE
                            menuEstudiante();
                            cin>>menuOpcion;
                            menuFuncionesEstudiante(menuOpcion);
                            break;
                        default:
                            cout<<"Opcion incorrecta. Intente nuevamente."<<endl;
                            ingrese_enter();
                            limpiarPantalla();
                            break;
                    }
                }
            }
        }
        /// MENU ADMINISTRADOR
        menuAdministrador();
        cin>>menuOpcion;
        menuFuncionesAdministrado(menuOpcion);
    }
};
