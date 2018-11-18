#include<iostream>
using namespace std;


int binary(int a[],int n,int m,int l,int u)
{
    int mid,c=0;

    if(l<=u)
    {
        mid=(l+u)/2;
            if(m==a[mid])
            {
                c=1;
            }
            else if(m<a[mid])
            {
                return binary(a,n,m,l,mid-1);
            }
            else
            {
                return binary(a,n,m,mid+1,u);
            }
    }
    else
    {
        return c;
    }
}


int main()

{
      cout<<"\n\t\t\t\t\tBINARY SEARCH USING RECURSION  \n";
        cout<<"\t\t\t====================================================================\n";


    int a[40],i,n,m,c,l,u;
    cout<<"ENTER THE SIZE OF THE ARRAY :- ";
    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

    cout<<"ENTER THE ELEMENTS OF THE ARRAY :--\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\n\n THE ARRAY YOU ENTERED IS:--\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n\nENTER THE NUMBER YOU WANT TO SEARCH:--";
    while(!(cin>>m)|| (m<0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

    l=0,u=n-1;
    c=binary(a,n,m,l,u);

    if(c==0)
    {
        cout<<"\n**************************************\n";
        cout<<"\n\t NUMBER NOT FOUND \n";
        cout<<"\n**************************************\n";
    }
    else
    {
        cout<<"\n**************************************\n";
        cout<<"\n\t";
        1
        26NUMBER FOUND\n";
        cout<<"\n**************************************\n";

    }
    return 0;

}

