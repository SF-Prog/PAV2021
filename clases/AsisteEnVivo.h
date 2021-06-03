#ifndef ASISTEENVIVO
#define ASISTEENVIVO

#include <string>
#include <ctime>


using namespace std;

class AsisteEnVivo{
  private:
   time_t inicio;
   time_t fin;
   
  public:
    AsisteEnVivo();
    AsisteEnVivo(time_t, time_t);
    
    time_t getInicio();
    time_t getFin();

    void setInicio(time_t);
    void setFin(time_t);

    
    // DESTRUCTOR
    ~AsisteEnVivo();
};
#endif
