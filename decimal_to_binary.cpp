#include <iostream>
using namespace std;


int find(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * find(n / 2));
}

int main()
{
    cout<<"\nPROGRAM TO CONVERT DECIMAL NUMBER INTO BINARY ";

    cout<<"\n________________________________________________________________\n\n";

    int n;
    cout << "\t\tEnter the decimal number(UPTO 1000 ONLY) :-- ";
    while(!(cin>>n)|| (n<0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }


    cout << "\n\n\t\tConverted to binary :-- ";
    cout << find(n);

    cout<<"\n\n________________________________________________________________\n\n";
    return 0;
}
