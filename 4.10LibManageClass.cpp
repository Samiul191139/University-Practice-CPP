#include <iostream>
using namespace std;
class Book
{
  private:
  string b_name,id,a_name;
  bool av;
  
  public:
  void assign_value(string a,string b,string c,bool d)
  {
      id=a;
      b_name=b;
      a_name=c;
      av=d;
  }
  void showinfo()
  {
        cout<<"ID\t\tBook Title\t\tAuthor\t  Availability status\n";
        cout<<id<<"\t"<<b_name<<"\t\t"<<a_name<<"\t";
     if(av==1)
      {
          cout<<"available!"<<endl;
      }
      else
      {
          cout<<"not available!"<<endl;; 
      }
  }
  void Cheakout()
  {
      av=0;
  }
  void Return()
  {
      av=1;
  }
};
int main()
{    
    Book s;
    s.assign_value("B001","To Kill a Mockingbird","Harper Lee",1);
    s.showinfo();
    cout<<"\n\nafter Cheakout:\n";
    s.Cheakout();
    s.showinfo();
    cout<<"\n\nafter Return:\n";
    s.Return();
    s.showinfo();
    return 0;
}