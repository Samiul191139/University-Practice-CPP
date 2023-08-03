#include <iostream>
using namespace std;
class Post
{
private:
    int id;
public:
    string name,content;
    void input()
    {
        cout<<"ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Author's Name: ";
        getline(cin, name);
        //cin.ignore();
        cout<<"Content Details: ";
        getline(cin,content);
    }
    void show()
    {
        cout<<endl<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Author's Name: "<<name<<endl;
        cout<<"Content Details: "<< content<<endl;
    }
    void edit()
    {
        cout<<endl;
        cout<<"New Content Details: ";
        getline(cin,content);
    }
    
};
int main()
{
    Post obj;
    obj.input();
    obj.show();
    obj.edit();
    obj.show();
    return 0;
}