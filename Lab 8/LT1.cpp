#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize members
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}

    // Friend function declaration
    friend void calculateAreaAndPerimeter(const Rectangle& r);
};

// Definition of the friend function
void calculateAreaAndPerimeter(const Rectangle& r) {
    double area = r.length * r.width;
    double perimeter = 2 * (r.length + r.width);
    
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;
}

int main() {
    double l, w;

    // Task 3 & 4: User input and validation
    std::cout << "Enter length: ";
    std::cin >> l;
    std::cout << "Enter width: ";
    std::cin >> w;

    if (l > 0 && w > 0) {
        Rectangle rect(l, w);
        calculateAreaAndPerimeter(rect);
    } else {
        std::cout << "Error: Length and width must be positive numbers." << std::endl;
    }

    return 0;
}
