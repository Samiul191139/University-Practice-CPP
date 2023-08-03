#include <iostream>
using namespace std;
inline void floid (int *r)
{
    int num=1;
    for (int i = 1; i <= *r; i++)
    {
        //cout<<i;
        for (int j = 1; j <= i; j++)
        {
            //cout<<j<<endl;
            cout<< num <<" ";
            num++;
        }
        cout<<endl;
    }
}
int main()
{
    int r;
    cout<<"Enter number of rows:";
    cin>>r;
    floid(&r);
    return 0;
}