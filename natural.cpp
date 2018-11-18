#include<iostream>

using namespace std;

int natural(int i)
{
     if(i>1)
        {
            return i+natural(i-1);
        }
        else
        {
            return 1;
        }
}

int main()
{
    int n;
    cout<<"ENTER THE NUMBER of TERMS :-- ";
        while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }
    cout<<"\n===================================================================\n";

        cout<<"\n            SUM OF "<<n<<" NATURAL NUMBERS is :--  "<<natural(n);

    cout<<"\n===================================================================\n";


}



