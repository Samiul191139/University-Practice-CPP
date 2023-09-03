#include <iostream>
using namespace std;
class prac
{
public:
int a1,a2,b1,b2,a3,b3;
    prac()
    {
        cin>>a1>>b1>>a2>>b2;
        cout<<a1<<"+"<<b1<<"i"<<endl;
        cout<<a2<<"+"<<b2<<"i"<<endl;
    }
    void operator + ()
    {
        a3 = a1+a2;
        b3 = b1+b2;
        cout<<a3<<"+"<<b3<<"i"<<endl;
    }
 };
int main()
{
    prac obj;
    +obj;
    return 0;
}