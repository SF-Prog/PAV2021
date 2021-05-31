#ifndef ASISTEENVIVO
#define ASISTEENVIVO

#include <string>


using namespace std;

class AsisteEnVivo{
  private:
   TimeStamp inicio;
   TimeStamp fin;
   
  public:
    Rol();
    Rol(TipoRol);
    
    TimeStamp getInicio();
    TimeStamp getFin();

    void getInicio(TimeStamp);
    void getFin(TimeStamp);

    
    // DESTRUCTOR
    ~Rol();
};

#endif