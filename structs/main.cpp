#include "DtFecha.cpp"
#include <iostream>
#include <string>
using namespace std;

/*
void listarVengadores(){
  system("clear");
  cout<< "__________________________" << endl;
  cout<< "________VENGADORES________" << endl;
  cout << endl;
  system("sleep 5");
}
void listarMisiones(){
  system("clear");
  cout<< "__________________________" << endl;
  cout<< "__________MISIONES________" << endl;
  cout << endl;
  system("sleep 5");
}
void listarMisionesDeVengador(string vengador){
  system("clear");
  cout<< "__________________________" << endl;
  cout<< "__MISIONES DE " << vengador << endl;

  cout << endl;
  system("sleep 5");
}

void menuRegistarVengador(){
  system("clear");
  cout << "_______________________" << endl;
  cout << "___REGISTRAR VENGADOR__" << endl;
  string nombre;
  int poder,dia,mes,anio,puntos;
  cout << "NOMBRE: ";
  cin >> nombre;
  cout << "\nPUNTOS: ";
  cin >> puntos;
  cout << "\nFECHA NACIMIENTO";
  cout << "\nDIA: ";
  cin >> dia;
  cout << "\nMES: ";
  cin >> mes;
  cout << "\nANIO: ";
  cin >> anio;
 
}
void menuCrearMision(){
  system("clear");
  cout << "_______________________" << endl;
  cout << "___CREAR MISIONES______" << endl;
  string nombre;
  int dia,mes,anio;
  cout << "NOMBRE: ";
  cin >> nombre;
  cout << "\nFECHA INICIO" <<endl;
  cout << "DIA: ";
  cin >> dia;
  cout << "\nMES: ";
  cin >> mes;
  cout << "\nANIO: ";
  cin >> anio;
 
  cout << "\nFECHA FIN" << endl;
  cout << "DIA: ";
  cin >> dia;
  cout << "MES: ";
  cin >> mes;
  cout << "ANIO: ";
  cin >> anio;
 
}
void menuAsignarMisionAVengador(){
  system("clear");
  cout << "_______________________" << endl;
  cout << "____ASIGNAR MISION_____" << endl;
  string vengador,mision;
  cout << "NOMBRE VENGADOR: ";
  cin >> vengador;
  cout << "\nNOMBRE MISION: ";
  cin >> mision;
  
}

void menuListarMisionesDeVengador(){
  system("clear");
  cout << "________________________________" << endl;
  cout << "____MISIONES DE UN VENGADOR_____" << endl;
  string vengador;
  cout << "NOMBRE VENGADOR: ";
  cin >> vengador;
 
}
*/

void agregarPuerto(){
  
};
void agregarPuerto(string id, string nombre, DtFecha fechaCreacion){

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






