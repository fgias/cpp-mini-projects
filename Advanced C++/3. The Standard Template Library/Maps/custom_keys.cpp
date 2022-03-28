#include <iostream>
#include <map>
using namespace std;

// custom objects as map keys

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
    void print() const {cout << name << ": " << age << flush;}
    // it->first returns const key, so we need to make print explicitly const

    // Important:
    // STL map needs a way to sort the keys, so we need to overload the "<" operator
    // we can think of the operation "A < B" as a method of A, and B being passed in as an argument

    bool operator<(const Person &other) const { // OPERATOR OVERLOADING: SYNTAX
        if (name == other.name) {
            return age < other.age;
        }
        else {
            return name < other.name;
        }
        
    }
    // first const: the operator should not change the object that it is passed for comparing
    // second const: the operator should not change the other object used to compare
    // NB again: keys cannot be changed, so we have to put both consts in
};

int main() {
    
    map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 444)] = 100;
    people[Person("Vicky", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}