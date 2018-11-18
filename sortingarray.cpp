#include<iostream>
using namespace std;

int main()
{

	int n,num[500],fun[500],a,m,k,full[1000];

		cout<<"Enter the length of FIRST array :--";


	while(!(cin>>n)|| (n<0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"INVALID INPUT. ENTER AGAIN:";
        }

	cout<<"Enter the terms of FIRST Array :-- "<<endl;

		for(int i=0;i<n;i++)
		   {
		       cin>>num[i];
		   }

     cout<<"\n\nEnter the length of SECOND array :--";


	while(!(cin>>m)|| (m<0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"INVALID INPUT. ENTER AGAIN:";
        }

	cout<<"Enter the terms of SECOND Array :-- "<<endl;

		for(int i=0;i<m;i++)
		   {
		       cin>>fun[i];
		   }

cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";

    cout<<"                   FIRST ARRAY IS:- [ ";
		 for(int x=0;x<n;x++)
		   {
		      cout<<num[x]<<" ";
		   }
        cout<<" ]\n\n";

    cout<<"                   SECOND ARRAY IS:- [ ";
		 for(int x=0;x<m;x++)
		   {
		      cout<<fun[x]<<" ";
		   }
        cout<<" ]\n\n\n";

cout<<"_______________________________________________________________________________________________________________________\n";
cout<<"                                    SORTING    OF   ARRAYS                                \n";
cout<<"_______________________________________________________________________________________________________________________\n";
                                            //BUBBLE SORTING

       for(int i=0;i<n-1;i++)
       {
           for(int j=0;j<n-1-i;j++)
           {
               if(num[j]>num[j+1])
               {
                   int temp = num[j];
                   num[j] = num[j+1];
                   num[j+1] = temp;
               }
           }
       }
  cout<<"\n\n                   FIRST ARRAY AFTER SORTING :-- ";
        for(int i=0;i<n;i++)
            {
                cout<<num[i]<<" ";
            }


       for(int i=0;i<m-1;i++)
       {
           for(int j=0;j<m-1-i;j++)
           {
               if(fun[j]>fun[j+1])
               {
                   int temp = fun[j];
                   fun[j] = fun[j+1];
                   fun[j+1] = temp;
               }
           }
       }

        cout<<"\n\n                   SECOND ARRAY AFTER SORTING :-- ";

        for(int i=0;i<m;i++)
            {
                cout<<fun[i]<<" ";

            }
 cout<<"\n\n";
cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
cout<<"                                     MERGING   OF    ARRAYS      \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    int p=0,i=0,j=0;

    while(i<n && j<m)
    {
        if(num[i]<fun[j])
        {
            full[p++]=num[i++];
        }
        else
        {
            full[p++]=fun[j++];
        }
    }

    while(i<n)
    {
        full[p++]=num[i++];
    }
    while(j<m)
    {
        full[p++]=fun[j++];
    }




cout<<"\n         ARRAY AFTER MERGING :--  ";
     for(i=0;i<n+m;i++)
     {
         cout<<full[i]<<" ";
     }

cout<<"\n\n==================================================================================================================";

}


