#include<iostream>

using namespace std;


int fact(long a)
        {
            int sum=1;
            for(long i=1;i<=a;i++)
             {
                sum = sum*i;
             }
            return sum;
        }

int main()
{
      cout<<"               =====================================================================    \n";
      cout<<"              |                                      n                              |   \n";
      cout<<"              |                     Program to print  C                             |   \n";
      cout<<"              |                                         r                           |   \n";
      cout<<"               =====================================================================    \n";
      cout<<"\n\n______________________________________________________________________________________________________________________\n";
      cout<<"!                             !!!!  NOTE   !!!!   [n]  MUST BE GREATER THAN [r]                                           !\n";
      cout<<"!_____________________________________________________________________________________________________________________!\n\n\n";



    int n,r;
hello:
    cout<<"ENTER (n) :- ";
        while(!(cin>>n)|| (n<0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"!!!!   INVALID INPUT   !!!! \n ENTER n AGAIN:-- ";
        }

    cout<<"ENTER (r) :- ";
        while(!(cin>>r)|| (r<0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"!!!!  INVALID INPUT   !!!! \n  ENTER r AGAIN:-- ";
        }

    if(n>=r)
    {
        int a,b,c,d,x;
     a = fact(n);
     b = fact(r);
     c = fact(n-r);



     d = b*c;
     x = a/d;

    cout<<"\n\n";
    cout<<"   |============================|\n";
    cout<<"   |      "<<n<<"                     |\n";
    cout<<"            C    =  "<<x<<"          \n";
    cout<<"   |           "<<r  <<"                |\n";
    cout<<"   |============================|\n";

    }
    else
    {
          cin.clear();
	      cin.ignore(100,'\n');
	      cout<<"\n  !!!!!!  INVALID INPUT   !!!!!!\n";
	      cout<<" \n\n[n] must be greater than [r] \n\n";
	      cout<<" $$   ENTER AGAIN   $$ :-- \n\n";

	    goto hello;
    }
}
