#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1) // remove padding
struct Person {
    char name[50]; // cannot use string, because they use pointers and allocate memory to heap
    int age;
    double weight;
};
#pragma pack(pop) // undo removal of padding

int main() {

    Person person = {"Fotis", 25, 75};

    // write binary file

    string filename = "test.bin"; // binary file

    ofstream outFile;

    outFile.open(filename, ios::binary);

    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<char *>(&person), sizeof(Person)); // ofstream::write expects a char * as argument
        // or, the older way to cast it to char *:
        // outFile.write((char *)&person, sizeof(person)); 
        outFile.close();
    }
    else {
        cout << "Could not create file: " << filename << endl;
    }
 

    // read in binary file

    Person person2 = {};

    ifstream inFile;

    inFile.open(filename, ios::binary);

    if (inFile.is_open()) {
        inFile.read(reinterpret_cast<char *>(&person2), sizeof(Person));
        inFile.close();
    }
    else {
        cout << "Could not read file: " << filename << endl;
    }

    cout << person2.name << ", " << person2.age << ", " << person2.weight << endl;

    return 0;
}