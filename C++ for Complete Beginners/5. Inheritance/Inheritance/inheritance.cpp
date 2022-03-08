#include <iostream>
using namespace std;


class Animal { // superclass
public:
    void speak() {cout << "Grrr!" << endl;};

};

class Cat: public Animal { // subclass
public:
    void jump() {cout << "Cat jumping!" << endl;};
};

class Tiger: public Cat {
public:
    void attackAntelope() {cout << "Attacking!" << endl;};
};

int main() {

    Animal a;
    a.speak();

    Cat c;
    c.speak(); // Cat inherits methods from Animal
    c.jump();

    Tiger t;
    t.speak();
    t.jump();
    t.attackAntelope();

    return 0;
};