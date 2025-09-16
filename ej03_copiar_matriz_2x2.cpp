// Hacer una matriz de tipo entera de 2x2, llenarla de números y luego copiar todo su contenido hacia otra matriz.

#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2], matriz2[2][2];

    cout << "Ingrese los elementos de la primera matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    cout << "\nContenido de la primera matriz:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nContenido de la segunda matriz (copia):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

