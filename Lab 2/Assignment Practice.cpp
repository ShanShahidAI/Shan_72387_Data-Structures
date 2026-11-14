#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
   
    BankAccount() {
        accountNumber = 0;
        accountHolder = "";
        balance = 0.0;
    }

    BankAccount(int accNum, string name, double initialBalance) {
        accountNumber = accNum;
        accountHolder = name;
        balance = initialBalance;
    }


    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited Rs. " << amount << ". New Balance: Rs. " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrawn Rs. " << amount << ". Remaining Balance: Rs. " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }


    void display() {
        cout << "Acc No: " << accountNumber 
             << " | Holder: " << accountHolder 
             << " | Balance: Rs. " << balance << endl;
    }
};



int searchAccount(BankAccount *accounts, int size, int targetAccNum) {
    for (int i = 0; i < size; i++) {
        if ((accounts + i)->getAccountNumber() == targetAccNum) {
            return i; 
        }
    }
    return -1; 
}

void displayAll(BankAccount *accounts, int size) {
    cout << "\n--- All Bank Accounts ---" << endl;
    for (int i = 0; i < size; i++) {
        (accounts + i)->display();
    }
}

void transferMoney(BankAccount &fromAcc, BankAccount &toAcc, double amount) {
    cout << "\nAttempting transfer of Rs. " << amount << " from Acc " 
         << fromAcc.getAccountNumber() << " to Acc " << toAcc.getAccountNumber() << "..." << endl;
    
    if (amount <= fromAcc.getBalance()) {
        fromAcc.withdraw(amount);
        toAcc.deposit(amount);
        cout << "Transfer Successful!" << endl;
    } else {
        cout << "Transfer Failed: Insufficient funds in sender's account." << endl;
    }
}

int main() {
    int totalAccounts = 3;

    
    BankAccount *bank = new BankAccount[totalAccounts] {
        BankAccount(101, "Ali Khan", 5000.0),
        BankAccount(102, "Sara Ahmed", 12000.0),
        BankAccount(103, "Usman Tariq", 3500.0)
    };

  
    displayAll(bank, totalAccounts);

 
    int searchId = 102;
    cout << "\nSearching for Account No: " << searchId << "..." << endl;
    int index = searchAccount(bank, totalAccounts, searchId);

    if (index != -1) {
        cout << "Account found at index " << index << ":" << endl;
        (bank + index)->display();
        
      
        (bank + index)->deposit(2000.0);
    } else {
        cout << "Account not found!" << endl;
    }

    transferMoney(bank[0], bank[2], 1500.0);


    displayAll(bank, totalAccounts);

    delete[] bank;

    return 0;
}