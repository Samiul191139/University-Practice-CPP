#include <iostream>
using namespace std;
class Elevetor
{
private:
    int floor;
public:
    Elevetor()
    {
        cout<<"Cuurent floor Number:";
        cin>>floor;
    }
    void operator ++ ()
    {
        if(floor < 10)
        {
            floor ++;
            cout<<"Moved up to "<<floor<<"th floor."<<endl;
        }
    }
    void operator -- ()
    {
        if(floor > 1)
        {
            floor --;
            cout<<"Moved down to "<<floor<<"th floor."<<endl;
        }
    }
};
int main()
{
    Elevetor obj;
    ++obj;
    ++obj;
    --obj;
    return 0;
}