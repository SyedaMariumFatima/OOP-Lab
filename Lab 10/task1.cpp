#include <iostream>
using namespace std;

// Template for Sum
template <typename T>
T getSum(T a, T b) {
    return a + b;
}

// Template for Difference
template <typename T>
T getDifference(T a, T b) {
    return a - b;
}

// Template for Product
template <typename T>
T getProduct(T a, T b) {
    return a * b;
}

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "--- Results ---" << endl;
    cout << "Sum: " << getSum(num1, num2) << endl;
    cout << "Difference: " << getDifference(num1, num2) << endl;
    cout << "Product: " << getProduct(num1, num2) << endl;

    return 0;
}
