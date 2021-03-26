#include "Puerto.h"
#include "DtBarco.h"
#include "DtPuerto.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, Puerto*> puertosMap;
map<string, DtBarco*> barcosMap;

struct puertos {
  Puerto* p[30];
  int tope;
} colPuertos;

void agregarPuerto(string id, string nombre, DtFecha fechaCreacion){
    map<string, Puerto*>::iterator it;
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

void agregarBarco(DtBarco& barco){
  map<string, DtBarco*>::iterator it;
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
    }
};
void agregarBarco(){
  string id, nombre;
  cout << "____AGREGAR BARCO_____" << endl;
  cout << "Ingresa los datos del nuevo barco" << endl;
  cout << "id:" << endl;
  cin >> id;
  cout << "nombre:" << endl;
  cin >> nombre;
  DtBarco *dtBarco = new DtBarco(id, nombre);
  agregarBarco(*dtBarco);
};

DtPuerto** listarPuertos(int& cantPuertos){
  cantPuertos = colPuertos.tope;
  DtPuerto** listado = new DtPuerto*[cantPuertos];
  for(int i=0; i<colPuertos.tope; i++){
    DtPuerto* dtp = new DtPuerto(colPuertos.p[i]->getId(), colPuertos.p[i]->getNombre(), colPuertos.p[i]->getFechaCreacion());
    listado[i] = dtp;
  }
  return listado;
};
void listarPuertos(){
  int cantPuertos;
  cout << "____LISTAR PUERTOS_____" << endl;
  cout << "Ingresa cuantos puertos deseas listar" << endl;
  cout << "Cantidad de puertos a listar:" << endl;
  cin >> cantPuertos;
  DtPuerto** dtPuerto = listarPuertos(cantPuertos);
  for (int i=0; i < colPuertos.tope; i++){
    cout << *dtPuerto[i];
  }
};

void agregarArribo(){};
void obtenerInfoArribosEnPuerto(){};
void eliminarArribos(){};
void listarBarcos(){};



void menu(){
  system("clear");
  cout << "_________________________" << endl;
  cout << "_______Bienvenido. Elija la opción.__________" << endl;
  cout << "1. Agregar puerto" << endl;
  cout << "2. Agregar barco" << endl;
  cout << "3. Listar Puertos" << endl;
  cout << "4. Agregar Arribo" << endl;
  cout << "5. Obtener información de los arribos de un puerto" << endl;
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






