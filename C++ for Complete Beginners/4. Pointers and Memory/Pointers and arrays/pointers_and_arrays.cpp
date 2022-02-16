#include <iostream>
using namespace std;

int main() {

    string texts[] = {"one", "two", "three"};

    string *pTexts = texts; // pointer of type string, pointing at the first element in texts
    // syntax is not the same
    // or also: `string *pTexts = &texts[0]`

    cout << "Length of texts arrays: " << sizeof(texts)/sizeof(texts[0]) << endl;

    cout << endl;
    for (int i=0; i<sizeof(texts)/sizeof(texts[0]); i++) {
        cout << *pTexts << " " << flush; // pointing at the first element of the array
    }
    cout << endl;

    cout << endl;
    for (int i=0; i<sizeof(texts)/sizeof(texts[0]); i++) {
        cout << pTexts << " " << flush; // pointing at the first element of the array
    }
    cout << endl;
    
    cout << endl;
    for (int i=0; i<sizeof(texts)/sizeof(texts[0]); i++) { // pTexts ++ in for loop
        cout << *pTexts << " " << flush;

        pTexts ++; // move pointer to next element in the array
    }
    cout << endl;

    string *pTexts2 = texts; // new pointer, because the old pointer is now outside of the array indices
    cout << endl;
    for (int i=0; i<sizeof(texts)/sizeof(texts[0]); i++) {
        cout << pTexts2[i] << " " << flush;
    }
    cout << endl;

    string *pElement = &texts[0]; // point to first element again, like before, just a different way
    string *pEnd = &texts[2]; // point to last element, means &(texts[2])

    cout << endl;
    while (true) {
        cout << *pElement << " " << flush;
        if (pElement == pEnd) {
            break;
        }
        pElement ++;
    }
    cout << endl;

    return 0;
}