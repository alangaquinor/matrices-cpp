// Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int A[3][3], B[3][3], Suma[3][3];

    cout << "Matriz A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = rand() % 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[i][j] = rand() % 10;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz A + B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Suma[i][j] = A[i][j] + B[i][j];
            cout << Suma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

