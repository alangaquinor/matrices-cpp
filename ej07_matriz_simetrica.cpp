// Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta

#include <iostream>
using namespace std;

int main() {
    int f, c;

    cout << "Ingrese el número de filas: ";
    cin >> f;
    cout << "Ingrese el número de columnas: ";
    cin >> c;

    if (f != c) {
        cout << "La matriz no es cuadrada, por lo tanto no puede ser simétrica." << endl;
        return 0;
    }

    int mat[100][100];
    cout << "Ingrese los elementos de la matriz (" << f << "x" << c << "):" << endl;

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    bool esSimetrica = true;
    for (int i = 0; i < f && esSimetrica; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] != mat[j][i]) {
                esSimetrica = false;
                break;
            }
        }
    }

    if (esSimetrica) {
        cout << "La matriz es simétrica." << endl;
    } else {
        cout << "La matriz no es simétrica." << endl;
    }

    return 0;
}

