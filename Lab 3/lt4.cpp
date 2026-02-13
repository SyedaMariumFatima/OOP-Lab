#include <iostream>
using namespace std;

class Teacher
{
private:
    string name;
    string subject;

public:
    Teacher(string n, string s) : name(n), subject(s) {}

    void displayInfo() const
    {
        cout << "Name: " << name << endl
             << "Subject: " << subject << endl;
    }
};

int main()
{

    Teacher t1("Aneesa Nawas", "Calculus");
    Teacher t2("Abeeha Sattar", "Programming Fundamentals");

    t1.displayInfo();
    t2.displayInfo();

    return 0;
}