#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;

public:
    Car(string b, string m) : brand(b), model(m) {}

    void displayDetails() const
    {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main()
{
    Car myCar("Toyota", "Corolla");
    myCar.displayDetails();

    return 0;
}