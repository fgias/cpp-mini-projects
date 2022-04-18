#include <iostream>
#include <vector>
using namespace std;

int main() {

    int values[] = {1, 2, 3};
    cout << values[0] << endl;

    class C {
    public:
        string text;
        int id;
    };
    C c1 = {"Hello", 7};
    cout << c1.text << endl;

    struct S {
        string text;
        int id;
    };
    S s1 = {"Hi", 3};
    cout << s1.text << endl;

    struct { // anonymous
        string text;
        int id;
    } r1 = {"Hey", 5}, r2 = {"Heyy", 4};
    cout << r1.text << endl;
    cout << r2.text << endl;

    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three"); // quite tedious to initialize

    return 0;
}