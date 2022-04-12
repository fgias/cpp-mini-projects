#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(string test) {
    // return test == "two";
    return test.size() == 3;
}

int countStrings(vector<string>& texts, bool (*match)(string test)) {
    int cnt = 0;
    for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++) {
        if (match(*it)) {
            cnt ++;
        }
    }    
    return cnt;
}

int main() {

    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    cout << match("one") << endl;

    // apply the function to every element of the vector
    cout << count_if(texts.begin(), texts.end(), match) << endl;

    // with iterator
    int cnt = 0;
    for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++) {
        if (match(*it)) {
            cnt ++;
        }
    }
    cout << cnt << endl;

    // with custom function
    // custom implementation of count_if
    cout << countStrings(texts, match) << endl;

    return 0;
}