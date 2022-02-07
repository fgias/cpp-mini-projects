#include <iostream>
#include<cmath>
using namespace std;

int main() {


    cout << "Array of integers" << endl;
    cout << "=================" << endl;
    int values[3]; // array of 3 ints, indexed 0, 1, 2
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;

    cout << "int 1: " << values[0] << endl;
    cout << "int 2: " << values[1] << endl;
    cout << "int 3: " << values[2] << endl;

    cout << endl << "Array of doubles" << endl;
    cout << "=================" << endl;
    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
    for (int i=0; i<4; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl; 
    }

    cout << endl << "Squaring the above array" << endl;
    cout << "=================" << endl;
    float squares[4];
    for (int i=0; i<4; i++) {
        squares[i] = pow(numbers[i],2);
        cout<< squares[i] << endl;
    }

    cout << endl << "Initializing with zero values" << endl;
    cout << "=================" << endl;
    int numberArray[8] = {};
    for (int i=0; i<=7; i++) {
        cout << "Element at index " << i << ": " << numberArray[i] << endl; 
    }

    cout << endl << "Initializing with strings" << endl;
    cout << "=================" << endl;
    string texts[] = {"apple", "banana"};
    for (int i=0; i<2; i++) {
        cout << "Element at index " << i << ": " << texts[i] << endl; 
    }

    cout << "Bad idea:" << numbers[7] << endl; // c++ does not stop you to do that

    cout << endl << "12 times table" << endl;
    cout << "=================" << endl;

    for (int i=0; i<=12; i++) {
        cout << 12*i << endl;
    }


    return 0;
}