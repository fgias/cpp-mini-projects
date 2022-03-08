#include <iostream>
using namespace std;

class Frog {
private: // private instance variables section
    string name; // "encapsulation": hide away the instance variables
private: // private methods section
    string getName() {return name;};
public: // public methods section
    Frog(string name): name(name) {}; // the constructor has to be public
    void info() {cout << "My name is " << getName() << endl;};
};

int main() {

    Frog frog("Freddy"); // implicitly calling the constructor of the class, from "outside" the class
    // hence, the constructor has to be public
    frog.info();

    return 0;
}