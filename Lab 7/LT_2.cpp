#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
};

class Manager : public Employee {
public:
    double calculateSalary() {
        return 80000;
    }
};

class Developer : public Employee {
public:
    double calculateSalary() {
        return 60000;
    }
};

class Intern : public Employee {
public:
    double calculateSalary() {
        return 20000;
    }
};

int main() {
    Employee* e1 = new Manager();
    Employee* e2 = new Developer();
    Employee* e3 = new Intern();

    cout << e1->calculateSalary() << endl;
    cout << e2->calculateSalary() << endl;
    cout << e3->calculateSalary() << endl;

    delete e1;
    delete e2;
    delete e3;

    return 0;
}
