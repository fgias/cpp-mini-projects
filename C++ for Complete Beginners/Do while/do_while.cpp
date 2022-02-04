#include <iostream>
using namespace std;

int main() {

    const string password = "hello"; // I cannot change the value of password

    string input;
    
    do {
        cout << "Enter password >" << flush;
        cin >> input;

        if (input != password) {
            cout << "Access denied." << endl;
        }
    } 
    while (input != password);
    // content inside do{} is executed once, even though condition is false
    // we want the loop to execute once anyway
    // we have avoided duplicating code

    cout << "Password accepted." << endl;

    return 0;
}