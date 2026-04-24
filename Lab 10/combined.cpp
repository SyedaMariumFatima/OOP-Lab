#include <iostream>
#include <limits>

using namespace std;

// Template class to handle any numeric type (int, float, double, etc.)
template <typename T>
class GenericCalculator {
public:
    T add(T a, T b) { return a + b; }
    T subtract(T a, T b) { return a - b; }
    T multiply(T a, T b) { return a * b; }

    // Division with Exception Handling for "Division by Zero"
    T divide(T a, T b) {
        try {
            if (b == 0) {
                throw "Math Error: Division by zero is not allowed.";
            }
            return a / b;
        }
        catch (const char* message) {
            cout << message << endl;
            return 0;
        }
    }
};

int main() {
    GenericCalculator<double> calc; 
    double num1, num2;
    char op;
    double result;
    cout << "--- Generic Calculator ---" << endl;
    cin>>num1;
    cin>>num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> op;

    try {
        switch (op) {
            case '+': result = calc.add(num1, num2); break;
            case '-': result = calc.subtract(num1, num2); break;
            case '*': result = calc.multiply(num1, num2); break;
            case '/': result = calc.divide(num1, num2); break;
            default: throw std::invalid_argument("Invalid Operator: Use only +, -, *, or /.");
        }
        std::cout << "Result: " << result << std::endl;
    } 
    catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } 
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
    
