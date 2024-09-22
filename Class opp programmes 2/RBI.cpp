#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    int age;
    string address;
public:
    Customer(string name, int age, string address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getAddress() {
        return address;
    }
};

class Account {
private:
    int accountNumber;
    Customer customer;
    double balance;
public:
    Account(int accountNumber, Customer customer, double balance) {
        this->accountNumber = accountNumber;
        this->customer = customer;
        this->balance = balance;
    }
    int getAccountNumber() {
        return accountNumber;
    }
    Customer getCustomer() {
        return customer;
    }
    double getBalance() {
        return balance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful. New balance is " << balance << endl;
    }
    virtual void withdraw(double amount) {
        if (balance - amount >= 0) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful. New balance is " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
    virtual double getInterestRate() {
        return 0;
    }
};

class RBI {
public:
    virtual double getMinimumBalance() = 0;
    virtual double getMinimumInterestRate() = 0;
    virtual double getMaximumWithdrawalLimit() = 0;
};

class SBI : public RBI {
public:
    double getMinimumBalance() {
        return 1000;
    }
    double getMinimumInterestRate() {
        return 4.0;
    }
    double getMaximumWithdrawalLimit() {
        return 50000;
    }
};

class ICICI : public RBI {
public:
    double getMinimumBalance() {
        return 5000;
    }
    double getMinimumInterestRate() {
        return 4.5;
    }
    double getMaximumWithdrawalLimit() {
        return 75000;
    }
};

class PNB : public RBI {
public:
    double getMinimumBalance() {
        return 2000;
    }
    double getMinimumInterestRate() {
        return 3.5;
    }
    double getMaximumWithdrawalLimit() {
        return 25000;
    }
};

int main() {
    Customer c("John Doe", 35, "123 Main St, Anytown USA");
    Account *a = new Account(1001, c, 5000);
    RBI *r = new ICICI();
    cout << "Customer name: " << a->getCustomer().getName() << endl;
    cout << "Account number: " << a->getAccountNumber() << endl;
    cout << "Current balance: " << a->getBalance() << endl;
    cout << "Minimum balance required: " << r->getMinimumBalance() << endl;
    cout << "Minimum interest rate: " << r->getMinimumInterestRate() << "%" << endl;
    cout << "Maximum withdrawal limit: " << r->getMaximumWithdrawalLimit() << endl;
    a->deposit(500);
    a->withdraw(1000);
    a->withdraw(7000);
    delete a;
    delete r;
    return 0;
}

