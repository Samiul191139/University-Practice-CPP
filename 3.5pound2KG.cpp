#include <iostream>
using namespace std;
inline float kg(int p)
{
    float ans = p*0.453592;
    return ans;
}
int main()
{
    int p;
    float ans;
    cout<<"Enter Pound:";
    cin>>p;
    ans = kg(p);
    cout<<p<<" Pound to KG is:"<<ans;
    return 0;
}