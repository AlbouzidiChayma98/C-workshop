#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
//quantité
int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
//produits alimentaires vendus
int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
//produit total des articles
int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

cout<<"\n\t Quantity of items we have";
cout<<"\n Rooms available:";
cin>>Qrooms;
cout<<"\n Quantity of pasta :";
cin>>Qpasta;
cout<<"\n Quantity of burger :";
cin>>Qburger;
cout<<"\n Quantity of noodles :";
cin>>Qnoodles;
cout<<"\n Quantity of shake :";
cin>>Qshake;
cout<<"\n Quantity of chicken :";
cin>>Qchicken;

m:
cout<<"\n\t\t\t please select from the menu options";
cout<<"\n\n1) Rooms";
cout<<"\n\n2) Pasta";
cout<<"\n\n3) Burger";
cout<<"\n\n4) Noodles";
cout<<"\n\n5) Shake";
cout<<"\n\n6) Chicken";
cout<<"\n\n7) Information regarding sales and collection";
cout<<"\n\n8) Exit";

cout<<"\n\n Please enter your choice! ";
cin>>choice;

switch (choice)
{
case 1: 
    cout<<"\n\n Enter the number of rooms you want";
    cin>>quant;
    if (Qrooms-Srooms>=quant)
    {
        Srooms=Srooms+quant;
        Total_rooms= Total_rooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you!";
    } 
    else
    cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
    break;

case 2: 
    cout<<"\n\n Enter pasta quantity";
    cin>>quant;
    if (Qpasta-Spasta>=quant)
    {
        Spasta=Spasta+quant;
        Total_pasta= Total_pasta+quant*250;
        cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
    } 
    else
    cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
    break;

    case 3: 
    cout<<"\n\n Enter burger quantity";
    cin>>quant;
    if (Qburger-Sburger>=quant)
    {
        Sburger=Sburger+quant;
        Total_burger= Total_burger+quant*120;
        cout<<"\n\n\t\t"<<quant<<"burger is the order!";
    } 
    else
    cout<<"\n\tOnly"<<Qburger-Sburger<<"burgers remaining in hotel";
    break;

    case 4: 
    cout<<"\n\n Enter noodles quantity";
    cin>>quant;
    if (Qnoodles-Snoodles>=quant)
    {
        Snoodles=Snoodles+quant;
        Total_noodles= Total_noodles+quant*140;
        cout<<"\n\n\t\t"<<quant<<"noodles is the order!";
    } 
    else
    cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
    break;

case 5: 
    cout<<"\n\n Enter shakes quantity";
    cin>>quant;
    if (Qshake-Sshake>=quant)
    {
        Sshake=Sshake+quant;
        Total_shake= Total_shake+quant*120;
        cout<<"\n\n\t\t"<<quant<<"shake is the order!";
    } 
    else
    cout<<"\n\tOnly"<<Qshake-Sshake<<"shakes remaining in hotel";
    break;

    case 6: 
    cout<<"\n\n Enter chicken quantity";
    cin>>quant;
    if (Qchicken-Schicken>=quant)
    {
        Schicken=Schicken+quant;
        Total_chicken= Total_chicken+quant*150;
        cout<<"\n\n\t\t"<<quant<<"chicken is the order!";
    } 
    else
    cout<<"\n\tOnly"<<Qchicken-Schicken<<"chickens remaining in hotel";
    break;

    case 7: 
    cout<<"\n\t\t Details of sales and collections ";
    cout<<"\n\n number of rooms we had :"<<Qrooms;
    cout<<"\n\n number of rooms we gave for rent :"<<Srooms;
    cout<<"\n\n remaining rooms :"<<Qrooms-Srooms;
    cout<<"\n\n total rooms collection for the day :"<<Total_rooms;

    cout<<"\n\n number of pastas we had :"<<Qpasta;
    cout<<"\n\n number of pastas we sold :"<<Spasta;
    cout<<"\n\n remaining pastas :"<<Qpasta-Spasta;
    cout<<"\n\n total pastas collection for the day :"<<Total_pasta;

    cout<<"\n\n number of burgers we had :"<<Qburger;
    cout<<"\n\n number of burgers we sold :"<<Sburger;
    cout<<"\n\n remaining burgers :"<<Qburger-Sburger;
    cout<<"\n\n total burgers collection for the day :"<<Total_burger;

    
    cout<<"\n\n number of noodles we had :"<<Qnoodles;
    cout<<"\n\n number of noodles we sold :"<<Snoodles;
    cout<<"\n\n remaining noodles :"<<Qnoodles-Snoodles;
    cout<<"\n\n total noodles collection for the day :"<<Total_noodles;

    
    cout<<"\n\n number of shakes we had :"<<Qshake;
    cout<<"\n\n number of shakes we sold :"<<Sshake;
    cout<<"\n\n remaining shakes :"<<Qshake-Sshake;
    cout<<"\n\n total shakes collection for the day :"<<Total_shake;

    
    cout<<"\n\n number of chickens we had :"<<Qchicken;
    cout<<"\n\n number of chickens we sold :"<<Schicken;
    cout<<"\n\n remaining chickens :"<<Qchicken-Schicken;
    cout<<"\n\n total chickens collection for the day :"<<Total_chicken;

    case 8:
        exit(0);
        default:
            cout<<"\n Please select the number above!";
}
goto m;
}