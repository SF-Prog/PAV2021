#include "DtFecha.cpp"
#include "Puerto.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, Puerto*> puertosMap;

void agregarPuerto(){
  string id, nombre;
  cout << "____AGREGAR PUERTO_____" << endl;
  cout << "Ingresa los datos del nuevo puerto" << endl;
  cout << "id:" << endl;
  cin >> id;
  cout << "nombre:" << endl;
  cin >> nombre;
  agregarPuerto(id, nombre, DtFecha(10,11,95));
};
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

void agregarBarco(){};
void listarPuertos(){};
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






