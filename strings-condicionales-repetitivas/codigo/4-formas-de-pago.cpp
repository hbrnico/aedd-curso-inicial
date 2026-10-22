#include <iostream>
using namespace std;

int main() {
    float monto;
    char forma;
    cout << "Monto de la compra: ";
    cin >> monto;
    cout << "Forma de pago (D/B/C): ";
    cin >> forma;

    if (monto > 0) {
        int cuotas;
        switch (forma) {
            case 'd':
            case 'D':
                if (monto > 3000) {
                    monto = monto * 0.85;
                }
                cout << "Total a pagar: $" << monto << endl;
                break;
            case 'b':
            case 'B':
                monto = monto * 0.70;
                cout << "Total a pagar: $" << monto << endl;
                break;
            case 'c':
            case 'C':
                cout << "Cuotas (1 o 3): ";
                cin >> cuotas;
                if (cuotas == 1) {
                    cout << "Total a pagar: $" << monto << endl;
                } else if (cuotas == 3) {
                    monto = monto * 1.10;
                    cout << "Total a pagar: $" << monto << endl;
                    cout << "3 cuotas de $" << monto / 3 << endl;
                } else {
                    cout << "Error: cantidad de cuotas invalida" << endl;
                }
                break;
            default:
                cout << "Error: forma de pago invalida" << endl;
        }
    } else {
        cout << "Error: el monto debe ser positivo" << endl;
    }
    return 0;
}
