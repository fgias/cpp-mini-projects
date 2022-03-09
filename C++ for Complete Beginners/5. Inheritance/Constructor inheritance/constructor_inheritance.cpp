#include <iostream>
using namespace std;

class Machine {
private:
    int id;
public:
    Machine(): id(0) {cout << "Machine no-argument constructor called." << endl;};
    Machine(int id): id(id) {cout << "Machine one-argument constructor called." << endl;};
    void info() {cout << "ID is " << id << "." << endl; }
};

class Vehicle: public Machine {
public:
    Vehicle() {cout << "Vehicle no-argument constructor called." << endl;};  
    Vehicle(int id): Machine(id) {cout << "Vehicle one-argument constructor called." << endl;}; 
};

class Car: public Vehicle {
public:
    Car(): Vehicle(999) {cout << "Car no-argument constructor called." << endl;};
};

// constructors are called, but are NOT inherited

int main() {

    Vehicle vehicle(123);
    vehicle.info();

    Car car;
    car.info();

    return 0;
}