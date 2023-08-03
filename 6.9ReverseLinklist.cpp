#include <iostream>
using namespace std;
class BankAccount 
{
private:
    float balance;
    string accountNumber;
public:
    BankAccount(const string& accNum, float initBalance) 
    {
        accountNumber = accNum;
        balance = initBalance;
    }
    friend float getBalance(const BankAccount& account);
};
float getBalance(const BankAccount& account) 
{
    return account.balance;
}
int main() 
{
    float bal;
    cout<<"Enter Account Balance:";
    cin>>bal;
    BankAccount account("1234567890", bal);
    float balance = getBalance(account);
    cout << "Account balance: $" << balance << endl;
    return 0;
}