#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int largo = frase.length();
    int centro = (largo - 1) / 2;

    cout << "Longitud: " << largo << endl;
    cout << "Primer caracter: " << frase.at(0) << endl;
    cout << "Ultimo caracter: " << frase.at(largo - 1) << endl;
    cout << "Caracter central: " << frase.at(centro)
         << " (posicion " << centro << ")" << endl;
    return 0;
}
