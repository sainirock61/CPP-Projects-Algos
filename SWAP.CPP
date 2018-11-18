#include<iostream.h>
#include<conio.h>

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
