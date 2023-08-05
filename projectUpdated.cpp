#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Forward declarations
class details;
class registration;

void mainMenu();

class details
{
public:
    static string name, gender;
    int phoneNo;
    int age;
    string address;
    static int c_id;

    void information()
    {
        cout << "\nEnter the customer ID: ";
        cin >> c_id;
        cin.ignore();
        cout << "Enter the Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Gender: ";
        cin >> gender;
        cout << "\nYour details are safe with us.\n" << endl;
    }
};

int details::c_id;
string details::name;
string details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    static float charges;

    void flights()
    {
        string flightN[] = { "Dubai", "Canada", "UK", "USA", "Australia", "Europe" };
        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << ". Flight to " << flightN[i] << endl;
        }
        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country which you want to book the flight: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            {
                cout << "\n_______Welcome to Dubai Emirates________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights\n" << endl;
                cout << "1. DUB - 498" << endl;
                cout << "\t08-07-2023  7:00AM  10hrs  Rs.89000" << endl;
                cout << "2. DUB - 658" << endl;
                cout << "\t09-07-2023  4:00AM  12hrs  Rs.70000" << endl;
                cout << "3. DUB - 530" << endl;
                cout << "\t08-07-2023  11:00PM  9hrs  Rs.99000" << endl;
                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 >= 1 && choice1 <= 3)
                {
                    charges = (choice1 == 1) ? 89000 : (choice1 == 2) ? 70000 : 99000;
                    cout << "\nYou have successfully booked the flight DUB - " << (choice1 == 1 ? "498" : (choice1 == 2 ? "658" : "530")) << endl;
                    cout << "You can go back to the menu and take your ticket." << endl;
                }
                else
                {
                    cout << "\nInvalid input, shifting to the previous menu" << endl;
                    flights();
                }
                break;
            }
        // Similar cases for other flight options
        default:
            {
                cout << "\nInvalid input, shifting you to the main menu!" << endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, public details
{
public:
    void bill()
    {
        string destination;
        ofstream outf("records.txt");
        if (outf.is_open())
        {
            outf << "______ABC Airlines______" << endl;
            outf << "_______Ticket________" << endl;
            outf << "_________________" << endl;

            outf << "Customer ID     :" << details::c_id << endl;
            outf << "Customer Name   :" << details::name << endl;
            outf << "Customer Gender :" << details::gender << endl;
            outf << "\tDescription\n" << endl;

            switch (registration::choice)
            {
            case 1:
                destination = "Dubai";
                break;
            // Similar cases for other flight options
            default:
                destination = "Unknown";
                break;
            }
            outf << "Destination :\t\t" << destination << endl;
            outf << "Flight cost :\t\t" << registration::charges << endl;
            outf.close();
        }
        else
        {
            cout << "Error: Unable to create ticket!" << endl;
        }
    }

    void displayBill()
    {
        ifstream ifs("records.txt");
        if (ifs.is_open())
        {
            string line;
            while (getline(ifs, line))
            {
                cout << line << endl;
            }
            ifs.close();
        }
        else
        {
            cout << "Error: Unable to read ticket!" << endl;
        }
    }
};

void mainMenu()
{
    int Lchoice;
    cout << "\n\t               ABC Airlines \n" << endl;
    cout << "\t _____Main Menu_____" << endl;
    cout << "\t__________________ " << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t|\t Press 1 to add Customer Details \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration   \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges    \t|" << endl;
    cout << "\t|\t Press 4 to Exit                   \t|" << endl;
    cout << "\t|_________________|" << endl;
    cout << "\nEnter the Choice : ";
    cin >> Lchoice;

    details d;
    registration r;
    ticket t;

    switch (Lchoice)
    {
    case 1:
        {
            cout << "\n\t\t_____Customers____\n" << endl;
            d.information();
            cout << "Press any key to go back to the Main menu ";
            cin.ignore();
            cin.get(); // Pause to show message
            mainMenu();
            break;
        }
    case 2:
        {
            cout << "___Book a flight using this system___\n" << endl;
            r.flights();
            break;
        }
    case 3:
        {
            cout << "___Get your ticket____\n" << endl;
            t.bill();
            cout << "Your ticket is printed. You are now eligible to collect it.\n" << endl;
            cout << "Press any key to display your ticket";
            cin.ignore();
            cin.get(); // Pause to show message
            t.displayBill();
            cout << "Press any key to go back to the Main menu" << endl;
            cin.ignore();
            cin.get(); // Pause to show message
            mainMenu();
            break;
        }
    case 4:
        {
            cout << "\n\n\t____THANK YOU____" << endl;
            break;
        }
    default:
        {
            cout << "Invalid input, Please try again\n" << endl;
            mainMenu();
            break;
        }
    }
}

int main()
{
    mainMenu();
    return 0;
}