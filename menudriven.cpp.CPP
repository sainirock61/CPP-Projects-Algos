#include<iostream>
using namespace std;

int main()
{
        cout<<"         _________________________________________________________________________________________________________          \n";
        cout<<"        |*@                                                                                                      @*|       \n";
        cout<<"        |*@                                      MENU      DRIVEN      PROGRAM                                   @*|       \n";
        cout<<"        |*@______________________________________________________________________________________________________@*|        \n\n";


	int n,i,num[500],a,m;

		cout<<"Enter the number of terms of array :--";


	while(!(cin>>n)|| (n<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }

	cout<<"Enter the terms of Array : "<<endl;

		for(i=0;i<n;i++)
		   {
		       cin>>num[i];
		   }

		cout<<"The Array you entered is:- [ ";
		 for(int x=0;x<n;x++)
		   {
		      cout<<num[x]<<" ";
		   }
        cout<<" ]\n\n\n";

        cout<<"                 ::::::::::::::::::::::::::::  Menu Driven Program  ::::::::::::::::::::::::::::::::::::\n\n";

        cout<<"         _________________________________________________________________________________________________________          \n";
        cout<<"        |***********************************************************************************************************|       \n";
        cout<<"        |*                                                                                                         *|       \n";
        cout<<"        |*          1.Print largest and smallest element.  2.Print even and odd elements.                          *|       \n";
        cout<<"        |*                                                                                                         *|       \n";
        cout<<"        |*          3.Print the reverse order of Array.    4.Remove the Duplicacy and print the Array              *|       \n";
        cout<<"        |*_________________________________________________________________________________________________________*|        \n\n";
        cout<<"        Choose the operation(1-4):-- ";
        name:
        cin>>a;


if(a==1)
     {
        //smallest and largest element

                int min=num[0],max=num[n-1];
                    for(i=0;i<n;i++)
                        {
                                if(num[i]<min)
                                    {
                                        min=num[i];
                                    }
                                if(num[i]>max)
                                    {
                                        max=num[i];
                                    }
                        }
          cout<<"                   _______________________________________________________________________           \n";
          cout<<"                  |*                                                                     *|          \n";
          cout<<"                               The minimum element of the array is : "<<min<<"                       \n";
          cout<<"                               The maximum element of the array is : "<<max<<"                        \n";
          cout<<"                  |*_____________________________________________________________________*|          \n";



     }
else if(a==2)
     {
                cout<<"       _____________________________________________________________________________\n\n";
                cout<<"                       Even Elements of the array are:-- ";
                for(int x=0;x<n;x++)
                {
                    if((num[x]%2)==0)
                    {
                        cout<<num[x]<<" ";
                    }
                }
                cout<<"\n";
                cout<<"                       Odd Elements of the array are:-- ";

                for(int x=0;x<n;x++)
                {
                    if((num[x]%2)==1)
                    {
                        cout<<num[x]<<" ";
                    }
                }

                cout<<" \n\n      ____________________________________________________________________________\n";


     }
else if(a==3)
     {

    cout<<"\n\n         _________________________________________________________________________________________________\n";
    cout<<"         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
                int temp;
                cout<<"\n               ARRAY IN REVERSE ORDER :- \n";
                        for(i=0;i<n/2;i++)
                            {
                                temp=num[i];
                                num[i]=num[n-1-i];
                                num[n-1-i]=temp;
                            }
                cout<<"                               ";
                        for(i=0;i<n;i++)
                            {
                                cout<<num[i]<<"  ";
                            }
                        cout<<"\n";

     cout<<"          _______________________________________________________________________________________________\n";


     }
else if(a==4)
     {
            cout<<"\n\n         _________________________________________________________________________________________________\n";
            cout<<"         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";

                for(int i=0;i<n;i++)
                {
                    for (int j=i+1;j<n;)
                    {
                        if(num[i]==num[j])
                        {
                            for(int x=j;x<n;x++)
                             {
                                num[x]==num[x+1];
                             }
                            n--;
                        }
                        else
                        {
                            j++;
                        }
                    }
                }
            cout<<"\n                               UPDATED ARRAY AFTER REMOVING DUPLICATE ENTRIES :-- ";
                    for(int i=0;i<n;i++)
                        {
                            cout<<num[i]<<" ";
                        }
                cout<<"\n";
                cout<<"          _______________________________________________________________________________________________\n";


     }
else
     {
        cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!     INVALID INPUT. ENTER AGAIN:";

     }
     goto name;


}

