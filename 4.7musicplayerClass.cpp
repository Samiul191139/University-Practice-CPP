#include <iostream>
using namespace std;
class Song
{
private:
  string sname,aname, duration;
  public:
  void assign_value(string a,string b,string c)
  {
      sname=a;
      aname=b;
      duration=c;
  }
  void showinfo()
  {
    cout<<"Song Title\t\tArtist Name\tDuration\n";
    cout<<aname<<"\t"<<sname<<"\t\t"<<duration<<"min"<<endl;
  }
};
int main()
{    
   Song s;
   s.assign_value("Queen","Bohemian Rhapsody","5:55");
   s.showinfo();
    return 0;
}