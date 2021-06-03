#ifndef PERFIL
#define PERFIL

#include <string>


using namespace std;

class Perfil{
  protected:
    string nombre;
    string imagenUrl;
    string email;
    string password;
  public:
    Perfil();
    Perfil(string, string, string, string);
    string getNombre();
    string getImagenUrl();
    string getEmail();
    string getPassword();

    void setNombre(string);
    void setImagenUrl(string);
    void setEmail(string);
    void setPassword(string);
    // DESTRUCTOR
   virtual ~Perfil();
};

#endif