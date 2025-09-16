// Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    cout << "Ingrese los elementos de la matriz 3x3: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nLos elementos de la diagonal principal son: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Elemento en la posición [" << i + 1 << "][" << i + 1 << "]: " << matriz[i][i] << endl;
    }

    return 0;
}

