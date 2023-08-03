#include <iostream>
using namespace std;
void fib(int n, int *a,int *b)
{
    int next;
    cout<<*a<<" "<<*b<<" ";
    for(int i=0; i<(n-2);i++)
    {
        next=*a+*b;
        *a=*b;
        *b=next;
        cout<<next<<" ";
    }
}
int main()
{
    int fib1=0;
    int fib2=1;
    int n;
    cout<<"Enter Digit for the series:";
    cin>>n;
    fib(n,&fib1,&fib2);
    return 0;
}