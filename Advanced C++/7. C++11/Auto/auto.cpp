#include <iostream>
using namespace std;

template <class T>
auto test(T value) -> decltype(value) { // "trailing type"
    return value;
}

int get() {
    return 999;
}

auto test2() -> decltype(get()) {
    return get();
}

int main() {

    auto value = 4;
    auto text = "Hello";

    cout << value << endl;
    cout << text << endl;

    cout << endl;
    cout << test(3) << endl;
    cout << test("Fotis") << endl;

    cout << endl;
    cout << test2() << endl;

    return 0;
}


/*

g++ -std=c++11 auto.cpp -o auto; ./auto

*/