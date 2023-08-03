#include<iostream>
using namespace std;
int main ()
{
    int m,p,c,t,add;
    cout<<"Enter marks for Math, Physics and Chemistry:";
    cin>>m>>p>>c;
    t = m+p+c;
    add = m+p;
    if (m>=65 && p>=55 && c>=50)
    {
        if (t>=180 || add>=140)
        {
            cout<<"You are Eligible";
        }
        else
        {
            cout<<"You are not Eligible";
        }
        
    }
    else
    {
        cout<<"You are not Eligible";
    }
    
    return 0;
}