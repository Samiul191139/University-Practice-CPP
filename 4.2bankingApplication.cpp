#include <iostream>
using namespace std;
class Account
{
private:
    int number;
    float balance,newbalance;
    string name;
public:
void input()
{
    cout<<"Account Number: ";
    cin>>number;
    cin.ignore();
    cout<<"Account Holder Name: ";
    getline(cin, name);
    cout<<"Account Balance: ";
    cin>>balance;
}
void show()
{
    cout<<"Account Number: "<< number <<endl;
    cout<<"Account Holder Name: "<< name<<endl;
    cout<<"Account Balance: "<< balance <<endl;
}
void deposit()
{
    int a;
    cout<<"Enter Deposit amount: ";
    cin>>a;
    newbalance = balance + a;
    cout<<"New balance is: "<<newbalance<<" TK"<<endl<<endl;
}
void withdraw()
{
    int a;
    cout<<"Enter Withdrawal amount: ";
    cin>>a;
    newbalance = newbalance - a;
    cout<<"New balance is: "<<newbalance<<" TK"<<endl<<endl;
}
void currentbalance()
{
    cout<<"Current balance is: "<<newbalance<<" TK";
}
};
int main()
{
    Account obj;
    obj.input();
    obj.show();
    obj.deposit();
    obj.withdraw();
    obj.show();
    obj.currentbalance();
    return 0;
}