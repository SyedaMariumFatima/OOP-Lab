#include <iostream>

// Class template definition
template <class T>
class Calculator {
public:
    // Addition
    T add(T n1, T n2) {
        return n1 + n2;
    }

    // Subtraction
    T subtract(T n1, T n2) {
        return n1 - n2;
    }

    // Multiplication
    T multiply(T n1, T n2) {
        return n1 * n2;
    }

    // Division
    T divide(T n1, T n2) {
        if (n2 == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return n1 / n2;
    }
};

int main() {
    // Example using 'int'
    Calculator<int> intCalc;
    std::cout << "Int Addition (5 + 3): " << intCalc.add(5, 3) << std::endl;

    // Example using 'double'
    Calculator<double> doubleCalc;
    std::cout << "Double Division (10.5 / 2.0): " << doubleCalc.divide(10.5, 2.0) << std::endl;

    return 0;
}
