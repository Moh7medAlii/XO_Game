#include <iostream>

using namespace std;

int main() {
    char P1 = '1', P2 = '2', P3 = '3', P4 = '4', P5 = '5', P6 = '6', P7 = '7',
        P8 = '8', P9 = '9';

    cout << "\n" << endl;
    cout << P1 << " | " << P2 << " | " << P3 << endl;
    cout << "----------" << endl;
    cout << P4 << " | " << P5 << " | " << P6 << endl;
    cout << "----------" << endl;
    cout << P7 << " | " << P8 << " | " << P9 << endl;
    cout << "\n" << endl;


    for (int i = 1; i <= 9; ++i) {
        // make a move
        if (i % 2 == 0) {
            char move;
            cout << "O move, please choose an available position: ";
            cin >> move;

            if (move == '1') {
                if (P1 == 'X' || P1 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P1 = 'O';
            }
            else if (move == '2') {
                if (P2 == 'X' || P2 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P2 = 'O';
            }
            else if (move == '3') {
                if (P3 == 'X' || P3 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P3 = 'O';
            }
            else if (move == '4') {
                if (P4 == 'X' || P4 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P4 = 'O';
            }
            else if (move == '5') {
                if (P5 == 'X' || P5 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P5 = 'O';
            }
            else if (move == '6') {
                if (P6 == 'X' || P6 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P6 = 'O';
            }
            else if (move == '7') {
                if (P7 == 'X' || P7 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P7 = 'O';
            }
            else if (move == '8') {
                if (P8 == 'X' || P8 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P8 = 'O';
            }
            else if (move == '9') {
                if (P9 == 'X' || P9 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P9 = 'O';
            }


        }
        if (i % 2 != 0) {
            char move;
            cout << "X move, please choose an available position: ";
            cin >> move;

            if (move == '1') {
                if (P1 == 'X' || P1 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P1 = 'X';
            }
            else if (move == '2') {
                if (P2 == 'X' || P2 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P2 = 'X';
            }
            else if (move == '3') {
                if (P3 == 'X' || P3 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P3 = 'X';
            }
            else if (move == '4') {
                if (P4 == 'X' || P4 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P4 = 'X';
            }
            else if (move == '5') {
                if (P5 == 'X' || P5 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P5 = 'X';
            }
            else if (move == '6') {
                if (P6 == 'X' || P6 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P6 = 'X';
            }
            else if (move == '7') {
                if (P7 == 'X' || P7 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P7 = 'X';
            }
            else if (move == '8') {
                if (P8 == 'X' || P8 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P8 = 'X';
            }
            else if (move == '9') {
                if (P9 == 'X' || P9 == 'O') {
                    cout << "invalid position.";
                    return 0;
                }
                P9 = 'X';
            }


        }

        // redraw game
        cout << "\n" << endl;
        cout << P1 << " | " << P2 << " | " << P3 << endl;
        cout << "----------" << endl;
        cout << P4 << " | " << P5 << " | " << P6 << endl;
        cout << "----------" << endl;
        cout << P7 << " | " << P8 << " | " << P9 << endl;
        cout << "\n" << endl;

        // check win. because players can win only after 3 		moves
        if (i >= 5) {
            // vertical check win
            if (P1 == P4 && P1 == P7) {
                cout << P1 << " Wins." << endl;
                return 0;
            }
            else if (P2 == P5 && P2 == P8) {
                cout << P2 << " Wins." << endl;
                return 0;
            }
            else if (P3 == P6 && P3 == P9) {
                cout << P3 << " Wins." << endl;
                return 0;
            }

            // horizontal check win
            else if (P1 == P2 && P1 == P3) {
                cout << P1 << " Wins." << endl;
                return 0;
            }
            else if (P4 == P5 && P4 == P6) {
                cout << P4 << " Wins." << endl;
                return 0;
            }
            else if (P7 == P8 && P7 == P9) {
                cout << P7 << " Wins." << endl;
                return 0;
            }

            // Diagonal check win
            else if (P1 == P5 && P1 == P9) {
                cout << P1 << " Wins." << endl;
                return 0;
            }
            else if (P3 == P5 && P3 == P7) {
                cout << P3 << " Wins." << endl;
                return 0;
            }
        }
    }
    cout << "It's a draw! The game is over." << endl;

    return 0;
}