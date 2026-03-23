#include <iostream>
using namespace std;

// Base class Person (public inheritance)
class Person {
protected: // protected specifier
    string name;
    int age;
public: // public specifier
    Person(string n, int a) : name(n), age(a) {}
    virtual void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Employee inherits from Person (single inheritance)
class Employee : public Person {
protected:
    double baseSalary;
public:
    Employee(string n, int a, double s) : Person(n, a), baseSalary(s) {}
    virtual double calculateSalary() {
        return baseSalary;
    }
};

// Teacher inherits from Employee (multilevel inheritance)
class Teacher : public Employee {
public:
    Teacher(string n, int a, double s) : Employee(n, a, s) {}
    double calculateSalary() override {
        return baseSalary + 5000; // bonus
    }
    void displayInfo() override {
        cout << "Teacher -> ";
        Person::displayInfo();
    }
};

// AdminStaff inherits from Employee
class AdminStaff : public Employee {
public:
    AdminStaff(string n, int a, double s) : Employee(n, a, s) {}
    double calculateSalary() override {
        return baseSalary + 2000;
    }
    void displayInfo() override {
        cout << "Admin Staff -> ";
        Person::displayInfo();
    }
};

// Diamond structure: StudentAssistant inherits from both Teacher and AdminStaff
class StudentAssistant : public Teacher, public AdminStaff {
public:
    StudentAssistant(string n, int a, double s)
        : Teacher(n, a, s), AdminStaff(n, a, s) {}
    double calculateSalary() override {
        return Teacher::calculateSalary() + AdminStaff::calculateSalary();
    }
};

// Virtual inheritance solution
class Base {
public:
    virtual void show() {
        cout << "Base class function" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Derived1 function" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Derived2 function" << endl;
    }
};

class FinalClass : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "FinalClass resolves diamond with virtual inheritance" << endl;
    }
};

int main() {
    Teacher t("Ali", 30, 40000);
    AdminStaff a("Sara", 28, 35000);
    StudentAssistant sa("Bilal", 22, 20000);

    t.displayInfo();
    cout << "Salary: " << t.calculateSalary() << endl;

    a.displayInfo();
    cout << "Salary: " << a.calculateSalary() << endl;

    cout << "Student Assistant Salary: " << sa.calculateSalary() << endl;

    FinalClass f;
    f.show();

    return 0;
}
