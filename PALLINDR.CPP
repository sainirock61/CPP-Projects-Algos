/*  C++ program to Check whether a number is palindrome or not  */

#include<iostream>
using namespace std;

int main()
{
    int a,no,b,temp=0;

    cout<<"Enter any positive number :: ";
    cin>>no;

    b=no;

    while(no>0)
    {
        a=no%10;
        no=no/10;
        temp=temp*10+a;
    }

    if(temp==b)
    {
        cout<<"\nThe Number [ "<<b<<" ] is Palindrome.\n";
    }
    else
    {
        cout<<"\nThe Number [ "<<b<<" ] is Not Palindrome.\n";
    }

    return 0;
}
