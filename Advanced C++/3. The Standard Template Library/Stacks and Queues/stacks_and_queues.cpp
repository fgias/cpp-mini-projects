#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
    string name;
public:
    Test(string name): name(name) {}
    virtual ~Test() {
        // cout << "Object destroyed." << endl;
    }
    void print() {cout << name << endl;}
};


int main() {

    // LIFO
    stack<Test> testStack;

    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));
    testStack.push(Test("Anna"));
    testStack.push(Test("Fred"));
    testStack.push(Test("Bob"));

    cout << endl;
    /*
    Invalid code:
    Using a reference to a destroyed object.

    Test& test1 = testStack.top();
    testStack.pop();
    test1.print(); // refers to destroyed object
    */

    Test& test1 = testStack.top(); // the top of the stack: stack.top();
    // cf lists / vectors etc.: list.begin() and list.end()
    test1.print();

    testStack.pop();
    test1 = testStack.top();
    test1.print();

    cout << endl;
    while(testStack.size() > 0) {
        Test& test = testStack.top();
        test.print();
        testStack.pop();

    }


    // FIFO
    queue<Test> testQueue;

    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Sue"));
    testQueue.push(Test("Anna"));
    testQueue.push(Test("Fred"));
    testQueue.push(Test("Bob"));

    cout << endl;
    while(testQueue.size() > 0) {
        Test& test = testQueue.front(); // the front (/back) of the queue: queue.front() (/queue.back())
        test.print();
        testQueue.pop();

    }

    return 0;
}

/*

stack: last-in-first-out (LIFO) structure
- "top" of the stack

queque: first-in-first-out (FIFO) structure
- "front" of the queue

for both:
- adding: "pushing" onto the stack/queue 
- removing: "popping" off the stack/queue

*/