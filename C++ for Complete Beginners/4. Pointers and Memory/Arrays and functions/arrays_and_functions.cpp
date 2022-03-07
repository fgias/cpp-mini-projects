#include <iostream>
using namespace std;

// string numbers[] = {"one", "two", "three"};
// could declare variables here

void show1(const int nElements, string texts[]) {
    // cout << sizeof(texts) << endl; // returns size of pointer
    for (int i=0; i<nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string* texts) {
    for (int i=0; i<nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3]) {
    for (int i=0; i<sizeof(texts)/sizeof(texts[0]); i++) {
        cout << texts[i] << endl;
    }
}

char* getMemory() {
    char* pMem = new char[100];
    return pMem;
}

void freeMemory(char* pMem) {
    delete [] pMem;
}

int main() {

    string texts[] = {"apple", "orange", "banana"};
    cout << sizeof(texts) << endl; // returns size of array

    show1(3, texts);
    show2(3, texts);
    show3(texts);

    char* pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}