#include <iostream>
using namespace std;

int main() {

    // create an array of 11 elements
    int arr[11];
    for (int i=0; i<11; i++) {
        arr[i] = i*i;
    }


    // loop through the array using a pointer, with element reference syntax
    int* pArr = arr;

    for (int i=0; i<11; i++) {
        cout << pArr[i] << " " << flush;
    }
    cout << endl;

    // loop through the array using two pointers
    int* pElement = &arr[0];
    int* pEnd = &arr[sizeof(arr)/sizeof(arr[0])-1];

    do {
        cout << *pElement << " " << flush;
        pElement ++;

    } 
    while (pElement != pEnd+1);
    cout << endl;

    return 0;
}
