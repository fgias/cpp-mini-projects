#include <iostream>
#include <vector>
using namespace std;

int main() {

    // char texts[] = {"one", "two", "three"};
    auto texts = {"one", "two", "three"};

    for (auto text: texts) { // enhanced for loops in c++11
        cout << text << endl;
    }

    
    vector<int> numbers;
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(3);
    numbers.push_back(1);
    numbers.push_back(7);

    cout << endl;
    for (auto x: numbers) { // like `for x in numbers:` in python
        cout << x << endl;
    }


    string text = "Hello";

    cout << endl;
    for (auto c: text) {
        cout << c << endl;
    }

    return 0;
}