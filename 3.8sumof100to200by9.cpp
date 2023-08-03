#include <iostream>
using namespace std;
inline bool divisibleby9(int n)
{
    return n%9 == 0;
}
int main()
{
    int count = 0, sum = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (divisibleby9(i))
        {
            count++;
            sum += i;
        }
    }
cout<<"Intigers between 100 to 200:"<<count<<endl;
cout<<"Sum of Intigers between 100 to 200:"<<sum<<endl;
    return 0;
}