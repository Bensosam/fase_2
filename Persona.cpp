#include <iostream>
using namespace std;

class Persona {
protected:
    string nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;

public:
    Persona() {}
    Persona(string nom, string ape, string dir, int tel, string fn)
        : nombres(nom), apellidos(ape), direccion(dir), telefono(tel), fecha_nacimiento(fn) {}

    void crear() {
        char respuesta;
        cout << "Se ha ingresado exitosamente el metodo";
        cin >> respuesta;
    }

    void leer() {}

    void actualizar() {}

    void borrar() {}
};

int main() {
    Persona p;
    p.crear(); // Example of using the crear method
    return 0;
}