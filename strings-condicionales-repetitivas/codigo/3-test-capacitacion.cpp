#include <iostream>
using namespace std;

int main() {
    int total, correctas;
    cout << "Total de preguntas: ";
    cin >> total;
    cout << "Respuestas correctas: ";
    cin >> correctas;

    if (total > 0 && correctas >= 0 && correctas <= total) {
        float porcentaje = correctas * 100.0 / total;
        cout << "Porcentaje: " << porcentaje << "%" << endl;
        if (porcentaje >= 90) {
            cout << "Nivel maximo" << endl;
        } else if (porcentaje >= 75) {
            cout << "Nivel medio" << endl;
        } else if (porcentaje >= 50) {
            cout << "Nivel regular" << endl;
        } else {
            cout << "Fuera de nivel" << endl;
        }
    } else {
        cout << "Error: datos invalidos" << endl;
    }
    return 0;
}
