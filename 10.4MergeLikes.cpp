#include <iostream>
using namespace std;
class Post 
{
private:
    int numLikes;

public:
    Post(int initialLikes = 0) : numLikes(initialLikes) {}
    int getNumLikes() const 
    {
        return numLikes;
    }
    Post operator+(const Post& other) const 
    {
        int mergedLikes = numLikes + other.numLikes;
        return Post(mergedLikes);
    }
};

int main() 
{
    Post post1(100);
    Post post2(50);
    Post mergedPost = post1 + post2;
    cout << "Likes on post 1: " << post1.getNumLikes() << endl;
    cout << "Likes on post 2: " << post2.getNumLikes() << endl;
    cout << "Likes on merged post: " << mergedPost.getNumLikes() << endl;
    return 0;
}