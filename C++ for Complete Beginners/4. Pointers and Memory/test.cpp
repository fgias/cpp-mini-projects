#include <iostream>
using namespace std;

void changeName(string *name) {
    cout << "- I'm actually going to call you John." << endl;
    *name = "John";
};

void outputName(string name) {
    cout << "- My name is " << name << "." << endl;
};

int main() {

    string name = "Fotis";
    outputName(name);

    changeName(&name);
    outputName(name);

    return 0;
};