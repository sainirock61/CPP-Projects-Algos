#include<iostream>

using namespace std;

int factorial(int i)
{
     if(i>=1)
        {
            return i*factorial(i-1);
        }
        else
        {
            return 1;
        }
}

int main()
{
    int n;
    cout<<"ENTER THE NUMBER TO FIND THE FACTORIAL :-- ";
        while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }
cout<<"\n===================================================================\n";

        cout<<"\n            Factorial of "<<n<<" is :--  "<<factorial(n);

cout<<"\n===================================================================\n";


}



