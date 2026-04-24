#include <iostream>

// Function template to find the minimum of two values
template <typename T>
T getMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    // Testing with integers
    std::cout << "Min of 10 and 20: " << getMin(10, 20) << std::endl;

    // Testing with floating-point numbers
    std::cout << "Min of 5.5 and 2.3: " << getMin(5.5, 2.3) << std::endl;

    // Testing with characters
    std::cout << "Min of 'g' and 'z': " << getMin('g', 'z') << std::endl;

    return 0;
}
