#include <iostream>
using namespace std;

int main() {
    bool terrain[5][5][10];
    int height;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> height;
            for (int k = 0; k <= height; k++) {
                terrain[i][j][k] = true;
            }
            for (int k = height + 1; k < 10; k++) {
                terrain[i][j][k] = false;
            }
        }
    }

    int cutLevel;
    cin >> cutLevel;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << (int)terrain[i][j][cutLevel] << " ";
        }
        cout << endl;
    }
}