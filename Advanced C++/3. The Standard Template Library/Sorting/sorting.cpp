#include <iostream>
#include <vector>
using namespace std;

class Test {
private:
    int id;
    string name;
public:
    Test(int id, string name): id(id), name(name) {}
    void print() {cout << id << ": " << name << endl;}
    friend bool comp(const Test& a, const Test& b); 
    // allow this function to access private members: id, name
};

bool comp(const Test& a, const Test& b) {
    if (a.name == b.name) {
        return a.id < b.id;
    }
    else {
        return a.name < b.name;
    }
};

int main() {

    vector<Test> tests;

    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));
    tests.push_back(Test(3, "Vicky"));
    
    // sort the vector
    sort(tests.begin(), tests.end(), comp); // std::sort()
    // comp: comparator: function pointer

    for (int i = 0; i < tests.size(); i++) {
        tests[i].print();
    }

    return 0;
}

/*

A double-ended queue (abbreviated to deque, pronounced deck) is an abstract 
data type that generalizes a queue, for which elements can be added to or 
removed from either the front (head) or back (tail).

*/