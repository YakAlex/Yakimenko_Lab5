#include <iostream>
#include <Windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 25);
    int arr[3][3];
    cout << "Перша матриця: " <<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = dist(gen);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Підматриця виду 1х1: " <<endl;
    int maxnumber = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > maxnumber) {
                maxnumber = arr[i][j];
            }
        }
    }
    cout << maxnumber << endl;
    cout << endl;
    int maxmatrix1 = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            maxmatrix1 += arr[i][j];
        }
    }
    int maxmatrix2 = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 3; j++) {
            maxmatrix2 += arr[i][j];
        }
    }
    int maxmatrix3 = 0;
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            maxmatrix3 += arr[i][j];
        }
    }
    int maxmatrix4 = 0;
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            maxmatrix4 += arr[i][j];
        }
    }
    cout << "Підматриця виду 2х2: " <<endl;
    if (maxmatrix1 > maxmatrix2 && maxmatrix1 > maxmatrix3 && maxmatrix1 > maxmatrix4) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (maxmatrix2 > maxmatrix1 && maxmatrix2 > maxmatrix3 && maxmatrix2 > maxmatrix4) {
        for (int i = 0; i < 2; i++) {
            for (int j = 1; j < 3; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (maxmatrix3 > maxmatrix2 && maxmatrix3 > maxmatrix1 && maxmatrix3 > maxmatrix4) {
        for (int i = 1; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (maxmatrix4 > maxmatrix1 && maxmatrix4 > maxmatrix3 && maxmatrix4 > maxmatrix2) {
        for (int i = 1; i < 3; i++) {
            for (int j = 1; j < 3; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
