#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Ingrese un numero entre 10000 y 100000: ";
        cin >> n;
        if (n < 10000 || n > 100000) {
            cout << "Fuera de rango. Intente de nuevo." << endl;
        }
    } while (n < 10000 || n > 100000);

    // Ej. 2: sin %, el resto de dividir por 2 es n - (n / 2) * 2
    int resto = n - (n / 2) * 2;
    if (resto == 0) {
        cout << "Has encontrado un numero magico par!" << endl;
    } else {
        cout << "Has encontrado un numero magico impar!" << endl;
    }
    return 0;
}
