#include <iostream>
#include <string>
#define MAX_MISIONES_ASIGNADAS 30
#define MAX_VENGADORES 100
#define MAX_MISIONES 100

using namespace std;


int main(){
  colVengadores.tope=0;
  colMisiones.tope=0;
  menu();
  int opcion;
  cin >> opcion;
  while(opcion!=7){
    switch(opcion){
      case 1: menuRegistarVengador();
              break;
      case 2: menuCrearMision();
              break;
      case 3: menuAsignarMisionAVengador();
              break;
      case 4: listarVengadores();
              break;
      case 5: listarMisiones();
              break;
      case 6: menuListarMisionesDeVengador();
              break;
      case 7: system("exit");
              break;
    }
    menu();
    cin >> opcion;
  }
}