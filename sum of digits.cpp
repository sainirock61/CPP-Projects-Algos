#include<iostream>
using namespace std;

int sumOfDigits(int num){
        int sum = 0;
        while(num != 0)
          {
            sum = sum + num%10;
            num = num/10;
          }
        return sum;
}

void draw_line()
{
        cout<<"\t\t\t====================================================================\n";
}

int main()
{
        cout<<"\n\t\t\t\tPROGRAM TO PRINT THE SUM OF ALL THE DIGITS OF A NUMBER \n";
        draw_line();


    long int val , sum = 0;

    cout<<"\n\t\t\t\tENTER THE NUMBER :-- ";
    while(!(cin>>val)|| (val<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

        
        sum = sumOfDigits(val);

    cout<<"\n\t\t\t\tTHE SUM OF THE DIGITS OF "<<val<<" is :- :"<<sum;

    draw_line();

}
