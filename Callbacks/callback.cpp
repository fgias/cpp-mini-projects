#include <iostream>
using namespace std;

void printANumber(int number, void (*ptr)()) {
    cout << "The number is: " << number << "." << endl;
    (*ptr)();
}

void printFinishMessage() {
    cout << "I have finished printing the number." << endl;
}

int main() {

    int number = 10;
    
    printANumber(number, &printFinishMessage);

    return 0;
}