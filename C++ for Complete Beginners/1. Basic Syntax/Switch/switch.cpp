#include <iostream>
using namespace std;

int main() {

    cout << "Enter an integer > " << flush;
    int value;
    cin >> value;

    const int value8 = 8; // the only way you can use in `case ...`
    // you cannot use variables

    switch(value) {
        case 4:
        cout << "Value is 4." << endl;
        break; // NB if you don't put `break` it will continue to the other cases

        case 5:
        cout << "Value is 5." << endl;
        break;

        case 6:
        cout << "Value is 6." << endl;
        break;

        case value8:
        cout << "Value is 8." << endl;
        break;

        default:
        cout << "Unrecongized value." << endl;

    }

    cout << endl << "Main menu" << endl;
    cout << "=========" << endl;
    cout << "1. Single player game." << endl;
    cout << "2. Two player game." << endl;
    cout << "3. Quit game." << endl;

    cout << endl << "Choose action > " << flush;
    int input;
    cin >> input;

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

    return 0;
}