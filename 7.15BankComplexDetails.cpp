#include <iostream>
using namespace std;

class RBI 
{
protected:
    double minInterestRate;
    double minBalance;
    double maxWithdrawalLimit;
public:
    RBI() : minInterestRate(4.0), minBalance(1000.0), maxWithdrawalLimit(10000.0) {}
    void setGuidelines(double interestRate, double minBal, double maxWithdraw) 
    {
        minInterestRate = interestRate;
        minBalance = minBal;
        maxWithdrawalLimit = maxWithdraw;
    }
    void displayGuidelines() 
    {
        cout << "Minimum Interest Rate: " << minInterestRate << "%" << endl;
        cout << "Minimum Balance Allowed: TK. " << minBalance << endl;
        cout << "Maximum Withdrawal Limit: TK. " << maxWithdrawalLimit << endl;
    }
};

class Customer 
{
protected:
    string name;
    int accountNumber;
public:
    Customer(const string& custName, int accNum) : name(custName), accountNumber(accNum) {}
    void displayInfo() 
    {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};
class Account : public RBI 
{
protected:
    double balance;
    Customer customer;
public:
    Account(const string& custName, int accNum) : balance(0.0), customer(custName, accNum) 
    {

    }
    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposit of TK. " << amount << " successful." << endl;
    }
    void withdraw(double amount) 
    {
        if (amount <= balance && amount <= maxWithdrawalLimit) 
        {
            balance -= amount;
            cout << "Withdrawal of TK. " << amount << " successful." << endl;
        } 
        else 
        {
            cout << "Withdrawal failed. Insufficient balance or exceeds withdrawal limit." << endl;
        }
    }
    double getBalance() 
    {
        return balance;
    }
    void displayAccountInfo() 
    {
        customer.displayInfo();
        cout << "Account Balance: TK. " << balance << endl;
        displayGuidelines();
    }
};
class SBI : public RBI {};
class ICICI : public RBI {};
class PNB : public RBI {};
int main() 
{
    string name;
    int id, accountNumber;
    double depositAmount, withdrawAmount;
    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Customer ID: ";
    cin >> id;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    Account customerAccount(name, accountNumber);
    SBI sbiBank;
    sbiBank.setGuidelines(4.5, 1500.0, 12000.0);
    cout << "Enter Deposit Amount: ";
    cin >> depositAmount;
    customerAccount.deposit(depositAmount);
    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmount;
    customerAccount.withdraw(withdrawAmount);
    cout << "Customer Account Information: " << endl;
    customerAccount.displayAccountInfo();
    return 0;
}