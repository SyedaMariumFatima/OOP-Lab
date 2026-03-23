#include <iostream>
using namespace std;

class Calculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }

    float multiply(float x, float y) {
        return x * y;
    }
};

int main() {
    Calculator calc;

    cout << calc.multiply(3, 4) << endl;
    cout << calc.multiply(2, 5, 6) << endl;
    cout << calc.multiply(2.5f, 4.2f) << endl;

    return 0;
}
