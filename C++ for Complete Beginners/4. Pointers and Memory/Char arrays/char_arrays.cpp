#include <iostream>
using namespace std;

int main() {

    string word = "hello";
    cout << word << endl;

    char text[] = "hello"; // shortcut: store string in array of characters
    cout << text << endl;    
    cout << endl; 

    const int NCHARS = sizeof(text)/sizeof(text[0]);
    for (int i=0; i<NCHARS; i++) {
        cout << i << ": " << text[i] << endl;
    }
    cout << endl;  

    for (int i=0; i<NCHARS; i++) {
        cout << i << ": " << (int)text[i] << endl;
        if (i == 5) {
            cout << "-> the last zero is called 'string/null terminator'" << endl;
        }
    }
    cout << endl; 

    int k = 0;
    while (true) {
        if ((int)text[k] == 0) break;

        cout << text[k] << endl;
        k++;

    }
    cout << endl; 

    return 0;
}