#include <iostream>
using namespace std;

void test(void (*pFunc)()) {
    pFunc();
}

void testGreet(void (*greet)(string)) {
    greet("Bob");
}

void runDivide(double (*divide)(double a, double b)) {
    cout << divide(9, 3.0001) << endl;
}

int main() {

    auto func = [](){cout << "Hello" << endl;};
    func();
    test(func);
    test([](){cout << "Hi" << endl;});

    auto pGreet = [](string name){cout << "Hello " << name << "." << endl;};
    pGreet("Fotis");
    testGreet(pGreet);

    auto pDivide = [](double a, double b) -> double {
        if (b == 0.0) {
            return 0;
        }
        return a/b;
    };
    cout << pDivide(2, 0) << endl;
    
    runDivide(pDivide);

    return 0;
}