#include <iostream>
using namespace std;
int main() {
    int snake[5][5];
    int currPos = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            snake[i][currPos % 10 - i % 2 * (j * 2 + 1)] = currPos;
            currPos++;
        }
    }

    for (auto & i : snake) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}