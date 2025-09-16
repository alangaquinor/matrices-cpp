// Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    int matriz1[10][10], matriz2[10][10];

    srand(time(0));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz1[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    cout << "\nMatriz 1:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz 2 (copia):" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

