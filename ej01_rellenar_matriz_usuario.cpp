// Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, posteriormente mostrar la matriz en pantalla.

#include <iostream>
using namespace std;

int main() {
    int f, c;

    cout << "Introduce el número de filas: ";
    cin >> f;
    cout << "Introduce el número de columnas: ";
    cin >> c;

    int mat[f][c];

    cout << "Introduce los elementos de la matriz:" << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nLa matriz es:" << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

