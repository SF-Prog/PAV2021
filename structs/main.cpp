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
#include <unistd.h>
#include "windows.h"
#include <map>
#define MAXPUERTO 30 
#define MAXBARCO 30
using namespace std;

map<string, Puerto*> puertosMap;
map<string, DtBarco*> barcosMap;

struct puertos {
  Puerto* p[MAXPUERTO];
  int tope;
} colPuertos;
struct Barcos {
  Barco* b[MAXBARCO];
  int tope;
} colBarco;

bool buscarPuerto(string idPuerto){

  int i = 0;
  while(i < colBarco.tope && idPuerto != colBarco.b[i]->getId()){
    i++;
  }
  if (i != colBarco.tope){
    return true;
  }
    return false;
};

bool buscarBarco(string idBarco){

  int i = 0;
  while(i < colPuertos.tope && idBarco != colPuertos.p[i]->getId()){
    i++;
  }
  if (i != colPuertos.tope){
    return true;
  }else{
    return false;
  }
};

void agregarPuerto(string id, string nombre, DtFecha fechaCreacion){
    /*map<string, Puerto*>::iterator it;
    try {
      it = puertosMap.find(id);
      if (it == puertosMap.end()){
        Puerto *puerto = new Puerto(id, nombre, fechaCreacion);
        puertosMap.insert({id, puerto});
      }
      else
        throw invalid_argument("Por que si\n"); 
    } catch (const invalid_argument& e) {
      cout << e.what();
    } */
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
        throw invalid_argument("Por que si\n");
    }catch (const invalid_argument& e) {
      cout << e.what();
    }
};
void agregarPuerto(){
  string id, nombre;
  cout << "____AGREGAR PUERTO_____" << endl;
  cout << "Ingresa los datos del nuevo puerto" << endl;
  cout << "id:" << endl;
  cin >> id;
  cout << "nombre:" << endl;
  cin >> nombre;
  agregarPuerto(id, nombre, DtFecha(10, 11, 95));
};


void agregarBarco(DtBarco *barco){
  /*map<string, DtBarco*>::iterator it;
    try {
      it = barcosMap.find(barco.getId());
      if (it == barcosMap.end()){
        DtBarco *dtBarco = &barco;
        barcosMap.insert({dtBarco->getId(), dtBarco});
      }
      else
        throw invalid_argument("Por que si\n"); 
    } catch (const invalid_argument& e) {
      cout << e.what();
    }*/
    try {
      if ((!buscarBarco(barco->getId())) && (colBarco.tope <= MAXBARCO)){
        DtBarcoPesquero *dtBarcoPe = dynamic_cast<DtBarcoPesquero*>(barco);
        if(dtBarcoPe != NULL){
          BarcoPesquero *barcoPe = new BarcoPesquero(dtBarcoPe->getId(), dtBarcoPe->getNombre(), dtBarcoPe->getCapacidad() , dtBarcoPe->getCarga());
          colBarco.b[colBarco.tope] = barcoPe;
          colBarco.tope++;
          return;
        }
        DtBarcoPasajeros *dtBarcoPa = dynamic_cast<DtBarcoPasajeros*>(barco);
        if(dtBarcoPa != NULL){
          BarcoPasajeros *barcoPa = new BarcoPasajeros(dtBarcoPa->getId(), dtBarcoPa->getNombre(), dtBarcoPa->getCantPasajeros(), TipoTamanio(dtBarcoPa->getTamanio()));
          colBarco.b[colBarco.tope] = barcoPa;
          colBarco.tope++;
          return;   
        }
      }else{
        throw invalid_argument("Ya existe el Barco\n");
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
    cout << "Tipo tamanioo: \n\t1- bote / \n\t2- crucero / \n\t3- galeon / \n\t4- trasatlantico :" << endl;
    cin >> tt;
    switch(tt) {
      case 1: tamanio = BOTE;
        break;
      case 2: tamanio = CRUCERO;
        break;
      case 3: tamanio = GALEON;
        break;
      case 4: tamanio = TRANSATLANTICO;
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

  return 0;
  // if(cantPuertos <= puertosMap.size()){
  //   //Continuamos
  //   DtPuerto** listado = new DtPuerto*[cantPuertos];
  //   /*for(int i=0; i<cantPuertos; i++){
  //     DtPuerto* dtp =puertosMap[i];
  //     listado[i] = dtp;
      
  //     }
  //     */
  //   int i = 0;
  //   for (map<string, Puerto*>::iterator it=puertosMap.begin(); it!=puertosMap.end(); ++it){
  //     //std::cout << it->first << " => " << it->second->getNombre() << '\n';
  //     i++;
  //     DtPuerto* dtp = new DtPuerto(it->second->getId(), it->second->getNombre(), it->second->getFechaCreacion());
  //     listado[i] = dtp;
  //     return listado;
  //   }
  // }else{
  //   //Mensaje de error
  // }


  /*
  cantPuertos = colPuertos.tope;
  >>>>>>> 0f1565e3647f4d040d80e832677daa9abe695dfd
  DtPuerto** listado = new DtPuerto*[cantPuertos];
  for (int i=0; i<cantPuertos; i++){
    DtPuerto* dtp = new DtPuerto(colPuertos.p[i]->getId(), colPuertos.p[i]->getNombre(), colPuertos.p[i]->getFechaCreacion());
    listado[i] = dtp;
  }
  return listado;
  */
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
  //RS: vuelve al menu, no terine de ver si es que le falta un "pause" o si 
  //    No esta recorriendo correctamente.
   flag = cin.get();
};

void agregarArribo(string idPuerto, string idBarco, DtFecha fecha, float cargaDespacho){
   try {
      if (!buscarBarco(idPuerto)){
       throw invalid_argument("No exite el puerto ingresado\n");
      }
    }catch (const invalid_argument& e) {
      cout << e.what();
    }  

    try {
      if (!buscarPuerto(idBarco)){
       throw invalid_argument("No exite el barco ingresado\n");
      }
    }catch (const invalid_argument& e) {
      cout << e.what();
    }  

}


void agregarArribo(){
  string idpuerto, idbarco;
  int dia, mes, anio;
  DtFecha fecha;
  float valorCarga; 
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
  cin >> valorCarga;

//  agregarArribo(idpuerto, idbarco, fecha, cargaDespacho);
};

void obtenerInfoArribosEnPuerto(){};
void eliminarArribos(){};

DtBarco** listarBarcos(int/*&*/ cantBarcos){
  system("cls");
// FALTA TERMINAR DE IMPLEMENTAR LA SOBRECAGRA EN LAS CLASES
  int topeBarcos = cantBarcos-1;
  DtBarco** coleccionDtBarcos;
  for(int i=0; i<topeBarcos; i++){
    try {
        BarcoPesquero *barcoPe = dynamic_cast<BarcoPesquero*>(colBarco.b[i]);
        if(barcoPe != NULL){
          DtBarcoPesquero* DtBarcoPe = new DtBarcoPesquero( barcoPe->getNombre(), barcoPe->getId(), barcoPe->getCapacidad(), barcoPe->getCarga());
          coleccionDtBarcos[i] = DtBarcoPe;
          cout << "Barco numero  " << i << " :    " << dtBarcoPe << endl;
        }
        BarcoPasajeros *barcoPa = dynamic_cast<BarcoPasajeros*>(colBarco.b[i]);
        if(barcoPa != NULL){
          DtBarcoPasajeros* DtBarcoPa = new DtBarcoPasajeros( barcoPa->getNombre(), barcoPa->getId(), barcoPa->getCantPasajeros(), barcoPa->getTamanio());
          coleccionDtBarcos[i] = DtBarcoPa;
          cout << "Barco numero  " << i << " :    " << dtBarcoPa << endl
        }
    }catch (const invalid_argument& e) {
      cout << e.what();
    }  
  }
  sleep(3);  
};
void listarBarcosMenu(){
  system("cls");

  cout << "El tope es:"  << colBarco.tope << endl;
  cout <<"______LISTAR__BARCOS_______"<< endl;
  cout <<"___________________________"<< endl;
  cout <<"___________________________\n\n\n" << endl;
  int cant, cantidadBarcos;
	cout << "INGRESE LA CANTIDAD DE BARCOS: ";
	cin >> cantidadBarcos;
  if (cantidadBarcos >= colPuertos.tope){
    cant = colPuertos.tope;
  }else{
    cant = cantidadBarcos;
  }
  listarBarcos(cant);
};



void menu(){
  system("cls");
  cout << "_________________________" << endl;
  cout << "_______Bienvenido. Elija la opcion.__________" << endl;
  cout << "1. Agregar puerto" << endl;
  cout << "2. Agregar barco" << endl;
  cout << "3. Listar Puertos" << endl;
  cout << "4. Agregar Arribo" << endl;
  cout << "5. Obtener informacion de los arribos de un puerto" << endl;
  cout << "6. Eliminar arribos" << endl;
  cout << "7. Listar barcos" << endl;
  cout << "0. Salir" << endl;
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
      case 7: listarBarcosMenu();  
              break;  
      case 8: system("exit");
              break;
    }
    menu();
    cin >> opcion;
  }
  return 0;
}






