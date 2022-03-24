#include <iostream>
using namespace std;

struct Person {
    char name[50]; // cannot use string, because they use pointers and allocate memory to heap
    int age;
    double weight;
};

#pragma pack(push, 1) // remove padding
struct Person2 {
    char name[50]; // cannot use string, because they use pointers and allocate memory to heap
    int age;
    double weight;
};
#pragma pack(pop) // undo removal of padding

int main() {
    Person person;

    cout << "Size of name: " << sizeof(person.name) << " bytes." << endl;
    cout << "Size of age: " << sizeof(person.age) << " bytes." << endl;
    cout << "Size of weight: " << sizeof(person.weight) << " bytes." << endl;
    cout << "-> Size of sum: " << sizeof(person.name) + 
    sizeof(person.age) + sizeof(person.weight) << " bytes." << endl;

    cout << "-> Size of Person: " << sizeof(Person) << " bytes." << endl; 
    // the struct has been "padded"
    // added some extra bytes to make the struct more efficient to work with

    cout << endl;
    // to remove padding add: #pragma pack(push, 1)

    Person2 person2;
    cout << "Size of name: " << sizeof(person2.name) << " bytes." << endl;
    cout << "Size of age: " << sizeof(person2.age) << " bytes." << endl;
    cout << "Size of weight: " << sizeof(person2.weight) << " bytes." << endl;
    cout << "-> Size of sum: " << sizeof(person2.name) + 
    sizeof(person2.age) + sizeof(person2.weight) << " bytes." << endl;

    cout << "-> Size of Person2: " << sizeof(Person2) << " bytes." << endl; 

    return 0;
}