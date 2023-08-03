#include <iostream>
void swap(int *a, int *b) 
{
    int temp=*a;
        *a=*b;
        *b=temp;
}
void reverse(int a, int b) 
{
    int temp1 = a, temp2=b,digit,rev=0;
    while(temp1>0)
    {
        digit=temp1%10;
        rev=rev*10+digit;
        temp1=temp1/10;
    }
    cout << "Output: a = " <<rev ;
    rev=0;
    while(temp2>0)
    {
        digit=temp2%10;
        rev=rev*10+digit;
        temp2=temp2/10;
    }
    cout << " b = " <<rev ;
}
int main() 
{
    int a, b;
    cout << "Enter two digits (a,b): ";
    cin >> a >> b;
    cout << "Input: a = " << a << ", b = " << b << endl;

    swap(&a, &b);
    reverse(a, b);
   
    return 0;
}
