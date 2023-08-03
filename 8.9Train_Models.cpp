#include <iostream>
using namespace std;
void trainmodel(int a, int b, int c)
{
    cout << "Training model with numerical data..."<<a<<","<<b<<","<<c<<endl;
}
void trainmodel(double a, double b,double c)
{
    cout << "Training model with numerical data..."<<a<<","<<b<<","<<c<<endl;
}
void trainmodel(string a, string b)
{
    cout << "Training model with text data..."<<a<<","<<b<<endl;
}
void trainmodel(int a,int b)
{
    cout << "Training model with image data..." <<a<<"*"<<b<<endl;
}
int main()
{
    trainmodel(4,6,8);
    trainmodel(10.5, 16.9, 19.3);
    trainmodel("Lion", "ShaqilSir");
    trainmodel(1280, 720);
    return 0;
}