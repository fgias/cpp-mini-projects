#include <iostream>
using namespace std;

int main() {

    char name[] = "Fotis";

    int NCHARS = sizeof(name)/sizeof(name[0]) - 1;

    for (int i=0; i<NCHARS; i++) {
        cout << name[i] << flush;
    }
    cout << endl;

    int i = 0;
    while (true) {
        if (name[i] == 0) {
            break;
        }
        cout << name[i] << flush;
        i ++;
    }
    cout << endl;

    return 0;
}