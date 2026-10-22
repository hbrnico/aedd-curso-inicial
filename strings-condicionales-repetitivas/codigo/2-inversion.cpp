#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra de 5 caracteres: ";
    cin >> palabra;

    // substr devuelve string: el + concatena
    string invertida = palabra.substr(4, 1) + palabra.substr(3, 1)
                     + palabra.substr(2, 1) + palabra.substr(1, 1)
                     + palabra.substr(0, 1);

    cout << "Invertida: " << invertida << endl;
    return 0;
}
