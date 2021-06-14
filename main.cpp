
#include "clases/Fabrica.h"
#include "interfaces/IControladorAltaAsignatura.h"
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <string>
#include <iostream>
#include <unistd.h>
#include <time.h>
using namespace std;

Fabrica *f;
IControladorAltaAsignatura *iConAltaAsignatura;

void altaAsignatura();

int soloUnaVez=0;

void menu(){
    cout<<"___________________________________"<<endl;
    cout<<endl<<"~~~~~~~~~~~~ Institucion ~~~~~~~~~~~~"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<"Alta asignatura"<<endl;
    cout<<"Salir"<<endl<<endl;
    cout<<"Ingrese opción: ";
}

void menu2(){
    cout<<"___________________________________"<<endl;
    cout<<endl<<"~~~~~~~~~~~~ Institucion ~~~~~~~~~~~~"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<"Alta asignatura"<<endl;
    cout<<"Salir"<<endl<<endl;
    cout<<"Ingrese opción: ";
}


void ingrese_enter(){    
    cout<<endl<<endl<<"Ingrese <enter>"<<endl;
    fflush(stdout);
    getchar();
    while(getchar()!= '\n');
}

void limpiarPantalla(){
    sleep(1);
    system("clear");
    fflush(stdout);
}

// 1- ALTA ASIGNATURA

void altaAsignatura(){


}

/*
// FUNCIÓN PARA CARGAR DATOS VALIDO UNA VEZ;
void cargarDatos(){
    iConAltaMozo->cargarMozos();                    //ingresa mozos al sistema;    
    iConAltaMesa->cargarMesas();                    //ingresa mesas al sistema y las asigna a los mozos.
    iConAltaProd->cargarDatos();                    //ingresa Productos al sistema
}
*/


// MAIN

int main(){

    f = Fabrica::getInstancia();
    iConAltaAsignatura = f->getIControladorAltaAsignatura();
    
    int num;
    system("clear");
    menu2();
    cin>>num;
    cout<<endl;

    while (soloUnaVez!=1 && num != 9){
    
        switch (num)
        {
            case 1:
                limpiarPantalla();
                altaAsignatura();
                limpiarPantalla();             
                break;
            /*Ejemplo carga inicial
            case 8:
                limpiarPantalla();
                cout<<"Esta función cargará: mesas, mozos y productos(comunes y menúes) al sistema"<<endl;
                cargarDatos();
                ingrese_enter();
                soloUnaVez=1;
                limpiarPantalla();
                break;            
                */
            case 9:
                //salir
                return 0;                
                break;
            default:
                cout<<"Opción incorrecta. Intente nuevamente."<<endl;
                ingrese_enter();
                limpiarPantalla();
                break;
        }        
        if(num!=8){
            menu2();
            cin>>num;
        }       
    }   
    if (num!=9) {
        //system("clear");
        menu();
        int num2;
        cin>>num2;
        cout<<endl;

        while (num2 != 8){        
            switch (num2)
            {
                case 1:
                    limpiarPantalla();
                    altaAsignatura();
                    limpiarPantalla();             
                    break;
               
                case 8:
                    //salir
                    return 0;
                    break;
                default:
                    cout<<"Opción incorrecta. Intente nuevamente."<<endl;
                    ingrese_enter();
                    limpiarPantalla();
                    break;
            }
            menu();
            cin>>num2;
        } 
    }
    return 0;

}