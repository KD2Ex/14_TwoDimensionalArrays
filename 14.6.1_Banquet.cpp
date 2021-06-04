#include <iostream>
using namespace std;
int main() {
    int cutlery[2][6] = { {4, 3, 3, 3, 3, 3}, {4, 3, 3, 3, 3, 3} };
    int dishes[2][6] = { {3,2,2,2,2,2}, {3,2,2,2,2,2} };
    int chairs[2][6] = { {1,1,1,1,1,1}, {1,1,1,1,1,1}};

    chairs[0][4]++;
    cutlery[1][2]--;
    cutlery[0][0]--;
    cutlery[1][2]++;
    dishes[0][0]--;

    cout << "Cutlery:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << cutlery[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Dishes:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << dishes[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Chairs:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << chairs[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
