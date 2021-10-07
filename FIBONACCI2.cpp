#include<iostream>

using namespace std;
int main()
{

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


        return 0;

}

