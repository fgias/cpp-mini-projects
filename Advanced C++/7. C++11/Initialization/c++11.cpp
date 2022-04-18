#include <iostream>
#include <vector>
using namespace std;

int main() {

    int value{99}; // in c++11 easier initialization
    cout << value << endl;

    string text{"hello"};
    cout << text << endl;

    int numbers[]{1, 3, 5};
    cout << numbers[1] << endl;

    int* pInts = new int[3]{1, 2, 3};
    cout << pInts[0] << endl;
    delete [] pInts;

    int value1{}; // in c++11 easier initialization
    cout << value1 << endl;

    int* pSomething{nullptr}; // int* pSomething = nullptr;

    int* pSomething1{&value};
    cout << *pSomething1 << endl;

    int numbers1[5]{};
    cout << numbers1[0] << endl;

    struct {
        int value;
        string text;
    } s1{7, "hi"};

    cout << s1.value << endl;
    cout << s1.text << endl;

    vector<string> strings{"one", "two", "three"}; // nice!
    cout << "Size: " << strings.size() << endl;
    cout << strings[1] << endl;

    return 0;
}