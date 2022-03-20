#include <iostream>
using namespace std;

// .h header file
class Test {
private:
    int id;
public:    
    // without static: each instance of the class has it own variable `count`
    static int count; // this instance variable is shared with all objects of the class
    // variable is associated with the class, no with the particular object

    // initialization of const should be sone here
    static int const MAX = 99; // a member with an in-class initializer must be const

public:
    Test() {id = ++count;} // count incremented and then assigned to id (pre-fix increment operator)
    // `id = count++`: count assigned to id and then incremented (post-fix increment operator)

    int getId() {return id;}

    static void showInfo() { // static method
        cout << "count: " <<count << endl; // we can only access static variables
    }
};

// .cpp implementation source file
int Test::count = 0; // counting objects that are created

int main() {

    cout << Test::count << endl; // here we are using the class, not an object
    cout << Test::MAX << endl;
    Test::showInfo();

    Test test1;
    Test::showInfo();

    Test test2;
    Test::showInfo();

    cout << "id: " << test1.getId() << endl;
    cout << "id: " << test2.getId() << endl;

    return 0;
}