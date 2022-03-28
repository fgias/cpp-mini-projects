#include <iostream>
#include <map>
using namespace std;

// custom objects as map values

class Person {
private:
    string name;
    int age;

public:
    Person(): name(""), age(0) {} // map needs this constructor
    Person(const Person &other) { // copy constructor
        cout << "Copy constructor running..." << endl;
        name = other.name;
        age = other.age;
    }
    Person(string name, int age): name(name), age(age) {}
    void print() {cout << name << ": " << age << endl;}
};

int main() {

    Person person("Mike", 40);
    
    map<int, Person> people;

    people[50] = Person("Mike", 40);
    people[32] = Person("Vicky", 30);
    people[21] = Person("Raj", 20);

    people.insert(make_pair(55, Person("Bob", 45)));
    people.insert(make_pair(55, Person("Sue", 24)));


    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->first << ": " << flush;
        it->second.print();
    }

    return 0;
}