#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // 1. Overloading the '+' operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // 2. Overloading the '-' operator
    Complex operator - (const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    // 3. Overloading the '*' operator
    Complex operator * (const Complex& obj) {
        // Formula: (a+bi)(c+di) = (ac - bd) + (ad + bc)i
        float r = (real * obj.real) - (imag * obj.imag);
        float i = (real * obj.imag) + (imag * obj.real);
        return Complex(r, i);
    }

    // Function to display the complex number
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5), c2(2, 3);

    cout << "Number 1: "; c1.display();
    cout << "Number 2: "; c2.display();

    Complex sum = c1 + c2;       // Uses overloaded +
    Complex diff = c1 - c2;      // Uses overloaded -
    Complex prod = c1 * c2;      // Uses overloaded *

    cout << "\nResults:" << endl;
    cout << "Addition: "; sum.display();
    cout << "Subtraction: "; diff.display();
    cout << "Multiplication: "; prod.display();

    return 0;
}
