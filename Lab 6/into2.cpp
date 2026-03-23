#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}
};

// 2. Create a class Student that inherits from Person
class Student : public Person {
public:
    int rollNumber; // Add Roll Number

    // Constructor to initialize Person and Student attributes
    Student(string n, int a, int rn) : Person(n, a), rollNumber(rn) {}

    // Add function displayStudent()
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1("Bob", 19, 502);
    s1.displayStudent();
    return 0;
}
