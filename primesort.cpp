#include<iostream>

using namespace std;

int main()
{
cout<<"     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"                  SORTING AN ARRAY INTO PRIME AND NON-PRIME                   \n";
cout<<"     `````````````````````````````````````````````````````````````````````````\n\n\n";
    int n,num[5000],temp_a[5000],temp_b[5000],q=0,k=0;
    cout<<"Enter the size of array :- ";
    while(!(cin>>n)|| (n<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }

    cout<<"Enter the elements of array :-- \n";
        for(int i=0;i<n;i++)
		   {
		       cin>>num[i];
		   }

cout<<"   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^      \n\n";

    cout<<"The Array you entered is:- [ ";
		 for(int x=0;x<n;x++)
		   {
		      cout<<num[x]<<" ";
		   }
    cout<<"]\n\n\n";



    for(int i=0;i<n;i++)
    {

        int fact=0;
            for(int j=1;j<=num[i];j++)
        {
                    if(num[i]%j==0)
                    {
                        fact++;
                    }
        }
            if(fact==2)
                {
                    temp_a[k++]=num[i];
                }
            else
                {
                    temp_b[q++]=num[i];
                }

    }

cout<<"   ==============================================================================\n\n";



 cout<<"        PRIME ELEMENTS ARE :-- ";
        for(int i=0;i<k;i++)
    {
        cout<<temp_a[i]<<" ";
    }
  cout<<"\n      NON-PRIME ELEMENTS ARE :-- ";
        for(int i=0;i<q;i++)
    {
        cout<<temp_b[i]<<" ";
    }

cout<<"\n   ==============================================================================\n\n";

}

