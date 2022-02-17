#include <iostream>
using namespace std;

int main() {

    const int NSTRINGS = 5; // const: make sure it cannot change value
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"}; 

    string *pTexts = texts; // pointing at the first element in the array
    cout << *pTexts << endl;

    pTexts ++;
    cout << *pTexts << endl;

    pTexts += 4;
    pTexts -= 2;
    cout << *pTexts << endl;

    string *pEnd = &texts[NSTRINGS]; // pointing to the element after the last
    pTexts = &texts[0]; // make it point to the start again

    while (pTexts != pEnd) {
        cout << *pTexts << endl;
        pTexts ++;
    }

    pTexts = &texts[0]; // make it point to the start again

    long elements = (long)(pEnd - pTexts); // I can store this in an int
    int elements2 = pEnd - pTexts; // or even like this

    cout << elements << endl;
    cout << elements2 << endl;


    pTexts = &texts[0]; // make it point to the start again
    pTexts += NSTRINGS/2; // integer division: remainder discarded
    cout << *pTexts << endl; // point to the middle of the array

    return 0;
}