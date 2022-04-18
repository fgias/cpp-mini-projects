#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string& test) {
    return test.size() == 3;
}

struct Check {
    bool operator()(string& test) {
        return test.size() == 4;
    }
} check1;

void run(function<bool(string&)> check) { // standard function type: returns bool, accepts string
    string test = "dog";
    cout << check(test) << endl;
}

int main() {

    int size = 5;

    vector<string> vec{"one", "two", "three", "four", "five", "six"};

    auto lambda = [size](string test){return test.size() == size;};

    int count = count_if(
        vec.begin(), vec.end(), lambda
    );
    cout << count << endl;

    count = count_if(
        vec.begin(), vec.end(), check
    );
    cout << count << endl;    

    count = count_if(
        vec.begin(), vec.end(), check1
    );
    cout << count << endl;    

    cout << endl;
    run(lambda);
    run(check);
    run(check1);

    function<int(int, int)> add = [](int a, int b){return a + b;};
    // a type that can refer to anything callable with specified return type and arguments

    cout << endl;
    cout << add(7,3) << endl;

    return 0;
}