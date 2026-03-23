#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() {
        cout << "Car engine started" << endl;
    }
};

class Bike : public Vehicle {
public:
    void startEngine() {
        cout << "Bike engine started" << endl;
    }
};

class Truck : public Vehicle {
public:
    void startEngine() {
        cout << "Truck engine started" << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();
    Vehicle* v3 = new Truck();

    v1->startEngine();
    v2->startEngine();
    v3->startEngine();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}
