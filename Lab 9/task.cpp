#include <iostream>
#include <string>

using namespace std;

// Abstract Base Class
class Transaction {
protected:
    string accountNumber;
    double amount;

public:
    Transaction(string accNum, double amt) : accountNumber(accNum), amount(amt) {}

    // Pure Virtual Function
    virtual void processTransaction() = 0;

    virtual ~Transaction() {}
};

// Derived Class 1: Deposit
class Deposit : public Transaction {
public:
    Deposit(string accNum, double amt) : Transaction(accNum, amt) {}

    void processTransaction() override {
        cout << "Deposit Transaction" << endl;
        cout << "Account: " << accountNumber << endl;
        cout << "Amount: " << amount << endl;
        cout << "Status: Amount Deposited Successfully" << endl;
    }
};

// Derived Class 2: Withdrawal
class Withdrawal : public Transaction {
public:
    Withdrawal(string accNum, double amt) : Transaction(accNum, amt) {}

    void processTransaction() override {
        cout << "Withdrawal Transaction" << endl;
        cout << "Account: " << accountNumber << endl;
        cout << "Amount: " << amount << endl;
        cout << "Status: Amount Withdrawn Successfully" << endl;
    }
};

// Derived Class 3: Transfer
class Transfer : public Transaction {
public:
    Transfer(string accNum, double amt) : Transaction(accNum, amt) {}

    void processTransaction() override {
        cout << "Transfer Transaction" << endl;
        cout << "Account: " << accountNumber << endl;
        cout << "Amount: " << amount << endl;
        cout << "Status: Amount Transferred Successfully" << endl;
    }
};

int main() {
    // Example usage as per the expected output
    Transaction* t1 = new Deposit("12345", 5000);
    t1->processTransaction();

    delete t1;
    return 0;
}
