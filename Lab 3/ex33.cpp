#include <iostream>
using namespace std;

class Student
{
private:
    double CGPA;

public:
    Student() : CGPA(0.0) {}

    void setCGPA(double value)
    {

        if (value >= 0.0 && value <= 4.0)
        {
            CGPA = value;
        }
        else
        {
            cout << "Invalid CGPA! Must be between 0.0 and 4.0." << endl;
        }
    }

    void displayInfo() const
    {
        cout << "CGPA: " << CGPA << endl;
    }
};

int main()
{
    Student s1;

    s1.setCGPA(3.5);
    s1.displayInfo();

    s1.setCGPA(4.5);
    s1.displayInfo();

    return 0;
}