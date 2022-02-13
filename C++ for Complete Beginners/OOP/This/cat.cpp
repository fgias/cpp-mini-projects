#include <iostream>
#include <sstream>
using namespace std;

class Cat {
private:
    string name;
    string gender;
    int age;
    bool happy;
public:
    Cat(string name, int age, string gender, bool happy = true);
    string toString();
    string run();
};

int main() {
    
    Cat cat("Sabrina", 4, "female");

    cout << cat.toString() << endl;

    return 0;
};


Cat::Cat(string name, int age, string gender, bool happy) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->happy = happy;
}

string Cat::toString() {
    stringstream ss;
    ss << "The cat is named " << name;
    if (gender == "male") {
        ss << ", is male, ";
    }
    else if (gender == "female"){
        ss << ", is female, ";
    }
    else {
        ss << ", of unrecognised gender, ";
    };

    ss << "is " << age << " years old ";

    if (happy) {
        ss << "and particularly happy at the moment.";
    }
    else {
        ss << "and not very happy at the moment.";
    };

    return ss.str();
        
}