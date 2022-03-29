#include <iostream>
#include <set>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(): name(""), age(0) {} // map needs this constructor
    Person(const Person &other) { // copy constructor
        name = other.name;
        age = other.age;
    }
    Person(string name, int age): name(name), age(age) {}
    void print() const {cout << name << ": " << age << endl;}
    bool operator<(const Person& other) const {
        if (name == other.name) {
            return age < other.age;
        }
        else {
            return name < other.name;
        }
    }
};

int main() {

    // set<int>
    set<int> numbers;

    numbers.insert(2);
    numbers.insert(4);
    numbers.insert(1);
    numbers.insert(0);
    numbers.insert(2);

    // iterate through
    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }
    
    // search for a value
    cout << endl;
    set<int>::iterator it = numbers.find(2);

    if (it != numbers.end()) {
        cout << "Found: " << *it << endl;
    }
    else {
        cout << "Not found." << endl;
    }

    // search, another way
    cout << endl;

    if (numbers.count(234322)) {
        cout << "Number found." << endl;
    }
    else {
        cout << "Number not found." << endl;
    }

    // set<Person>
    cout << endl;
    set<Person> people;

    people.insert(Person("Mike", 40));
    people.insert(Person("Vicky", 24));
    people.insert(Person("Vicky", 22));

    for (set<Person>::iterator it = people.begin(); it != people.end(); it++) {
        (*it).print();
    }

    return 0;
}