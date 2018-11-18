#include<iostream>

using namespace std;

void fibonacci(int n)
{
   static int n1=0,n2=1,n3;

    if(n>0)
    {
        n3 = n1+ n2;
        n1 = n2;
        n2 = n3;


        cout<<n3<<" ";

        fibonacci(n-1);

    }

}

int main()
{
cout<<"\n====================================================================\n";
    int n;
    cout<<"ENTER THE NUMBER OF TERMS OF THE FIBONACCI SERIES :-- ";
    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

        cout<<"\n 0 1 ";

        fibonacci(n-2);
cout<<"\n====================================================================\n";

        return 0;

}
