#include <iostream>
using namespace std;

int main() {
    int m[4][4];
    cout << "Enter the matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> m[i][j];
            if (j != i) {
                m[i][j] = 0;
            }
        }
    }

    for (auto & i : m) {
        for (int & j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}
