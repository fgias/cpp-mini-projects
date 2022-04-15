#include <iostream>
#include <typeinfo>
using namespace std;


int main() {

    string text;
    int value;
    cout << typeid(value).name() << endl; // i
    cout << typeid(text).name() << endl; // NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    // "name mangling"

    decltype(value) j = 3;

    cout << j << endl;
    cout << typeid(j).name() << endl; // i

    decltype(text) name = "Fotis";

    cout << name << endl;
    cout << typeid(name).name() << endl; // i

    return 0;
}


// to compile c++11 with g++ you need the flag : -std=c++11
// g++ -std=c++11 your_file.cpp -o your_program

