#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    // Constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person p1("Charlie", 27);
    p1.displayInfo();
    return 0;
}
