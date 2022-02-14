#include <iostream>
using namespace std;

int main() {

    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++) {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    cout << endl;
    cout << "Multiplication table" << endl;
    cout << "====================" << endl;
    int numbers[10][10];
    for (int i=1; i<=10; i++){
        for (int j=1; j<=10; j++) {
            numbers[i][j] = i*j;
            cout << numbers[i][j] << " " << flush;
        }
        cout << endl;
    }


    return 0;
}
