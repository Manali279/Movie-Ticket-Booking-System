#include<iostream>
using namespace std;
class theatre
{
string mname;
int snum,sno,value,choice,mno;
int seat;
string se;
string time;
public:
void sdisplay()
{
cout<<"                                               WELCOME TO CITY PRIDE"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"SCHEDULE OF 23 SEPTEMBER 2019:"<<endl;
cout<<""<<endl;
cout<<"MOVIE NAME\t\tGOLD\t\t\tSILVER\t\t\tBRONZE\t\tSHOW TIME\t\tSCREEN NO."<<endl;
cout<<""<<endl;
cout<<"Uri\t\t\tRs.300\t\t\tRs.200\t\t\tRs.180\t\t11.00 AM\t\t01"<<endl;
cout<<"Avengers\t\tRs.300\t\t\tRs.200\t\t\tRs.180\t\t1.00 PM\t\t\t02"<<endl;
cout<<"Hobbs and Shaws\t\tRs.300\t\t\tRs.200\t\t\tRs.180\t\t3.00 PM\t\t\t01"<<endl;
cout<<"Fast and Furious\tRs.300\t\t\tRs.200\t\t\tRs.180\t\t6.00 PM\t\t\t02"<<endl;
}
void tdisplay(int value)
{
cout<<"    MOVIE TICKET"<<endl;
cout<<"---------------------"<<endl;
cout<<"Movie Name    :"<<mname<<endl;
cout<<"Date          :"<<"23 September 2019"<<endl;
cout<<"Show time     :"<<time<<endl;
cout<<"Type of seat  :"<<se<<endl;
cout<<"Seat nos.     :"<<sno<<endl;
cout<<"Total cost    :"<<"Rs."<<value<<endl;

}

void calcu()
{

	int value;
cout<<"Choose your movie\n1)Uri\n2)Avengers\n3)Hobbs and Shaw\n4)Fast and Furious="<<endl;
cin>>mno;
if(mno==1)
mname="Uri";
else if(mno==2)
mname="Avengers";
else if(mno==3)
mname="Hobbs and Shaw";
else
mname="Fast and Furious";
if(mno==1)
time="11.00 AM";
else if(mno==2)
time="1.00 PM";
else if(mno==3)
time="3.00 PM";
else
time="6.00 PM";

cout<<"Enter the no. of seats="<<endl;
cin>>sno;
cout<<"Enter the type of seat\n1)Gold\n2)Silver\n3)Bronze="<<endl;
cin>>seat;
if(seat==1)
se="Gold";
else if(seat==2)
se="Silver";
else
se="Bronze";
    switch(seat)
    {
        case 1:
             value = sno*300;
            cout << "\nTotal fare: Rs" << value << "/-" << endl;
            break;

        case 2:
             value = sno*200;
            cout << "\nTotal fare: Rs" << value  << "/-" << endl;
            break;

        case 3:
            value = sno*180;
            cout << "\nTotal fare: Rs" << value << "/-" << endl;
            break;

    default:
        cout << "Wrong choice entered" << endl;

    }

	
	 cout << "\nEnter the way of payment" << endl;
    cout << "1- Cash" << "\n2- Debit card" << "\n3- Google pay" << endl;
    int pay;
    cin >> pay;

	  switch(pay)
    {
        case 1:
            cout << "Please pay the precise amount" << endl;
          /* cout << "        \n\n***RECEIPT***" << endl;
            if(choice==1)
                cout << "\nMovie: URI" ;
            else if(choice==2)
                cout << "\nMovie: HOBBES AND SHAW" ;
	    else if(choice==3)
		cout << "\nMovie: Fast And Furious";
            else
                 cout << "\nMovie: Avengers" ;*/

            
            tdisplay(value);

            break;

        case 2:

            cout << "Enter your card details"<< endl;
            long cnum;
            cout << "Enter your card number: " ;
            cin >> cnum;
            int mm,yy;
            cout << "Date of expiry(mm/yy):";
            cin >> mm >> yy;
            
            
            cout << "\nCard number: " << cnum << endl;
            cout << "Expiry(MM/YY): " << mm << "/" << yy << endl;
            tdisplay(value);

            break;

        case 3: 
            cout << "        \n\n***RECEIPT***" << endl;

            if(choice==1)
                cout << "\nMovie: URI" << endl;
            else if(choice==2)
                cout << "\nMovie: HOBBES AND SHAW" << endl;
 	    else if(choice==3)
		cout << "\nMovie: Fast And Furious";
            else
                 cout << "\nMovie: Avengers: Endgame" << endl;

             
            tdisplay(value);
            break;

    default:
        cout << "\nEnter the choice to pay" << endl;

    }

 }   
};
int main()
{
theatre t;
t.sdisplay();
cout<<""<<endl;
t.calcu();
return 0;
}
