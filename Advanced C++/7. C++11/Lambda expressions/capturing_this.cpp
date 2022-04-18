#include <iostream>
using namespace std;

class Test {
    int one{1};
    int two{2};
public:
    void run() {
        int three{3};
        int four{4};

        auto pLambda = [&, this](){
            one = 111;
            cout << one << endl;
            cout << one << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }
};

int main() {

    Test test;
    test.run();

    return 0;
}