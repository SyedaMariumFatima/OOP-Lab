#include <iostream>
using namespace std;

class employee
{
private:
    int salary;

public:
    int id;
    employee()
    {
        cout << "Constructor called" << endl;
        id = 0;
        salary = 0;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    employee e1;
    employee e2;
    e1.id = 101;
    e1.display();
}