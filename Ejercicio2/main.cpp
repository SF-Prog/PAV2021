/*          INTEGRANTES
52017956 Agustin Pressel aguspressel@gmail.com
50640349 Robert Sinibaldi ro.sinibaldi@gmail.com 
47232856 Santiago Fitipaldo fitipaldosantiago@gmail.com 
51384110 Fernando Rolfo fernandorolfo@gmail.com 
51411012 Federico García fgp952@gmail.com 
*/

#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;

int main(){

    ClaseA msg_a;
    msg_a = ClaseA();

    ClaseB msg_b;
    msg_b = ClaseB();

    ClaseC msg_c;
    msg_c = ClaseC();

    cout<<"Valor de la clase A: " << msg_a.getA()<<endl;
    cout<<"Valor de la clase B: " <<msg_b.getB()<<endl;
    cout<<"Valor de la clase C: " <<msg_c.getC()<<endl;

    return 0;
}
