#include<iostream>
using namespace std;
int main()
{
    int u_input;
    int amount=0;
    int count=0;
    int r;
    int c;
    int b;
    r=0;
    c=0;
    b=0;
    int choice;
    cout<<"welcome to CAR PARKING PROJECT"<<endl;
    cout<<"********************"<<endl;
    cout<<"parking number of vehicles limits-50"<<endl;
    cout<<"rikshow parking charge-100"<<endl;
    cout<<"car parking charge-200"<<endl;
    cout<<"bus parking charge-300"<<endl;
    cout<<"********************"<<endl;

    while (true)
    {
            // menu
        cout<<"..............choose our service...................."<<endl;
        cout<<"press 1 for rikshaw"<<endl;
        cout<<"press 2 for car"<<endl;
        cout<<"press 3 for bus"<<endl;
        cout<<"press 4 for show record"<<endl;
        cout<<"press 5 for delete record"<<endl;
        cout<<"******************"<<endl;
        cin>>u_input;


    if(u_input==1)
    {
        if(count<=50)
        {
            r++;
            amount=amount+100;
            count=count+1;
            cout<<"******************"<<endl;
            cout<<"a new risckshaw has parked"<<endl;
            cout<<"total NO. OF VEHICELS=="<<count<<endl;
            cout<<"now free space="<<50-(r+c+b)<<endl;
            cout<<"******************"<<endl;

        }
        else
        {
            cout<<"PARKING IS FULL "<<endl;
        }
    }
    else if(u_input==2)
    {
        if(count<=50)
        {
            c++;
             amount=amount+200;
            count=count+1;
             cout<<"******************"<<endl;
            cout<<"a new car has parked"<<endl;
            cout<<"total NO. OF VEHICELS=="<<count<<endl;
            cout<<"now free space="<<50-(r+c+b)<<endl;
            cout<<"******************"<<endl;

        }
         else
        {
            cout<<"PARKING IS FULL "<<endl;
        }
    }
    else if(u_input==3)
     {
        if(count<=50)
        {
            b++;
             amount=amount+300;
            count=count+1;
            cout<<"******************"<<endl;
            cout<<"a new bus has parked"<<endl;
            cout<<"total NO. OF VEHICELS=="<<count<<endl;
            cout<<"now free space="<<50-(r+c+b)<<endl;
            cout<<"******************"<<endl;

        }
         else
        {
            cout<<"PARKING IS FULL "<<endl;
        }
    }
    else if(u_input==4)
    {
        cout<<"******************"<<endl;
        cout<<"TOTTAL AMOUNT:="<<amount<<endl;
        cout<<"TOTTAL NO. OF VEICHLES PARKED:="<<count<<endl;
        cout<<" TOTTAL NO. OF RICKSHAW :- "<<r<<endl;
        cout<<"TOTTAL NO. OF CARS :- "<<c<<endl;
        cout<<"TOTTAl NO. OF BUS :- "<<b<<endl;
        cout<<"******************"<<endl;


    }
    else if(u_input==5)
    {
        amount=0;
        count=0;
        r=0;
        c=0;
        b=0;
         cout<<"******************"<<endl;
          cout<<"ALL RECORDS DELETED"<<endl;
          cout<<"******************"<<endl;


    }

    else
    {
         cout<<" ENTER A VALID CHOICE :( PLEASE CHOOSE FROM 1,2,3,4,5  :)"<<endl;
    }

    return 0;
    }
}
