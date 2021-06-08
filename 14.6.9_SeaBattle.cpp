#include <iostream>
using namespace std;



bool ships_crushes(char gameField[][10], int x1, int x2, int y1, int  y2, int end, string direction) {
    if (direction == "right") {
        for (int i = 0; i < end; i++) {
            if (gameField[i][end] != ' ') {
                return true;
            }
        }
    } else if (direction == "left") {
        for (int i = 0; i < end; i++) {
            if (gameField[end][i] != ' ') {
                return true;
            }
        }
    }
    return false;
}

bool ship_intitalization(char gameField[][10], int x1, int x2, int y1, int  y2) {
    cout << "Enter the starting coordinates" << endl;
    cin >> x1 >> y1;
    cout << "Enter the ending coordinates" << endl;
    cin >> x2 >> y2;
    while (x1 < 0 || x1 > 9 || x2 < 0 || x2 > 9 || y1 < 0 || y1 > 9 || y2 > 9 || y2 < 0
           || x1 != x2 && y1 != y2 || ships_crushes(gameField, x1, x2, y1, y2)) {
        cout << "Invalid data!\nTry again:";
        cout << "Enter the starting coordinates" << endl;
        cin >> x1 >> y1;
        cout << "Enter the ending coordinates" << endl;
        cin >> x2 >> y2;
    }

    int end;
    if (x1 == x2) {
        if (y2 >= y1) {
            end = y2;
            /**/
        } else {
            end = y1;
        }
        for (int i = 0; i < end; ++i) {
            gameField[i][end] = 'o';
        }
    } else {
        if (x2 >= x1) {
            end = x2;
        } else {
            end = x1;
        }
        for (int i = 0; i < end; ++i) {
            gameField[end][i] = 'o';
        }
    }

}

void player_one_(char playerOneFiled[][10]) {
    for (int i = 0; i < 4; i++) {

    }
}

int main() {
    char playerOneField[10][10];
    char playerTwoField[10][10];

}