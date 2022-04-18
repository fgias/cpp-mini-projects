#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
    int id{3};
    string name{"Mike"};
public:
    Test() = default; // same as `Test() {};`
    Test(const Test& other) = default;
    // Test(const Test& other) = delete; // delete the operator
    Test& operator=(const Test& other) = default;
    // Test& operator=(const Test& other) = delete; // delete the operator

    Test(int id): id(id) {}
    void print() {
        cout << id << ": " << name << endl;
    }
};

int main() {

    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test1; // copy initialization
    test2 = test; // assignment operator

    return 0;
}