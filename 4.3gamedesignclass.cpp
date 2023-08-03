#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int level, score, newscore;

public:
    void input()
    {
        cout << "Enter Player name: ";
        cin >> name;
        cout << "Player level: Level-";
        cin >> level;
        cout << "Score: ";
        cin >> score;
    }
    void increasescore(int a)
    {
        score += a;
        cout << "New Score is: " << score << endl;
    }
    void increaselevel(int a)
    {
        level = (a+50)/50;
        cout << "New level is: " << level<<endl<<endl;
    }
    string getName()
    {
        return name;
    }
    int getLevel()
    {
        return level;
    }
    int getScore()
    {
        return score;
    }
};
int main()
{
    Player obj;
    obj.input();
    cout << "Enter New Score: ";
    int a;
    cin >> a;
    obj.increasescore(a);
    obj.increaselevel(a);
    cout << "Updated Player Details:"<<endl;
    cout << "Name: " << obj.getName() << endl;
    cout << "Level: " << obj.getLevel() << endl;
    cout << "Score: " << obj.getScore() << endl;

    return 0;
}