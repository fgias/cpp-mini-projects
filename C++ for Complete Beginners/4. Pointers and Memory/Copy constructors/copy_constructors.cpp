#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    Animal() {cout << "Animal created." << endl;};
    Animal(const Animal& other): name(other.name), age(other.age) {cout << "Animal created by copying." << endl;} 
    //custom "copy constructor"
    void setName(string name) {this->name = name;};
    void setAge(int age) {this->age = age;};
    void speak() const {cout << "My name is " << name << "." << endl;};
    void speakAge() const {cout << "I am " << age << " years old." << endl;};

};

int main() {

    Animal animal1;
    animal1.setName("Freddy");
    animal1.setAge(13);

    Animal animal2 = animal1; // implicitly invoking the "copy constructor"
    animal2.speak();
    animal2.speakAge();

    animal2.setName("Bob");
    animal2.setAge(15);


    animal1.speak();
    animal1.speakAge();

    animal2.speak();
    animal2.speakAge();

    Animal animal3(animal1); // another valid way of invoking the "copy constructor"
    animal3.speak();
    animal3.speakAge();


    return 0;
}