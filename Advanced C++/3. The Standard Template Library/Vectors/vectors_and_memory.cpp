#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<double> numbers(1);
    // to initialize to some value a: vector<double> numbers(20, a);

    cout << "Size: " << numbers.size() << endl;

    int capacity = numbers.capacity();
    cout << "Capacity: " << capacity << endl;
    for (int i=1; i<10000; i++) {

        if (numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout << "Capacity: " << capacity << endl; 
            // capacity grows exponentially with the size of the vector
            // doubled each time
        }

        numbers.push_back(i);
    }

    cout << endl;
    numbers.reserve(100000); // reserve memory
    cout << "Size: " << numbers.size() << endl; // 10,000
    cout << "Capacity: " << numbers.capacity() << endl; // 100,000 

    cout << endl;
    numbers.resize(100); // resize
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl; // capacity has not changed

    cout << endl;
    numbers.clear(); // delete elements
    cout << "Size: " << numbers.size() << endl; // no elements
    cout << "Capacity: " << numbers.capacity() << endl; // capacity has not changed

    return 0;
}