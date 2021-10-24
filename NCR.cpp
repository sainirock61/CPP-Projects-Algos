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




    int n,r;

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

}
