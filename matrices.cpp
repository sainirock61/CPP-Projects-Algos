#include<iostream>

using namespace std;

int main()
{
int i,j,a,z,n,m,num[50][50],mat[50][50],add[50][50],sub[50][50],prod[50][50],p,q,transpose[50][50],trans[50][50];

cout<<"\nENTER ORDER OF FIRST MATRIX:--\n ";

    while(!(cin>>n>>m)|| (n<=0&&m<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }

cout<<"\nENTER THE ORDER OF SECOND MATRIXs :-- \n";

    while(!(cin>>p>>q)|| (p<=0&&q<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }
cout<<"\n***********************************************************************************************";

cout<<"\nENTER THE ELEMENTS OF THE  FIRST MATRIX :-- \n";
    for(i=0;i<n;i++)
            {
                cout<<" \n";
                for(j=0;j<m;j++)
                    {
                        cin>>num[i][j];
                    }
            }
cout<<"\nENTER THE ELEMENTS OF THE  SECOND MATRIX :-- \n";
    for(i=0;i<p;i++)
            {
                cout<<" \n";
                for(j=0;j<q;j++)
                    {
                        cin>>mat[i][j];
                    }
            }


cout<<"\n***********************************************************************************************\n";

cout<<"         \
MATRICES YOU ENTERED ARE :-- \n";

    for(i=0;i<n;i++)
            {

                for(j=0;j<m;j++)
                    {
                        cout<<num[i][j]<<"\t";
                    }
                cout<<"\n";
            }

cout<<"\n";

    for(i=0;i<p;i++)
            {

                for(j=0;j<q;j++)
                    {
                        cout<<mat[i][j]<<"\t";
                    }
                cout<<"\n";
            }
cout<<"\n===========================================================================================\n";
cout<<"\n                            ::::::::::::::::::::::::::::  Menu Driven Program  ::::::::::::::::::::::::::::::::::::\n\n";

        cout<<"                  _________________________________________________________________________________________________________          \n";
        cout<<"                 |***********************************************************************************************************|       \n";
        cout<<"                 |*                                                                                                         *|       \n";
        cout<<"                 |*        1.ADDITION OF THE GIVEN MATRICES          2.SUBTRACTION OF THE GIVEN MATRICES                    *|       \n";
        cout<<"                 |*                                                                                                         *|       \n";
        cout<<"                 |*        3.MULTIPLICATION OF THE GIVEN MATRICES    4.TRANSPOSE OF THE MATRICES                            *|       \n";
        cout<<"                 |*_________________________________________________________________________________________________________*|        \n\n";

        cout<<"                     Choose the operation(1-3):-- ";

        while(!(cin>>a)|| (a<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }


if(a==1)
{

cout<<"\n===========================================================================================\n";
  if(n==p&&m==q)

    {
        cout<<"         SUM OF THE ABOVE MATRICES IS :-- \n";

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                add[i][j]=num[i][j]+mat[i][j];
            }

        }

        for(i=0;i<n;i++)
            {

                for(j=0;j<m;j++)
                    {
                        cout<<add[i][j]<<"\t";
                    }
                cout<<"\n";
            }
    }
    else
    {
        cout<<"\n!!!!    ENTER THE SAME DIMENSIONS OF BOTH THE MATRIX TO PERFORM ADDITION    !!!!\n";
    }
}
else if(a==2)
{

cout<<"\n===========================================================================================\n";
  if(n==p&&m==q)
    {
cout<<"         DIFFERECE OF THE ABOVE MATRICES IS :-- \n";

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sub[i][j]=num[i][j]-mat[i][j];
            }

        }

        for(i=0;i<n;i++)
            {

                for(j=0;j<n;j++)
                    {
                        cout<<sub[i][j]<<"\t";
                    }
                cout<<"\n";
            }
     }
    else
    {
        cout<<"\n !!!!     ENTER THE SAME DIMENSIONS OF BOTH THE MATRIX TO PERFORM SUBTRACTION    !!!!\n";
    }
}

else if(a==3)
{

cout<<"\n===========================================================================================\n";

if(m==p)
  {
    int sum=0;
    cout<<"         PRODUCT OF THE ABOVE MATRICES IS :-- \n";

        for(int c=0;c<n;c++)
        {
            for(int d=0;d<q;d++)
            {
                for(int k=0;k<m;k++)
                {
                    sum = sum + num[c][k]*mat[k][d];
                }
                    prod[c][d]=sum;
            }
        }

    for(i=0;i<n;i++)
            {

                for(j=0;j<n;j++)
                    {
                        cout<<prod[i][j]<<"\t";
                    }
                cout<<"\n";
            }
  }
   else
   {
       cout<<"\n!!!!    PLEASE ENTER THE APPROPRIATE DIMENSIONS TO MULTIPLY THE MATRICES   !!!!\n";
   }
}
else if(a==4)
{
    cout<<"\n===========================================================================================\n";
    cout<<"\nTRANSPOSE OF THE GIVEN MATRICES ARE :-- \n";

        for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    {
                        transpose[j][i]=num[i][j];
                    }
            }
        for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                    {
                        trans[j][i]=mat[i][j];
                    }
            }

        for(i=0;i<m;i++)
            {
                cout<<" \n";
                for(j=0;j<n;j++)
                    {
                        cout<<transpose[i][j]<<"  ";
                    }
            }
         cout<<"\n\n";
        for(i=0;i<q;i++)
            {
                cout<<" \n";
                for(j=0;j<p;j++)
                    {
                        cout<<trans[i][j]<<"  ";
                    }
            }








}
else
    {

        cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
    }

cout<<"\n##########################################################################################\n\n";

}
