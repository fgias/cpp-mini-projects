#include <iostream>
using namespace std;

void doSomething(); // "prototype"
// without this function main() cannot compile
// now main() compiles even though the doSomething() function is defined below main()

int main() {
    
    doSomething();
    doSomething();

    return 0;
}

void doSomething() {
    cout << "Hello" << endl;
}
