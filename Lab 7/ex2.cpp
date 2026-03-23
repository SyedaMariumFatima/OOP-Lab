#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived Class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw(); // Outputs: Drawing a circle
    s2->draw(); // Outputs: Drawing a rectangle

    delete s1;
    delete s2;
    return 0;
}
