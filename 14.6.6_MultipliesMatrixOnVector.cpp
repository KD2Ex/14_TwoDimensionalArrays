#include <iostream>
#include <vector>
using namespace std;

int main() {
    float V[4];
    float M[4][4];
    float R[4];

    for (auto & i : V) {
        cin >> i;
    }

    for (auto & i : M) {
        for (float & j : i) {
            cin >> j;
        }
    }


    for (int i = 0; i < 4; i++) {
        float sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += M[i][j] * V[j];
        }
        R[i] = sum;
    }

    for (float & i : R) {
        cout << i << " ";
    }
}