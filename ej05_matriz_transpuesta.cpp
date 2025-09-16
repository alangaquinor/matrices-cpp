// Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna "i" era la fila "i" de la matriz original.

#include <iostream>

using namespace std;

int main() {
    int mat[3][3], tra[3][3];

    cout << "Ingrese los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tra[j][i] = mat[i][j];
        }
    }

    cout << "\nMatriz original:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    cout << "\nMatriz traspuesta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tra[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

