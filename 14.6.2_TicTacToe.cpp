#include <iostream>
#include <string>
using namespace std;

bool chenkig_rows(char gameField[3][3], char mark) {
    bool win;
    for (int i = 0 ; i < 3; i++) {
        win = true;
        for (int j = 0; j < 3; j++) {
            if (gameField[i][j] != mark) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }
    return false;
}

bool chenkig_cols(char gameField[3][3], char mark) {
    bool win;
    for (int i = 0 ; i < 3; i++) {
        win = true;
        for (int j = 0; j < 3; j++) {
            if (gameField[j][i] != mark) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }
    return false;
}


bool is_game_won(char gameField[3][3], char mark) {
    return (chenkig_cols(gameField, mark) || chenkig_rows(gameField, mark));
}

bool is_game_ended(char gameField[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameField[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool is_input_correct(char gameField[3][3], int x, int y) {
    if (x > 2 || x < 0 || y > 2 || y < 0 || (gameField[x][y]) != ' ') {
        return false;
    } else {
        return true;
    }
}

void print_game_field(char gameField[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << gameField[i][j];
        }
        cout << endl;
    }
}

int main() {
    char gameField[3][3] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '} };
    int turn = 0;
    int x;
    int y;
    char mark;

    while (!is_game_ended(gameField)) {
        if (turn % 2 == 0) {
            mark = 'X';
        } else {
            mark = 'O';
        }
        cout << "Enter a koordinat from 1 to 3 for your " << mark << ":";
        cin >> x >> y;
        x--;
        y--;
        if (is_input_correct(gameField, x, y)) {
            gameField[x][y] = mark;
            print_game_field(gameField);
            turn++;
        } else {
            cout << "Invalid data! Try again.\n";
        }
        if (is_game_won(gameField,'X')) {
            cout << "Player 1 win!";
            return 0;
        } else if(is_game_won(gameField, 'O')){
            cout << "Player 2 win!";
            return 0;
        }
    }

    cout << "Draw!";
}