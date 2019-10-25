#include<iostream>
using namespace std;

int main()
{
    cout<<"       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"                                     LINEAR      SEARCH                             \n";
    cout<<"       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"Extereme";
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

    name:

    cout<<"Enter the element you want to search :- ";
    while(!(cin>>a)|| (a<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }


    for(int j=0;j<n;j++)
    {
        if(num[j]==a)
        {
           flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }

    }
        if(flag==1)
        {

          cout<<"                   _______________________________________________________________________           \n";
          cout<<"                  |                                                                       |          \n";
          cout<<"                  |                      !!!!!!  MATCH FOUND !!!!!                        |          \n";
          cout<<"                  |_______________________________________________________________________|          \n";
        }

        else
        {
                cout<<"            ________________________________________________________________________            \n";
                cout<<"           |                                                                        |           \n";
                cout<<"           |                     !!!!!!       NO MATCH FOUND   !!!!!!               |           \n";
                cout<<"           |________________________________________________________________________|         \n\n";

        }

hello:
        cout<<"             WANT TO SEARCH MORE(select 1 or 2 ):-        \n";
hello1:

        cout<<"                   1. YES            2.NO      \n";

       while(!(cin>>m)|| (m<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }
;

        if(m==1)
        {
            goto name;
        }
        else if(m==2)
        {
                cout<<"            ________________________________________________________________________            \n";
                cout<<"           |                                                                        |           \n";
                cout<<"           |                               Thanks                                   |           \n";
                cout<<"           |                       Press any key to Continue  !!                    |           \n";
                cout<<"           |________________________________________________________________________|         \n\n";

        }
        else
        {
            cout<<"      !!!   INVALID INPUT   !!!   \n";
            cout<<"Please choose { 1 for YES }  and {  2 for NO  } :-- ";
            goto hello1;

        }


}
