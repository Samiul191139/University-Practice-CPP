#include <iostream>
using namespace std;
void sendMessage(string message) 
{
    cout << "Sending plain text message: " << message << endl;
}
void sendMessage(string message, string htmlTag) 
{
    cout << "Sending HTML message with tag <" << htmlTag << ">: " << message << endl;
}
void sendMessage(string message, int jsonFormatVersion) 
{
    cout << "Sending JSON message with format version " << jsonFormatVersion << ": " << message << endl;
}

int main() 
{
    sendMessage("Hello, this is a plain text message.");
    sendMessage("<p>Hello, this is an HTML message.</p>", "p");
    sendMessage("{ \"content\": \"Hello, this is a JSON message.\" }", 2);
    return 0;
}