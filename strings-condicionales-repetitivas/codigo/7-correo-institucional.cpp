#include <iostream>
#include <string>
using namespace std;

int main() {
    string apellido, nombre;
    cout << "Ingrese Apellido Nombre (sin tildes): ";
    cin >> apellido >> nombre;   // cin corta en el espacio

    string correo = nombre.substr(0, 1) + apellido;

    // Pasar todo a minuscula recorriendo caracter a caracter
    int largo = correo.length();
    for (int i = 0; i < largo; i++) {
        if (correo.at(i) >= 'A' && correo.at(i) <= 'Z') {
            correo.at(i) = correo.at(i) + ('a' - 'A');
        }
    }

    correo = correo + "@frsf.utn.edu.ar";
    cout << "Correo: " << correo << endl;
    return 0;
}
