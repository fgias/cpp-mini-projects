#include <iostream>
using namespace std;

void showMenu() {
    cout << endl << "Main menu" << endl;
    cout << "======================" << endl;
    cout << "1. Single player game." << endl;
    cout << "2. Two player game." << endl;
    cout << "3. Quit game." << endl;
    cout << endl;
}

int requestInput() {
    cout << endl << "Enter selection > " << flush;
    int input;
    cin >> input;
    return input;
}

void switchInput(int input) {
    switch(input) {
        case 1:
        cout << "Starting single player game ..." << endl;
        break;

        case 2:
        cout << "Starting two player game ..." << endl;
        break;

        case 3:
        cout << "Quitting game ..." << endl;
        break;

        default:
        cout << "Unrecognized command, quitting game ..." << endl;
    }
}

int main() {
    showMenu();
    int input = requestInput();
    switchInput(input);

    return 0;
}