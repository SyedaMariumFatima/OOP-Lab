#include <iostream>
#include <string>

// 1. Base class Person
class Person {
protected: // Using protected so derived classes can access them directly
    int ID;
    std::string name;
public:
    Person(int id = 0, std::string n = "") : ID(id), name(n) {}
};

// 2 & 5. Derive Student and Employee with virtual inheritance
// Virtual inheritance ensures only one instance of Person exists in TeachingAssistant
class Student : virtual public Person {
public:
    double GPA;
    Student(int id, std::string n, double gpa) : Person(id, n), GPA(gpa) {}
};

class Employee : virtual public Person {
public:
    double Salary;
    Employee(int id, std::string n, double sal) : Person(id, n), Salary(sal) {}
};

// 3 & 6. TeachingAssistant inherits from both
class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(int id, std::string n, double gpa, double sal) 
        : Person(id, n), Student(id, n, gpa), Employee(id, n, sal) {}

    void display() {
        // 4. Ambiguity Demo:
        // Without 'virtual' in lines 14 and 20, the compiler wouldn't know 
        // whether to use Student::ID or Employee::ID.
        std::cout << "ID: " << ID << "\nName: " << name 
                  << "\nGPA: " << GPA << "\nSalary: $" << Salary << std::endl;
    }
};

int main() {
    TeachingAssistant ta(101, "Alex", 3.8, 25000.0);
    ta.display();
    return 0;
}
