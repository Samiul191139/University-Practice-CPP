#include <iostream>
using namespace std;
class Event
{
private:
string name,date,location;
  public:
  void assign(string a,string b,string c)
  {
      name=a;
      date=b;
      location=c;
      
  }
  void show()
  {
    cout<<"Name\t\tDate\t\tLocation\n";
    cout<<name<<"\t"<<date<<"\t"<<location<<endl;
  }
  
};
int main()
{    
    Event obj;
    obj.assign("Birthday Party","2023-08-15","Park Plaza");
    obj.show();
    return 0;
}