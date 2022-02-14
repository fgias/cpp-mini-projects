#include <iostream>
#include <sstream>
using namespace std;


int main() {
    string name = "Bob";
    int age = 32;

    // string info = "name: " + name + "; age: " + age; 
    // this does not work, because you are trying to concatenate string and int

    stringstream ss;

    ss << "name: " << name << "; age: " << age;

    string info = ss.str();

    cout << info << endl;

    return 0;
}