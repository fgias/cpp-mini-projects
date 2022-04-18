#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
public:
    Test(initializer_list<string> texts) {
        for (auto value: texts) {
            cout << value << endl;
        }
    }
    void print(initializer_list<string> texts) {
        for (auto value: texts) {
            cout << value << endl;
        }
    }
    int sum(initializer_list<int> numbers ) {
        int s = 0;
        for (auto value: numbers) {
            s += value;
        }
        return s;
    }
};

int main() {

    vector<int> numbers {1, 3, 4, 6, 9};
    cout << numbers[2] << endl;

    Test test{"apple", "orange", "lemon"};

    cout << endl;
    test.print({"one", "two", "three"});

    cout << test.sum({1,5,3,7}) << endl;

    return 0;
}