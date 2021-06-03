#ifndef DTPERFIL
#define DTPERFIL

#include <string>
using namespace std;

class DtPerfil{
    private:
        string nombre;
        string imagenUrl;
        string email;
        string password;
    public:
        // Constructores
        DtPerfil();
        DtPerfil(string, string, string, string);

        // Getters and Setters
        string getNombre();
        string getImagenUrl();
        string getEmail();
        string getPassword();
        void setNombre(string);
        void setImagenUrl(string);
        void setEmail(string);
        void setPassword(string);

        // Destructor
        ~DtPerfil();
};
#endif