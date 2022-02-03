#include <iostream>
using namespace std;

int main() {

    int numberCats = 5; // use camel case to separate words, or underscores
    int numberDogs = 7;

    cout << "Number of cats: " << numberCats << endl;

    cout << "Number of dogs: " << numberDogs << endl;

    int numberAnimals = numberCats + numberDogs;

    cout << "Total numer of animals: " << numberCats + numberDogs << endl;
    cout << "Total numer of animals: " << numberAnimals << endl;

    cout << "New dog acquired!" << endl;

    numberDogs += 1;

    cout << "New number of dogs: " << numberDogs << endl;

    return 0;
}