#include <iostream>
using namespace std;

void func() {
    // static
    static int static_int = 0; 
    // Despite the use of =, this is an initialization, NOT an assignment. 
    // So it happens when the variable is initialized and not when the 
    // 'statement' is apparently 'executed'. Since it is a static variable, 
    // it is initialized once when the program starts, rather than every 
    // time the function runs.

    // vs auto
    auto int non_static_int = 0;
    static_int++;
    non_static_int++;
    cout << "static: " << static_int << flush;
    cout << ", non-static: " << non_static_int << endl;
}

int main() {

    for (int i = 0; i < 4; i++) {
        func();
    }

    return 0;
}


/*

Scope:
- local
- global

Storage Duration:
- auto
- static

*/