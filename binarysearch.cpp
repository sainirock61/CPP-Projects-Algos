#include<iostream>
using namespace std;

int main()
{
    cout<<"       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"                                     BINARY      SEARCH                             \n";
    cout<<"       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";



	int n,i,num[500],a,flag,m;

		cout<<"Enter the number of terms of array :--";


	while(!(cin>>n)|| (n<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }

	cout<<"Enter the terms of Array : "<<endl;

		for(i=0;i<n;i++)
		   {
		       cin>>num[i];
		   }
cout<<"      ================================================================================\n";

    cout<<"\n\nEnter the element you want to search :- ";
    while(!(cin>>a)|| (a<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"   INVALID INPUT. ENTER AGAIN  :-- ";
        }
int first=0;
int last = n-1;
int middle =(first+last)/2;

cout<<"========================================================================================\n\n";

    while(first<=last)
        {
            if (num[middle] < a)
            {
                first = middle + 1;
            }
            else if (num[middle] == a)
            {
                cout<< "               Element Found at Location "<<middle+1<<"\n";
                break;
            }
            else
            {
                last =middle-1;
            }
            middle = (first + last)/2;
        }
        if(first > last)
        {
            cout<<"\n\n             NOT FOUND \n";

        }
 cout<<"\n========================================================================================\n\n";
}
