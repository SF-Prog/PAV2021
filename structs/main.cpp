#include "Puerto.h"
#include "DtBarco.h"
#include "DtPuerto.h"
#include "DtFecha.h"
#include "DtBarcoPesquero.h"
#include "DtBarcoPasajeros.h"
#include "BarcoPesquero.h"
#include "BarcoPasajeros.h"
#include "TipoTamanio.h"


#include <iostream>
#include <string>
#include <cstdlib>
#include "windows.h"
#include <map>
#define MAXPUERTO 30 
#define MAXBARCO 30
#define MAXARRIBOS 80
using namespace std;

map<string, Puerto*> puertosMap;
map<string, DtBarco*> barcosMap;


//ESTRUCTURAS
struct puertos {
  Puerto* p[MAXPUERTO];
  int tope = 0;
} colPuertos;
struct Barcos {
  Barco* b[MAXBARCO];
  int tope = 0;
} colBarco;




//DECLARACIÓN OPERACIONES AUXILIARES
void existePuerto(string);



//OPERACIONES AUXILIARES

void existePuerto(string idPuerto){
	int i=0;
	bool existe=false;
	while((i<colPuertos.tope)&&(!existe)){

		if(idPuerto == colPuertos.p[i]->getId())
			existe=true;
		i++;
	}
	if (!existe)
		throw invalid_argument("\nERROR: NO EXISTE PUERTO CON ESE IDENTIFICADOR EN EL SISTEMA\n");
}

//----------  FIN AUXILIARES --------





Puerto* buscarPuerto(string idPuerto){
  int i = 0;
  while(i < colPuertos.tope && idPuerto != colPuertos.p[i]->getId()){
    i++;
  }
  if (i < colPuertos.tope){
    return colPuertos.p[i];
  }
    return NULL;
};
Barco* buscarBarco(string idBarco){

  int i = 0;
  while(i < colBarco.tope && idBarco != colBarco.b[i]->getId()){
    i++;
  }
  if (i < colBarco.tope){
    return colBarco.b[i];
  }else{
    return NULL;
  }
};

void agregarPuerto(string id, string nombre, DtFecha fechaCreacion){
    int i = 0;
    while (i < colPuertos.tope && id != colPuertos.p[i]->getId()){
      i++;
    };
    try {
      if (i == colPuertos.tope){
        Puerto *puerto = new Puerto(id, nombre, fechaCreacion);
        colPuertos.p[i] = puerto;
        colPuertos.tope++;
      }else
        throw invalid_argument("Ya existe el puerto de id: " + id + "\n");
    }catch (const invalid_argument& e) {
      cout << e.what();
    }
};
void agregarPuerto(){
  string id, nombre;
  int dia,mes,anio;
  DtFecha fecha;

  cout << "____AGREGAR PUERTO_____" << endl;
  cout << "Ingresa los datos del nuevo puerto" << endl;
  cout << "id:" << endl;
  cin >> id;
  cout << "nombre:" << endl;
  cin >> nombre;
  cout << "Ingresa una fecha" << endl;
  cout << "dia:" << endl;
  cin >> dia;
  cout << "mes:" << endl;
  cin >> mes;
  cout << "año:" << endl;
  cin >> anio;
  fecha = DtFecha(dia, mes, anio);
  agregarPuerto(id, nombre, fecha);
};


void agregarBarco(DtBarco *barco){
    try {
      if ((buscarBarco(barco->getId()) == NULL) && (colBarco.tope < MAXBARCO)){
        DtBarcoPesquero *dtBarcoPe = dynamic_cast<DtBarcoPesquero*>(barco);
        if(dtBarcoPe != NULL){
          BarcoPesquero *barcoPe = new BarcoPesquero(dtBarcoPe->getId(), dtBarcoPe->getNombre(), dtBarcoPe->getCapacidad() , dtBarcoPe->getCarga());
          colBarco.b[colBarco.tope] = barcoPe;
          colBarco.tope++;
          return;
        }
        DtBarcoPasajeros *dtBarcoPa = dynamic_cast<DtBarcoPasajeros*>(barco);
        if(dtBarcoPa != NULL){
          BarcoPasajeros *barcoPa = new BarcoPasajeros(dtBarcoPa->getId(), dtBarcoPa->getNombre(), dtBarcoPa->getCantPasajeros(), dtBarcoPa->getTamanio());
          colBarco.b[colBarco.tope] = barcoPa;
          cout << barcoPa->getCantPasajeros() << " pasajeros" << endl;
          cout << barcoPa->getTamanio() << " tamanio pasajeros" << endl;
          colBarco.tope++;
          return;   
        }
      }else if (colBarco.tope < MAXBARCO){
        throw invalid_argument("Ya existe el Barco de id: " + barco->getId() + "\n");
      }
    }catch (const invalid_argument& e) {
      cout << e.what();
    }  
};
void agregarBarco(){
  string id, nombre;
  int tipo ,cant,capacidad,carga, tt;
  TipoTamanio tamanio;
  system("cls");
  cout << "____AGREGAR BARCO_____" << endl;
  cout << "Ingresa los datos del nuevo barco" << endl;
  cout << "Ingrese el id:" << endl;
  cin >> id;
  system("cls");
  cout << "Ingrese el nombre:" << endl;
  cin >> nombre;
  system("cls");
  cout << "Ingresa tipo de Barco:" << endl;
  cout << "Pasajero (1) o Pesquero (2)" << endl;
  cin >> tipo;
  system("cls");
  if(tipo == 1){
    cout << "____TIPO PASAJEROS_____" << endl;
    cout << "Ingresa cantidad pasaejeros" << endl;
    cout << "cantidad:" << endl;
    cin >> cant;
    system("cls");
    cout << "Ingrese un numero para indicar el tipo de tamaño" << endl;
    cout << "Tipo tamanioo: \n\t0- bote / \n\t1- crucero / \n\t2- galeon / \n\t3- trasatlantico :" << endl;
    cin >> tt;
    switch(tt) {
      case 0: tamanio = BOTE;
        break;
      case 1: tamanio = CRUCERO;
        break;
      case 2: tamanio = GALEON;
        break;
      case 3: tamanio = TRANSATLANTICO;
        break;
    }
    DtBarcoPasajeros *dtBarco = new DtBarcoPasajeros(id, nombre, cant,tamanio);
    return agregarBarco(dtBarco);
  }else{
    cout << "____TIPO PESQUERO_____" << endl;
    cout << "Ingresa la capacidad" << endl;
    cin >> capacidad;
    cout << "Ingresa la carga:" << endl;
    cin >> carga;
    DtBarcoPesquero *dtBarco = new DtBarcoPesquero(id, nombre,capacidad,carga);
    return agregarBarco(dtBarco);
  }
};

DtPuerto** listarPuertos(int& cantPuertos){
  DtPuerto** listado = new DtPuerto*[cantPuertos];
  for (int i=0; i<cantPuertos; i++){
    DtPuerto* dtp = new DtPuerto(colPuertos.p[i]->getId(), colPuertos.p[i]->getNombre(), colPuertos.p[i]->getFechaCreacion());
    listado[i] = dtp;
  }
  return listado;
};
void listarPuertos(){
  int cantPuertos, flag;
  cout << "____LISTAR PUERTOS_____" << endl;
  cout << "Ingresa cuantos puertos deseas listar" << endl;
  cout << "Cantidad de puertos a listar:" << endl;
  cin >> cantPuertos;
  int cant;
  if (cantPuertos >= colPuertos.tope)
    cant = colPuertos.tope;
  else
    cant = cantPuertos;
  DtPuerto** dtPuerto = listarPuertos(cant);
  for (int i=0; i < cant; i++){
      cout << *dtPuerto[i];
  }
};

void agregarArribo(string idPuerto, string idBarco, DtFecha fecha, float cargaDespacho){
  Puerto* puerto = buscarPuerto(idPuerto);
  Barco* barco = buscarBarco(idBarco);
  try {
    if (puerto != NULL){
      if (barco != NULL){
        BarcoPesquero *barcoPe = dynamic_cast<BarcoPesquero*>(barco);
        if(barcoPe != NULL){
          if (cargaDespacho >= 0){
            if (barcoPe->getCarga() >= cargaDespacho){
              barcoPe->setCarga(-cargaDespacho);
              Arribo* arribo = new Arribo(fecha, cargaDespacho);
              arribo->agregarBarco(barcoPe);
              puerto->agregarArribo(arribo);
            }else{
              throw invalid_argument("El barco no tiene suficiente carga para realizar el arribo\n");
            }
          }else if ((barcoPe->getCarga() + cargaDespacho)*-1 <= barcoPe->getCapacidad()){ // -cargaDespacho >= 0
            barcoPe->setCarga(barcoPe->getCarga() + cargaDespacho);
            Arribo* arribo = new Arribo(fecha, cargaDespacho);
            arribo->agregarBarco(barcoPe);
            puerto->agregarArribo(arribo);
          }else{
            throw invalid_argument("No se puede aumentar la carga de un barco más allá de la capacidad total que soporta\n");
          }
        }else {
          BarcoPasajeros *barcoPa = dynamic_cast<BarcoPasajeros*>(barco);
          if (cargaDespacho == 0){
            Arribo* arribo = new Arribo(fecha, cargaDespacho);
            arribo->agregarBarco(barcoPa);
            puerto->agregarArribo(arribo);
            cout << arribo->getFecha() << " " << arribo->getCarga() << endl;
          }else{
            throw invalid_argument("El barco es de pasajeros y la carga que se despacha es distinta de cero.\n");
          }
        }
      }else {
        throw invalid_argument("No exite el barco ingresado\n");
      }
  }else{
      throw invalid_argument("No exite el puerto ingresado\n");
      }
  }catch (const invalid_argument& e) {
    cout << e.what();
  }  
}


void agregarArribo(){
  string idpuerto, idbarco;
  int dia, mes, anio;
  DtFecha fecha;
  float cargaDespacho; 
  cout << "____AGREGAR ARRIBO_____" << endl;
  cout << "Ingresa el identificador del puerto" << endl;
  cout << "id:" << endl;
  cin >> idpuerto;
  cout << "Ingresa el identificador del barco" << endl;
  cout << "id:" << endl;
  cin >> idbarco;
  cout << "Ingresa una fecha" << endl;
  cout << "dia:" << endl;
  cin >> dia;
  cout << "mes:" << endl;
  cin >> mes;
  cout << "año:" << endl;
  cin >> anio;
  fecha = DtFecha(dia, mes, anio);
  cout << "Ingresa el valor de la carga" << endl;
  cout << "Valor de la carga:" << endl;
  cin >> cargaDespacho;

  agregarArribo(idpuerto, idbarco, fecha, cargaDespacho);
};

DtArribo** obtenerInfoArribosEnPuerto(string idPuerto, int& cantArribos){
  Puerto* puerto = buscarPuerto(idPuerto);
  try {
    if (puerto != NULL) {
      int cant;
      if (cantArribos >= puerto->getCantArribos())
        cant = puerto->getCantArribos();
      else
        cant = cantArribos;
      DtArribo** dtArribos = new DtArribo*[cant];
      Arribo** arribos = puerto->getArribos();
      for (int i = 0; i < cant; i++){
        BarcoPesquero *barcoPe = dynamic_cast<BarcoPesquero*>(arribos[i]->getBarco());
        if(barcoPe != NULL){
          DtBarcoPesquero* dtBarcoPe = new DtBarcoPesquero(barcoPe->getId(), barcoPe->getNombre(), barcoPe->getCapacidad(), barcoPe->getCarga());
          dtArribos[i] = new DtArribo(arribos[i]->getCarga(), arribos[i]->getFecha(), dtBarcoPe);
        }else{
          BarcoPasajeros *barcoPa = dynamic_cast<BarcoPasajeros*>(arribos[i]->getBarco());
          DtBarcoPasajeros* dtBarcoPa = new DtBarcoPasajeros(barcoPa->getId(), barcoPa->getNombre(), barcoPa->getCantPasajeros(), barcoPa->getTamanio());
          dtArribos[i] = new DtArribo(arribos[i]->getCarga(), arribos[i]->getFecha(), dtBarcoPa);
        }
        cout << *dtArribos[i] << endl;
      }
    }else
      throw invalid_argument ("No existe el puerto de id:"+ idPuerto);
  }catch (const invalid_argument& e) {
      cout << e.what() << endl;
  }
};

void obtenerInfoArribosEnPuerto(){
  string idPuerto;
  int cantArribos;
  cout << "____OBTENER INFORMACION DE UN PUERTO_____" << endl;
  cout << "Ingresa el id del puerto" << endl;
  cin >> idPuerto;
  cout << "Cantidad de arribos a listar:" << endl;
  cin >> cantArribos;
  DtArribo** dtArribos = obtenerInfoArribosEnPuerto(idPuerto, cantArribos);
};


void eliminarArribos(string idPuerto, DtFecha fecha){
  Puerto* puerto = buscarPuerto(idPuerto);
	puerto->borrarArribo(idPuerto, fecha);

};


void eliminarArribos(){
	system("clear");
	cout <<"__________________________" <<endl;
  cout << "____Eliminar Arribos_____" << endl;
  string idPuerto;
	int dia, mes,anio;
	cout << "\nIdentificador de Puerto: ";
	cin >> idPuerto;
	try{
		existePuerto(idPuerto);
		cout << "\nELIMINAR ARRIBOS DE LA FECHA" <<endl;
		DtFecha dtFecha;
		cout << "DIA: ";
		cin >> dia;

		cout << "MES: ";
		cin >> mes;

		cout << "ANIO: ";
		cin >> anio;

		dtFecha = DtFecha(dia,mes,anio);
		eliminarArribos(idPuerto,dtFecha);
		cout << "Se han eliminado los arribos del puerto: "<< idPuerto <<" en la fecha " << dtFecha << " correctamente!"<< endl;
		
		cout << "\nPulse enter para continuar..."<<endl;
		
	}catch(invalid_argument& e){
		cout << e.what() << endl;
	}

};

DtBarco** listarBarcos(int& cantBarcos){
 // system("cls");
  DtBarco** coleccionDtBarcos;
  for(int i=0; i<cantBarcos; i++){
    BarcoPesquero *barcoPe = dynamic_cast<BarcoPesquero*>(colBarco.b[i]);
    if(barcoPe != NULL){
      DtBarcoPesquero* dtBarcoPe = new DtBarcoPesquero(barcoPe->getId(), barcoPe->getNombre(), barcoPe->getCapacidad(), barcoPe->getCarga());
      coleccionDtBarcos[i] = dtBarcoPe;
      cout << "Barco numero  " << i << " :    " << *dtBarcoPe << endl;
    }else{
      BarcoPasajeros *barcoPa = dynamic_cast<BarcoPasajeros*>(colBarco.b[i]);
      if(barcoPa != NULL){
        DtBarcoPasajeros* dtBarcoPa = new DtBarcoPasajeros( barcoPa->getId(), barcoPa->getNombre(), barcoPa->getCantPasajeros(), barcoPa->getTamanio());
        coleccionDtBarcos[i] = dtBarcoPa;
        cout << "Barco numero  " << i << " :    " << *dtBarcoPa << endl;
      } 
    }  
  }
};

void listarBarcos(){
//  system("cls");

  cout << "El tope es:"  << colBarco.tope << endl;
  cout <<"______LISTAR__BARCOS_______"<< endl;
  cout <<"___________________________"<< endl;
  int cant, cantidadBarcos;
	cout << "INGRESE LA CANTIDAD DE BARCOS: ";
	cin >> cantidadBarcos;
  
  if (cantidadBarcos >= colBarco.tope){
    cant = colBarco.tope;
  }else{
    cant = cantidadBarcos;
  }
  cout << "antes listarBarcos" << endl;
  DtBarco** dtBarco = listarBarcos(cant);
cout << "despues listarBarcos" << endl;
  for (int i=0; i < cant; i++){
      cout << *dtBarco[i];
  }

};



void menu(){
//  system("cls");
  cout << "_________________________" << endl;
  cout << "_______Bienvenido. Elija la opcion.__________" << endl;
  cout << "1. Agregar puerto" << endl;
  cout << "2. Agregar barco" << endl;
  cout << "3. Listar Puertos" << endl;
  cout << "4. Agregar Arribo" << endl;
  cout << "5. Obtener informacion de los arribos de un puerto" << endl;
  cout << "6. Eliminar arribos" << endl;
  cout << "7. Listar barcos" << endl;
  cout << "8. Salir" << endl;
  cout << "OPCION: ";
}

int main() {

  menu();
  int opcion;
  cin >> opcion;
  while(opcion!=8){
    switch(opcion){
      case 1: agregarPuerto();
              break;
      case 2: agregarBarco();
              break;
      case 3: listarPuertos();
              break;
      case 4: agregarArribo();
              break;
      case 5: obtenerInfoArribosEnPuerto();
              break;
      case 6: eliminarArribos();  
              break;      
      case 7: listarBarcos();  
              break;  
      case 8: system("exit");
              break;
    }
    menu();
    cin >> opcion;
  }
  return 0;
}






