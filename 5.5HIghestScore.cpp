#include <iostream>
using namespace std;

class Player 
{
private:
    string name;
    int score;

public:
    void inputDetails() 
    {
        cout << "Enter player name: ";
        cin >> name;
        cout << "Enter player score: ";
        cin >> score;
    }
    void displayDetails() 
    {
        cout << "Player name: " << name << endl;
        cout << "Player score: " << score << endl;
    }
    int getScore() 
    {
        return score;
    }
};

int main() 
{
    const int numPlayers = 8;
    Player players[numPlayers];
    for (int i = 0; i < numPlayers; i++) 
    {
        cout << "Player " << (i + 1) << ":" << endl;
        players[i].inputDetails();
        cout << endl;
    }
    int highestScore = 0;
    int highestScoreIndex = 0;
    for (int i = 0; i < numPlayers; i++) 
    {
        if (players[i].getScore() > highestScore) 
        {
            highestScore = players[i].getScore();
            highestScoreIndex = i;
        }
    }
    cout << "Player with the highest score:" << endl;
    players[highestScoreIndex].displayDetails();
    return 0;
}