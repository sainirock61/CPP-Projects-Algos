#include<iostream>

using namespace std;

void main()
{
	 clrscr();

	int *a,*b,*temp;
	cout<<"\n Enter value of a:- ";
	cin>>*a;

	cout<<"\n Enter value of b:- ";
	cin>>*b;


	*temp=*a;
	*a=*b;
	*b=*temp;
    cout<<"\n\n_____________________________________________________________________________";
	    cout<<"\n\t After swaping value or a ="<<*a<<" and of b ="<<*b<<"\n";
    cout<<"_____________________________________________________________________________";

	getch();
}
oid main()
{
	 clrscr();

	int *a,*b,*temp;
	cout<<"\n Enter value of a:- ";
	cin>>*a;

	cout<<"\n Enter value of b:- ";
	cin>>*b;


	*temp=*a;
	*a=*b;
	*b=*temp;

	    cout<<"\n\t After swaping value or a ="<<*a<<" and of b ="<<*b<<"\n";


	getch();
}
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
		    cout<<"ENTER THE NUMBER OF TERMS OF THE FIBONACCI SERIES :-- ";
    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

