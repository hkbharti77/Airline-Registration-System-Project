#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:

      Management()
      {
        mainMenu();
      }
};

class Details
{
    public:
    static string name, gender;
    int phoneNo;
    int age;
    string address;
    static int cID;
    char arr[100];

    void information()
    {
        cout<<"\n\t\tEnter your customer ID : ";
        cin>>cID;
        cout<<"\n\t\tEnter your name : ";
        cin>>name;
        cout<<"\n\t\tEnter your gender : ";
        cin>>gender;
        cout<<"\n\t\tEnter your age : ";
        cin>>age;
        cout<<"\n\t\tEnter your phone number : ";
        cin>>phoneNo;
        cout<<"\n\t\tEnter your address : ";
        cin>>address;

        cout<<"your details are saved with us\n"<<endl;

    }

};

int Details::cID;
string Details::name;
string Details::gender;


class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flight()
    {
        string flightN[]= {"Dubai", "Canada", "UK", "USA","Australia", "Europe"};
        for(int a =0;a<6;a++){
            cout<<a+1<<".flight to"<<flightN[a]<<endl;
        }

        cout<<"\nWelcome to the AirLines!"<<endl;
        cout<<"Press the number of the country of which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
            case 1:
                {
                    cout<<"______________Welcome to Dubai Emirates___________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!" <<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1.DUB - 498"<<endl;
                    cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;

                    cout<<"1.DUB - 658"<<endl;
                    cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;

                    cout<<"1.DUB - 498"<<endl;
                    cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1 == 1)
                    {
                        charges = 14000;
                        cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }

                    else if(choice1 == 2)
                    {
                        charges = 10000;
                        cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }

                    else if(choice1 == 3)
                    {
                        charges = 9000;
                        cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\nInvalid input, shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any key to go the main menu:"<<endl;
                    cin>>back;

                    if(back == 1){
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }

                }

            case 2:
                {
                    cout<<"______________Welcome to Canada Airlines___________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!" <<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1.CAN - 498"<<endl;
                    cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;

                    cout<<"1.CAN - 658"<<endl;
                    cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;

                    cout<<"1.CAN - 498"<<endl;
                    cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1 == 1)
                    {
                        charges = 14000;
                        cout<<"\nYou have successfully booked the flight CAN - 498"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }

                    else if(choice1 == 2)
                    {
                        charges = 10000;
                        cout<<"\nYou have successfully booked the flight CAN - 658"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }

                    else if(choice1 == 3)
                    {
                        charges = 9000;
                        cout<<"\nYou have successfully booked the flight CAN - 498"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\nInvalid input, shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any key to go the main menu:"<<endl;
                    cin>>back;

                    if(back == 1){
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }


                }

            case 3:
                {
                    cout<<"______________Welcome to USA Airlines___________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!" <<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1.USA - 498"<<endl;
                    cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;

                    cout<<"1.USA - 658"<<endl;
                    cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;

                    cout<<"1.USA - 498"<<endl;
                    cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;

                    cout<<"\nSelect the flight you want to book :";
                    cin>>choice1;

                    if(choice1 == 1)
                    {
                        charges = 14000;
                        cout<<"\nYou have successfully booked the flight USA - 498"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }

                    else if(choice1 == 2)
                    {
                        charges = 10000;
                        cout<<"\nYou have successfully booked the flight USA - 658"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }

                    else if(choice1 == 3)
                    {
                        charges = 9000;
                        cout<<"\nYou have successfully booked the flight USA - 498"<<endl;
                        cout<<"You can go back to menu abd take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"\nInvalid input, shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any key to go the main menu:"<<endl;
                    cin>>back;

                    if(back == 1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }


                }

            default:
                {
                    cout<<"\nInvalid input, shifting to the previous menu"<<endl;
                    flight();
                }
        }

    }

};

float registration :: charges;

int registration :: choice;

class ticket : public registration, Details
{
    public:
    void Bill(){
        string destination = "";
        ofstream outf("record.txt");
        {
            outf<<"_________________AIR AirLines__________"<<endl;
            outf<<"_________________Ticket_________________"<<endl;
            outf<<"_________________________________________"<<endl;

            outf<<"Customer ID : "<<Details::cID<<endl;
            outf<<"Customer Name : "<<Details::name<<endl;
            outf<<"Customer Gender : "<<Details::gender<<endl;
            outf<<"Customer Age : "<<Details::age<<endl;
            outf<<"Customer Phone Number : "<<Details::phoneNo<<endl;
            outf<<"Customer Address : "<<Details::address<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration :: choice == 1)
            {
                destination = "DUB";
                outf<<"Flight : DUB - 498"<<endl;
            }

            else if(registration :: choice == 2)
            {
                destination = "DEL";
                outf<<"Flight : DEL - 658"<<endl;
            }

            else if(registration :: choice == 3)
            {
                destination = "CAN";
                outf<<"Flight : CAN - 498"<<endl;
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Charges\t\t"<<registration :: charges<<endl;

        }

        outf.close();
    }

    void disBill(){
        ifstream ifs("record.txt");
        {
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof()){
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }

        ifs.close();
        
       
    }


};


void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t          AIR Airlines \n"<<endl;
    cout<<"\t____________________Main Menu______________"<<endl;

    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;


    cout<<"\t|\t Press 1 to add the Customer Details  \t|"<<endl;
    cout<<"\t|\t Press 2 to add the Flight Registration    \t|"<<endl;
    cout<<"\t|\t Press 3  for Ticket and Charges  \t|"<<endl;
    cout<<"\t|\t Press 4 to exit \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t_____________________________________________"<<endl;

    cout<<"Enter your choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
             {
                cout<<"___________________Customers____________\n"<<endl;
                d.information();
                cout<<"Press any key to go back to Main menu ";
                cin>>back;

                if(back == 1){
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
            cout<<"___________________Book a flight using this system____________\n"<<endl;
            r.flight();
            break;
        }

        case 3:
            {
                cout<<"___________________GET YOUR TICKET____________\n"<<endl;
                t.Bill();

                cout<<"Your ticket is printed, you can collect it \n"<<endl;
                cout<<"Press 1 to display your ticket";

                cin>>back;

                if(back == 1){
                    t.disBill();

                    cout<<"Press any key to go back to Main menu ";
                    cin>>back;

                    if(back == 1){
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
                cout<<"\n\n\t_____________Thank-You___________"<<endl;
                break;
            }

        default:
            {
                cout<<"Invalid input, Please try again! \n"<<endl;
                mainMenu();
                break;
            }
                }

            }


int main(){
    Management Mobj;

    return 0;

}