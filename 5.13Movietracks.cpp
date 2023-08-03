#include <iostream>
using namespace std;
class Movie
{
private:
public:
    string name,genre;
    void input()
    {
        cout<<"Movie name:"<<name<<endl;
        cin>>name;
        cout<<"Genre:"<<genre<<endl;
        cin>>genre;
    }
    void update()
    {
        cout << "Update Movie name:";
        cin >> name;
        cout << "Update Genre:";
        cin >> genre;
    }
    string displayname()
    {
        return name;
    }
    string displaygenre()
    {
        return genre;
    }
};

int main()
{
    int n,up;
    cout<<"Enter the amount of movie in the playlist:";
    cin>>n;
    Movie obj[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Movie - "<<(i+1)<<endl;
        obj[i].input();
    }
    //obj[up].update();
    cout<<"Select movie number to update:";
    cin>>up;
    obj[up].update();
    obj[up].displayname();
    obj[up].displaygenre();
    string updatedName = obj[up].displayname();
    string updatedGenre = obj[up].displaygenre();
    cout << "Updated Movie name: " << updatedName << endl;
    cout << "Updated Genre: " << updatedGenre << endl;
    return 0;
}