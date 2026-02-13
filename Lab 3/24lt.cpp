#include <iostream>
using namespace std;

class Teacher
{
private:
    string name;
    string subject;
    int accountNumber;
    // Private members improve program security because:
    // 1. They hide sensitive data from direct outside access.
    // 2. They prevent accidental or unauthorized modifications.
    // 3. They allow controlled access through public functions,
    //    where validation or rules can be applied.

public:
    Teacher(string n, string s) : name(n), subject(s), accountNumber(0) {}

    void setAccountNumber(int accNo)
    {

        accountNumber = accNo;
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }

    void displayInfo() const
    {
        cout << "Name: " << name
             << ", Subject: " << subject
             << ", Account Number: " << accountNumber << endl;
    }
};

int main()
{

    Teacher t1("Alice Johnson", "Mathematics");
    Teacher t2("David Smith", "Physics");

    t1.setAccountNumber(101);
    t2.setAccountNumber(202);

    t1.displayInfo();
    t2.displayInfo();

    return 0;
}