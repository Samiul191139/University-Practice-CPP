#include <iostream>
using namespace std;
void query(int x)
{
    cout<<"Age: "<<x<<endl;
}
void query(string x)
{
    cout<<"Nickname:"<<x<<endl;
}
void query(string x, string y)
{
    cout<<"Name:"<<x<<endl;
    cout<<"Date of Birth:"<<y<<endl;
}
int main()
{
    query(21);
    query("Sami");
    query("Samiul Karim", "30/05/2002");
    return 0;
}