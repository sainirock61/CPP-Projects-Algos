#include<iostream>
using namespace std;

int main()
{
        cout<<"\n\t\t\t\tPROGRAM TO PRINT THE SUM OF ALL THE DIGITS OF A NUMBER \n";
        cout<<"\t\t\t====================================================================\n";


    long int val , num , sum = 0;

    cout<<"\n\t\t\t\tENTER THE NUMBER :-- ";
    while(!(cin>>val)|| (val<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }


        num = val ;
        while(num !=0)
          {
            sum = sum + num%10;
            num = num/10;
          }

    cout<<"\n\t\t\t\tTHE SUM OF THE DIGITS OF "<<val<<" is :- :"<<sum;

cout<<"\n\n\t\t\t====================================================================\n\n\n\n";

}
