#include <iostream>
using namespace std;
class account
{
private:
    int balance;

public:
    account()
    {
        cout << "default Constructor called" << endl;
        balance = 0;
    }
    account(int b)
    {
        cout << "Parameterized Constructor called" << endl;
        this->balance = balance;
        // by writing this you can use same name for parameter and data member, it will refer to data member of class
    }
    account(const account &a)
    {
        cout << "Copy Constructor called" << endl;
        balance = a.balance;
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    account a1;
    account a2(5000);
    account a3 = a2;
    a1.display();
    a2.display();
    a3.display();
}