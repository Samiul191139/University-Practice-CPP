#include <iostream>
#include <string>
using namespace std;
enum NetworkProtocol 
{
    TCP,
    UDP,
    HTTP
};
void sendMessage(NetworkProtocol protocol, const string& message) 
{
    switch (protocol) {
        case TCP:
            cout << "Sending TCP message: " << message << endl;
            break;
        case UDP:
            cout << "Sending UDP message: " << message << endl;
            break;
        case HTTP:
            cout << "Sending HTTP message: " << message << endl;
            break;
        default:
            cout << "Invalid network protocol!" << endl;
    }
}
void sendMessage(NetworkProtocol protocol, const string& message, const string& endpoint) 
{
    switch (protocol) {
        case TCP:
            cout << "Sending TCP message to " << endpoint << ": " << message << endl;
            break;
        case UDP:
            cout << "Sending UDP message to " << endpoint << ": " << message << endl;
            break;
        case HTTP:
            cout << "Sending HTTP message to " << endpoint << ": " << message << endl;
            break;
        default:
            cout << "Invalid network protocol!" << endl;
    }
}
int main() 
{
    string message = "Search now";
    string endpoint = "http://youtube.com";
    sendMessage(TCP, message);
    sendMessage(UDP, message);
    sendMessage(HTTP, message);
    sendMessage(TCP, message, endpoint);
    sendMessage(UDP, message, endpoint);
    sendMessage(HTTP, message, endpoint);
    return 0;
}