#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class bank
{
    char name[100],address[100],y;
    int balance;

public:
    void open_acc();
    void deposite_money();
    void withdraw_money();
    void display_acc();

};

void bank :: open_acc()
{
    cout << "Enter your full name : ";
    cin.ignore();
    cin.getline(name,100);
    cout << "Enter your address : ";
    cin.ignore();
    cin.getline(address,50);
    cout << "what type of account you want to open saving or current (s/c) : " ;
    cin >>y;
    cout << "enter amount to be doposite :: ";
    cin >> balance;
    cout<<"your account is created"<<endl;
}

void bank :: deposite_money() {
    int a;
    cout << "enter the amount you deposite :: ";
    cin >> a;
    balance = balance + a;
    cout <<"total amount you deposite :: \t" << balance;
}

void bank :: display_acc() {
    cout << "your full name :   "<< name <<endl;
    cout << "your address  :  "<< address <<endl;
    cout <<"type of account you open :: "<<y <<endl;
    cout <<"amount you deposite :: " <<balance <<endl;
}

void bank :: withdraw_money() {
    float amount;
    cout <<"enter amount to withdraw :: ";
    cin>>amount;
    if(amount <= balance){
    balance = balance - amount;
    cout <<"now total amount is left :: "<<balance<<endl;

    }
    else{
        cout<<"insufficient balace : ";
        cout<<"your current balance is : "<<balance<<endl;
    }
}


int main()
{
    bank obj;
    int ch;
    do
    {
    cout<<"select the option::"<<endl;
    cout<< "\n1) OPEN ACCOUNT" <<endl;
    cout<< "2) DEPOSITE MONEY" <<endl;
    cout<< "3) WITHDRAW MONDEY" <<endl;
    cout<< "4) DISPLAY ACCOUNT" <<endl;
    cout<< "5) EXIT" <<endl;

    cout<<endl;
    cin >> ch;
    switch(ch)
    {
     case 1:

     cout <<"\tOPEN ACCOUNT" << endl;
     obj.open_acc();
     break;

     case 2:
     cout <<"\tDEPOSITE MONEY" << endl;
     obj.deposite_money();
     break;

     case 3:
     cout <<"\tWITHDRAW MONDEY" <<endl;
     obj.withdraw_money();
     break;

     case 4:
     cout << "\tDISPLAY ACCOUNT"<< endl;
     obj.display_acc();
     break;

     case 5:
        if(ch == 5){
            break;
        }

     default:
        cout << "this is not exits try again" <<endl;

    }
    int x;
    cout << "\ndo you want to continue press 'Y' press 'N' for exit" <<endl;


    x = getch();

    if( x == 'n' || x == 'N')
        //exit(0);
        break;

    }
    while(true);

    return 0;
}
