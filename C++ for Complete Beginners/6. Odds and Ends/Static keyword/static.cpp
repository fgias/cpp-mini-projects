#include <iostream>
using namespace std;

// .h header file
class Test {
public:    
    // without static: each instance of the class has it own variable `count`
    static int count; // this instance variable is shared with all objects of the class
    // variable is associated with the class, no with the particular object
public:
    static void showInfo() { // static method
        cout << count << endl; // we can only access static variables
    }
};

// .cpp implementation file
int Test::count = 7;

int main() {

    cout << Test::count << endl; // here we are using the class, not an object

    Test::showInfo();

    return 0;
}