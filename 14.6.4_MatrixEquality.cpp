#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int b[4][4];

    cout << "Enter the first matrix:\n";
    for (auto & i : a) {
        for (int & j : i) {
            cin >> j;
        }
    }
    cout << "Enter the second matrix:\n";
    for (auto & i : b) {
        for (int & j : i) {
            cin >> j;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] != b[i][j]) {
                cout << "Matrices are not equal";
                return 0;
            }
        }
    }
    cout << "Matrices are equal";
}

