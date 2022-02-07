#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Break implementation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << endl;
        if (i == 3) {
            // cout << "Breaking out of the loop ..." 
            break;
        }

        cout << "Looping ..." << endl;
    }
    
    cout << "" << endl;
    cout << "Continue implementation:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "i = " << i << endl;
        if (i == 3) {
            // cout << "Jumping to next iteration ..." << endl;
            continue;
        }

        cout << "Looping ..." << endl;
    }


    const string password = "hello";

    string input;
    
    do {
        cout << "Enter password >" << flush;
        cin >> input;

        if (input == password) {
            cout << "Password accepted." << endl;
            break;
        }
        else {
            cout << "Access denied." << endl;
        }
    } 
    while (true);


    cout << "Program is quitting ..." << endl;

    
    return 0;
}