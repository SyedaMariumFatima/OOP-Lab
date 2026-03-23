#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;


int area(int side) {
    return side * side;
}


int area(int length, int width) {
    return length * width;
}


double area(double radius) {
    return M_PI * radius * radius;
}

int main() {
    
    int s = 5;
    int l = 4, w = 6;
    double r = 3.5;

    cout << "Area of Square (side " << s << "): " << area(s) << endl;
    cout << "Area of Rectangle (" << l << "x" << w << "): " << area(l, w) << endl;
    cout << "Area of Circle (radius " << r << "): " << area(r) << endl;

    return 0;
}
