#include <iostream>
#include <list>
using namespace std;


int main() {

    list<int> numbers;
    
    numbers.push_back(1); // adding item to the beginning
    numbers.push_back(2);
    numbers.push_back(3);

    numbers.push_front(0); // adding items to the beginning of the list is
    // just as efficient as adding to the end of it

    list<int>::iterator it = numbers.begin();
    cout << "at element: " << *it << endl; // pointing at 0
    it++;
    cout << "at element: " << *it << endl; // pointing at 1

    numbers.insert(it,100); // insert element before 1
    // pass the iterator when it is pointing at 1
    
    cout << "at element: " << *it << endl; // still pointing at 1
    // but another element has been inserted before the 1

    // show all elements
    cout << endl;
    for (list<int>::iterator it = numbers.begin(); it!=numbers.end(); it++) {
        cout << *it << endl;
    }
    // with the iterator we cannot use, for example, it += 2
    // we can only use the operators it++ (incrementation) or it-- (decrementation)
    // which are overloaded

    // remove 100
    cout << endl;
    it = numbers.begin();
    cout << "at element: " << *it << endl; // pointing at 0
    it++;
    cout << "at element: " << *it << endl; // pointing at 100

    it = numbers.erase(it); // the erase method invalidates the iterator
    // and returns the valid iterator
    cout << "at element: " << *it << endl;

    // show all elements
    cout << endl;
    for (list<int>::iterator it = numbers.begin(); it!=numbers.end(); it++) {
        cout << *it << endl;
    }

    // inserting and removing items while iterating through
    for (list<int>::iterator it = numbers.begin(); it!=numbers.end(); it++) {
        if (*it % 2 == 0) {
            numbers.insert(it, 1234);
        }
        if (*it == 1) {
            it = numbers.erase(it);
            it--; // when we erase, we effictively increment the iterator
        }

    }

    // show all elements
    cout << endl;
    for (list<int>::iterator it = numbers.begin(); it!=numbers.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}


/*

https://en.wikipedia.org/wiki/Doubly_linked_list

In computer science, a doubly linked list is a linked data structure that 
consists of a set of sequentially linked records called nodes. Each node 
contains three fields: two link fields (references to the previous and 
to the next node in the sequence of nodes) and one data field. The beginning 
and ending nodes' previous and next links, respectively, point to some 
kind of terminator, typically a sentinel node or null, to facilitate 
traversal of the list.

*/