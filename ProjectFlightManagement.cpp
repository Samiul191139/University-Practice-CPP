#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

void clearScreen()
{
    system("CLS");
}

void mainMenu();
class Management
{
public:

    Management()
    {
        mainMenu();
    }
};


class details
{
public:
    static string name,gender;
    int phoneNo;
    int age;
    string address;
    static int c_id;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID :";
        cin>>c_id;
        cin.ignore();
        cout<<"\nEnter the Name        :";
        getline(cin, name);
        cout<<"\nEnter Age             :";
        cin>>age;
        cin.ignore();
        cout<<"\nEnter Address         :";
        getline(cin, address);
        cout<<"\nGender                :";
        cin>>gender;
        cout<<"\n\tYour details are safe with us.\n"<<endl;
    }
};

int details ::c_id;
string details :: name;
string details :: gender;

class registration
{
public:
    static int choice;
    int choice1;
    string Back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int i=0;i<6;i++)
        {
            cout<<(i+1)<<".  flight to "<<flightN[i]<<endl;
        }
        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country which you want to book the flight :";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"\n____________________Welcome to Dubai Emirates_____________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights\n"<<endl;
                cout<<"1.DUB - 498"<<endl;
                cout<<"\t08-07-2023  7:00AM  10hrs  BDT.89000"<<endl;
                cout<<"2.DUB - 658"<<endl;
                cout<<"\t09-07-2023  4:00AM  12hrs  BDT.70000"<<endl;
                cout<<"3.DUB - 530"<<endl;
                cout<<"\t08-07-2023  11:00PM  9hrs  BDT.99000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=89000;
                    cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=70000;
                    cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=99000;
                    cout<<"\nYou have successfully booked the flight DUB - 530"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }
                else
                {
                    cout<<"\nInvalid input,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"\nPress any key to go back to the main menu "<<endl;
                cin>>Back;

                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        case 2:
            {
                  cout<<"\n____________________Welcome to Canadian Airlines_____________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights\n"<<endl;
                cout<<"1.CA - 104"<<endl;
                cout<<"\t09-07-2023  2:00PM  13hrs  BDT.49000"<<endl;
                cout<<"2.CA - 357"<<endl;
                cout<<"\t12-07-2023  8:00AM  10hrs  BDT.54000"<<endl;
                cout<<"3.CA - 590"<<endl;
                cout<<"\t11-07-2023  1:00PM  8hrs  BDT.76000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=49000;
                    cout<<"\nYou have successfully booked the flight CA - 104"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=54000;
                    cout<<"\nYou have successfully booked the flight CA - 357"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=76000;
                    cout<<"\nYou have successfully booked the flight CA - 590"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }
                else
                {
                    cout<<"\nInvalid input,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"\nPress any key to go back to the main menu "<<endl;
                cin>>Back;

                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                 break;
            }

        case 3:
            {
                cout<<"\n____________________Welcome UK Airways_____________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights\n"<<endl;
                cout<<"1.UK - 798"<<endl;
                cout<<"\t10-08-2023  10:00AM  14hrs  BDT.44000"<<endl;
                cout<<"2.UK - 307"<<endl;
                cout<<"\t12-07-2023  9:00AM  9hrs  BDT.53000"<<endl;


                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=53000;
                    cout<<"\nYou have successfully booked the flight UK - 307"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }


                else
                {
                    cout<<"\nInvalid input,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"\nPress any key to go back to the main menu "<<endl;
                cin>>Back;

                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                 break;
            }
        case 4:
            {
                cout<<"\n____________________Welcome to US Airways_____________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights\n"<<endl;
                cout<<"1.US - 567"<<endl;
                cout<<"\t09-08-2023  9:00PM  20hrs  BDT.37000"<<endl;
                cout<<"2.US - 907"<<endl;
                cout<<"\t01-08-2023  6:00AM  17hrs  BDT.49000"<<endl;
                cout<<"3.US - 757"<<endl;
                cout<<"\t19-08-2023  7:00AM  21hrs  BDT.32000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=37000;
                    cout<<"\nYou have successfully booked the flight US - 567"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=49000;
                    cout<<"\nYou have successfully booked the flight US - 907"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=32000;
                    cout<<"\nYou have successfully booked the flight US - 757"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }
                else
                {
                    cout<<"\nInvalid input,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"\nPress any key to go back to the main menu "<<endl;
                cin>>Back;

                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                 break;
            }
        case 5:
            {
                 cout<<"\n____________________Welcome to Australian Airlines_____________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights\n"<<endl;
                cout<<"1.AS - 697"<<endl;
                cout<<"\t09-08-2023  9:00PM  17hrs  BDT.70000"<<endl;
                cout<<"2.AS - 158"<<endl;
                cout<<"\t01-08-2023  6:00AM  14hrs  BDT.79000"<<endl;
                cout<<"3.AS - 798"<<endl;
                cout<<"\t19-08-2023  7:00AM  22hrs  BDT.58000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=70000;
                    cout<<"\nYou have successfully booked the flight AS - 697"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=79000;
                    cout<<"\nYou have successfully booked the flight AS - 158"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=58000;
                    cout<<"\nYou have successfully booked the flight AS - 798"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }
                else
                {
                    cout<<"\nInvalid input,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"\nPress any key to go back to the main menu "<<endl;
                cin>>Back;

                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                 break;
            }
        case 6:
            {
                cout<<"\n____________________Welcome to European Airlines_____________________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights\n"<<endl;
                cout<<"1.EU - 898"<<endl;
                cout<<"\t02-07-2023  9:00PM  18hrs  BDT.36000"<<endl;
                cout<<"2.EU - 958"<<endl;
                cout<<"\t01-08-2023  6:00AM  15hrs  BDT.38000"<<endl;
                cout<<"3.EU - 698"<<endl;
                cout<<"\t19-08-2023  7:00AM  20hrs  BDT.31000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=36000;
                    cout<<"\nYou have successfully booked the flight EU - 898"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=38000;
                    cout<<"\nYou have successfully booked the flight EU - 958"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=31000;
                    cout<<"\nYou have successfully booked the flight EU - 698"<<endl;
                    cout<<"\nYou can go back to menu and take your ticket"<<endl;
                }
                else
                {
                    cout<<"\nInvalid input,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"\nPress any key to go back to the main menu "<<endl;
                cin>>Back;

             mainMenu();

                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                 break;
            }
        default :
            {
                cout<<"\nInvalid input,shifting you to the main menu !"<<endl;
                mainMenu();
                break;
            }

        }

    }
};

float registration ::charges;
int registration::choice;

class ticket : public registration,details
{
public:
    void Bill()
    {
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"___________________ABC Airlines___________________"<<endl;
            outf<<"____________________Ticket_________________________"<<endl;
            outf<<"___________________________________________________"<<endl;

            outf<<"Customer ID     :"<<details::c_id<<endl;
            outf<<"Customer Name   :"<<details::name<<endl;
            outf<<"Customer Gender :"<<details::gender<<endl;
            outf<<"\tDescription\n"<<endl;

            if(registration::choice==1)
            {
                if(Back=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                };
            }
            else if(registration::choice==2)
            {
                destination="Canada\n";
            }
            else if(registration::choice==3)
            {
                destination="UK\n";
            }
            else if(registration::choice==4)
            {
                destination="USA\n";
            }
            else if(registration::choice==5)
            {
                destination="Australia\n";
            }
            else if(registration::choice==6)
            {
                destination="Europe\n";
            }

            outf<<"Destination :\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<registration::charges<<endl;

        }
        outf.close();
    }

    void disBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File error!!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();

    }

};

void mainMenu()
{
    clearScreen();
    int Lchoice;
    string BAck;
    cout<<endl;
    cout<<"\t               ABC Airlines \n"<<endl;
    cout<<"\t ________________Main Menu________________"<<endl;

    cout<<"\t________________________________________________ "<<endl;

    cout<<"\t|\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration     \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges      \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                     \t|"<<endl;
    cout<<"\t|_______________________________________________|"<<endl;

    cout<<"\nEnter the Choice : ";
    cin>>Lchoice;

    details d;
    registration r;
    ticket t;

    switch(Lchoice)
    {
    case 1:
        {
            cout<<"\n\t\t__________Customers___________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to the Main menu ";
            cin>>BAck;

            if(BAck=="1")
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

    case 2:
        {
            cout<<"__________Book a fight using this system__________\n"<<endl;
            r.flights();
            break;

        }
    case 3:
        {
            cout<<"________Get your ticket_________\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed,you can collect it\n"<<endl;
            cout<<"Press 1 to display your ticket\t";

            cin>>BAck;

            if(BAck=="1")
            {
                t.disBill();
                cout<<"Presss any key to go back to the Main manu"<<endl;
                cin>>BAck;
                if(BAck=="1")
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

            }
            else
            {
                mainMenu();
            }
            break;
        }
    case 4:
        {
            cout<<"\n\n\t_________THANK YOU___________"<<endl;
            break;
        }
    default :
        {
            cout<<"Invalid input, Please try again\n"<<endl;
            mainMenu();
            break;
        }
    }

}
int main()
{

    Management mobj;




    return 0;
}