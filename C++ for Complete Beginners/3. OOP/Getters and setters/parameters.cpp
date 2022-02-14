#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string, int);
    string getName();
    int getAge();
};

Person::Person(string n, int a) {
    name  = n;
    age = a;
};

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

int main() {
    
    Person person("Fotis", 25);

    cout << "The person's name is " + person.getName() + " and he is " + to_string(person.getAge()) + " years old." << endl;

    string newName;
    int newAge;

    cout << "Enter name > " << flush;
    cin >> newName;

    cout << "Enter age > " << flush;
    cin >> newAge;

    Person newperson(newName, newAge);
    cout << "The person's name is " + newperson.getName() + " and he is " + to_string(newperson.getAge()) + " years old." << endl;

    return 0;
};