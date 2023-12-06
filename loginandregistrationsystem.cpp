#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void Login();
void Registration();
void Forgot();
void Exit();

int main ()
{
int c;
cout<<"\t\t\t________________________________________\n\n\n";
cout<<"\t\t\t          Welcome to the login page     \n\n\n";
cout<<"\t\t\t_________________MENU___________________\n\n\n";
cout<<"                                               \n\n";
cout<<"\tPress 1 to Login                         "<<endl;
cout<<"\tPress 2 to Register                      "<<endl;
cout<<"\tPress 3 if you Forgot your password      "<<endl;
cout<<"\tPress 4 to Exit                          "<<endl;
cout<<"\n\t\t\t Please enter your choice :";
cin>>c;
cout<<endl;

switch (c)
{
case 1:
    Login();
    break;

case 2:
    Registration();
    break;

case 3:
    Forgot();
    break;

case 4:
    cout<<"\t\t\t Thank you! \n\n";
    break;

default:
    system ("cls");
    cout<<"\t\t\t Please select from the options given above!\n"<<endl;
    main() ;
}

}

void Login()
{
    int count;
    string userid, password, id, pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and passwoed :"<<endl;
    cout<<"\t\t\t USERNAME";
    cin>>userid;
    cout<<"\t\t\t PASSWORD";
    cin>>password;

    ifstream input("records.txt");
    while (input>>id>>pass)
    {
        if (id==userid && pass==password)
        count=1;
        system("cls");
    }
    input.close();

    if (count==1)
    {
        cout<<userid<<"\n Your login is successfull \n Thanks for loging in!\n";
        main();
    }
    else
    {
        cout<<"\n Login error \n Please check your username and password\n";
        main();
    }
    
}

void Registration()
{
    string ruserid, rpassword, rid, rpass;
    system("cls");
    cout<<"\t\t\t Enter the USERNAME";
    cin>>ruserid;
    cout<<"\t\t\t Enter the PASSWORD";
    cin>>rpassword;

    ofstream fl("records.txt", ios::app);
    fl<<ruserid<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is successfull\n";
    main();
}

void Forgot()
{
    int option;
    int count=0;
    string suserid, sid, spass;

    system("cls");
    cout<<"\t\t\t You forgot the password? No worries\n";
    cout<<"Press 1 to search your id by username"<<endl;
    cout<<"Press 2 to go back to the menu"<<endl;
    cout<<"\t\t\t Enter you choice:\n";
    cin>>option;

    ifstream f2("records.txt");

    switch (option)
    {
    case 1:
        
        cout<<"\n\t\t Enter the username which you remembered:";
        cin>>suserid;

        while (f2 >> sid >> spass)
        {
            if (sid==suserid)
            {
                count=1;
                break;
            }
        }
        f2.close();

        if (count==1)
        {
            cout<<"\n\n Your account is found\n";
            cout<<"\n\n Your PASSWORD is :"<<spass;

        }
        else
        {
            cout<<"\n\t Sorry! Your account is not found\n";
            main();
        }
        
        break;

    case 2:
         main();
        break;
       
    default:
        cout<<"\t\t\t Wrong choice! Please try again"<<endl;
        main();
    }


}