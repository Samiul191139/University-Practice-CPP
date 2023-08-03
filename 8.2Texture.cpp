#include <iostream>
using namespace std;

void loadTexture(const string& filename) 
{ 
    cout << "Loading texture from file: " << filename << endl; 
}
void loadTexture(size_t size) 
{ 
    cout << "Loading texture from memory with size: " << size << endl; 
}
void loadTexture(const string& address, int port) 
{ 
    cout << "Loading texture from network address: " << address << " port: " << port << endl; 
}
int main() 
{
    loadTexture("texture.jpg");
    loadTexture(11);
    loadTexture("IUBAT.com", 8080);
    return 0;
}