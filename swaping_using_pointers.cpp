#include<iostream>

using namespace std;

int main()
{


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
	
	cout<<"\n EMPLOYEE-"<<i+1<<":"<<endl;
	 cout<<"Emp_id:";
	 cin>>s[i].empid;
	 cout<<"Name:";
	 cin>>s[i].nm;
	 cout<<"HRA:";
	 cin>>s[i].hra;
	 cout<<"DA:";
	 cin>>s[i].da;
	 cout<<"Extra:";
	 cin>>s[i].ext;
}


