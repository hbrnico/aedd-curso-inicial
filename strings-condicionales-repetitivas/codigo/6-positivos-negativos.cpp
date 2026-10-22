#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cantPos = 0, sumaPos = 0;
    int cantNeg = 0, sumaNeg = 0;
    int num;

    cin >> num;                 // lectura previa
    while (num != 0) {          // 0 es el centinela
        if (num > 0) {
            cantPos++;
            sumaPos += num;
        } else {
            cantNeg++;
            sumaNeg += num;
        }
        cin >> num;             // lectura al final del ciclo
    }

    cout << fixed << setprecision(2);
    cout << "Cantidad de positivos: " << cantPos << endl;
    cout << "Suma de positivos: " << sumaPos << endl;
    if (cantPos > 0) {
        cout << "Promedio de positivos: "
             << (float) sumaPos / cantPos << endl;
    }
    cout << "Cantidad de negativos: " << cantNeg << endl;
    cout << "Suma de negativos: " << sumaNeg << endl;
    if (cantNeg > 0) {
        cout << "Promedio de negativos: "
             << (float) sumaNeg / cantNeg << endl;
    }
    return 0;
}
