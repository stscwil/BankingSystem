#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    float balance;
    int accountNumber;

    virtual void BankAccount::deposit(float depositAmount) {
        balance += depositAmount;
    };

    virtual void BankAccount::withdraw(float withdrawAmount) {
        balance -= withdrawAmount;
    };
    
    virtual void BankAccount::getBalance() {
        cout << "Your balance is: " << balance << "\n";
    };

    virtual void printAccountType() {
        cout << "Account Type: None selected.\n";
    }
};

class SavingsAccount : public BankAccount {
public:
    float interestRate = 0.59;

    void applyInterest(float balance) {
        float interest = balance * interestRate / 100;
        balance += interest; 
    }

    void deposit(float depositAmount) override {
        balance += depositAmount;
    };

    void withdraw(float withdrawAmount) override {
        balance -= withdrawAmount;
    }

    void getBalance() override {
        cout << "Your savings account balance is: " << balance << "\n";
    };

    void printAccountType() override {
        cout << "Account Type: Savings Account\n";
    }
};

class CheckingAccount : public BankAccount {
public:
    float overdraftLimit = 300;

    void deposit(float depositAmount) override {
        balance += depositAmount;
    };

    void withdraw(float withdrawAmount) override {
        balance -= withdrawAmount;
    }

    void getBalance() override {
        cout << "Your checking account balance is: " << balance << "\n";
    };

    void printAccountType() override {
        cout << "Account Type: Checking Account\n";
    }
};



int main() {
    class BankAccount myFirstAccount;
    
    float moneyIn = 100.00;
    float moneyOut = 50.00;

    myFirstAccount.deposit(moneyIn);
    myFirstAccount.withdraw(moneyOut);
    myFirstAccount.getBalance();


    return 0;
}
