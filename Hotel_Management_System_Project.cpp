#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int quant;
    int choice;
    // Quantity
    int Qroom = 0, Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    // Sold
    int Sroom = 0, Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    // Total
    int Troom = 0, Tpasta=0,Tburger=0,Tnoodles=0,Tshake=0,Tchicken=0;

    cout<<"\n\t Quantity of item we have\n";
    cout<<"\n Rooms available:";
    cin>>Qroom;
    cout<<"\n Quantity of Pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger:";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shake:";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken_roll:";
    cin>>Qchicken;

    m:
    cout<<"\n\n\n\t\t\tPlease select from the menu options";
    cout<<"\n\t\t\t-----------------------------------";
    cout<<"\n\n\t\t1) Rooms";
    cout<<"\n\t\t2) Pasta";
    cout<<"\n\t\t3) Burger";
    cout<<"\n\t\t4) Noodles";
    cout<<"\n\t\t5) Shake";
    cout<<"\n\t\t6) Chicken_roll";
    cout<<"\n\t\t7) Information regarding sales and collection";
    cout<<"\n\t\t8) Exit";

    cout<<"\n\n\t\tPlease enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:{
            cout<<"\n\nEnter number of room/rooms you want: ";
            cin>>quant;
            if(Qroom-Sroom>=quant){
                Sroom = Sroom+quant;
                Troom = Troom+quant*1200;
                cout<<"\t\t\n\n"<<quant<<"room/rooms have been allocated to you!";
            }
            else
                cout<<"\n\tSorry, Only "<<Qroom-Sroom<<" Rooms remaining in hotel. \n";
            break;
        }
        case 2:{
            cout<<"\n\nEnter Pasta quantity : ";
            cin>>quant;
            if(Qpasta-Spasta>=quant){
                Spasta = Sroom+quant;
                Tpasta = Tpasta+quant*250;
                cout<<"\t\t\n\n"<<quant<<" Pasta is ordered!";
            }
            else
                cout<<"\n\tSorry, Only "<<Qpasta-Spasta<<" Pasta remaining in hotel. \n";
            break;
        }
        case 3:{
            cout<<"\n\nEnter Burger quantity : ";
            cin>>quant;
            if(Qburger-Sburger>=quant){
                Sburger = Sburger+quant;
                Tburger = Tburger+quant*120;
                cout<<"\t\t\n\n"<<quant<<" Burger is ordered!";
            }
            else{
                cout<<"\n\tSorry, Only "<<Qburger-Sburger<<" Burger remaining in hotel. \n";
            }
            break;
        }
        case 4:{
            cout<<"\n\nEnter Noodles quantity : ";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant){
                Snoodles = Snoodles+quant;
                Tnoodles = Tnoodles+quant*140;
                cout<<"\t\t\n\n"<<quant<<" Noodles is ordered!";
            }
            else{
                cout<<"\n\tSorry, Only "<<Qnoodles-Snoodles<<" Noodles remaining in hotel. \n";
            }
            break;
        }
        case 5:{
            cout<<"\n\nEnter Shakes quantity : ";
            cin>>quant;
            if(Qshake-Sshake>=quant){
                Sshake = Sshake+quant;
                Tshake = Tshake+quant*120;
                cout<<"\t\t\n\n"<<quant<<" Shake is ordered!";
            }
            else{
                cout<<"\n\tSorry, Only "<<Qshake-Sshake<<" Shake remaining in hotel. \n";
            }
            break;
        }
        case 6:{
            cout<<"\n\nEnter Chicken_rolls quantity : ";
            cin>>quant;
            if(Qchicken-Schicken>=quant){
                Schicken = Schicken+quant;
                Tchicken = Tchicken+quant*150;
                cout<<"\t\t\n\n"<<quant<<" Chicken_roll is ordered!";
            }
            else{
                cout<<"\n\tSorry, Only "<<Qchicken-Schicken<<" Chicken_roll remaining in hotel. \n";
            }
            break;
        }
        case 7:
            cout<<"\n\t\tDetails of Sales and Collections.";
            cout<<"\n\nNumber of rooms we had: "<<Qroom;
            cout<<"\n\nNumber of rooms we gave for rent: "<<Sroom;
            cout<<"\n\nRemaining rooms: "<<Qroom-Sroom;
            cout<<"\n\nTotal rooms collection for the day: "<<Troom;

            cout<<"\n\nNumber of Pastas we had: "<<Qpasta;
            cout<<"\n\nNumber of Pastas we sold: "<<Spasta;
            cout<<"\n\nRemaining Pastas: "<<Qpasta-Spasta;
            cout<<"\n\nTotal Pasta collection for the day: "<<Tpasta;

            cout<<"\n\nNumber of Burger we had: "<<Qburger;
            cout<<"\n\nNumber of Burger we sold: "<<Sburger;
            cout<<"\n\nRemaining Burger: "<<Qburger-Sburger;
            cout<<"\n\nTotal Burger collection for the day: "<<Tburger;

            cout<<"\n\nNumber of Noodles we had: "<<Qnoodles;
            cout<<"\n\nNumber of Noodles we sold: "<<Snoodles;
            cout<<"\n\nRemaining Noodles: "<<Qnoodles-Snoodles;
            cout<<"\n\nTotal Noodles collection for the day: "<<Tnoodles;

            cout<<"\n\nNumber of Shake we had: "<<Qshake;
            cout<<"\n\nNumber of Shake we sold: "<<Sshake;
            cout<<"\n\nRemaining Shake: "<<Qshake-Sshake;
            cout<<"\n\nTotal Shake collection for the day: "<<Tshake;

            cout<<"\n\nNumber of Chicken_rolls we had: "<<Qchicken;
            cout<<"\n\nNumber of Chicken_roll we sold: "<<Schicken;
            cout<<"\n\nRemaining Chicken_roll: "<<Qchicken-Schicken;
            cout<<"\n\nTotal Chicken_roll collection for the day: "<<Tchicken;

            cout<<"\n\nTotal collection of the day: "<<Troom+Tpasta+Tburger+Tnoodles+Tshake+Tchicken;
            break;

        case 8:
            exit(0);

        default:
            cout<<"\n\nPlease select the numbers mentioned above!\n\n";
    }
    goto m;

    return 0;
}
