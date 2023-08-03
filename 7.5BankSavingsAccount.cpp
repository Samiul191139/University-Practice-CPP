#include <iostream>
using namespace std;
class BankAccount
{
protected:
double balance;
public:
void accBalance()
{
    cout<<"Enter Account Balance: ";
    cin>>balance;
} 
};
class SavingsAccount : public BankAccount
{
    public:
    double interest;
    void interestRate()
    {
        cout<<"Enter Interest Rate: ";
        cin>>interest;
    }
    void display()
    {
        cout<<"Account Balance: "<<balance<<"TK"<<endl;
        cout<<"Interest rate: "<<interest<<"%"<<endl;
    }
};
int main()
{
    SavingsAccount s;
    s.accBalance();
    s.interestRate();
    s.display();
    return 0;
}