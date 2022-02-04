#include <iostream>
using namespace std;

int main(){

    string password = "hello";

    cout << "Enter password > " << flush;

    string input;

    cin >> input;
    
    cout << "Your input: " << "'" << input << "'" << endl;

    if (password == input) {
        cout << "Password is correct." << endl;
    }
    else if (input == "helo") {
        cout << "Pretty close." << endl;
    }
    else {
        cout << "Password is incorrect." << endl;
    }


    cout << "1.\tAdd new record." << endl;
    cout << "2.\tDelete record." << endl;
    cout << "3.\tQuit." << endl;

    cout << "Enter your selection > " << flush;

    int val;
    cin >> val;

    if (val == 3) {
        cout << "Application quitting..." << endl;
    }
    else if (val == 2) {
        cout << "Are you sure you want to delete?" << endl;
    }
    else if (val == 1) {
        cout << "Memory full." << endl;
    }
    else {
        cout << "Please choose from the options above." << endl;
    }

    return 0;
}