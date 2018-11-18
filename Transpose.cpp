#include<iostream>

using namespace std;

int main()
{
int a,i,j,n,m,num[50][50],transpose[50][50],c[50],r[50];

cout<<"\nENTER THE NUMBER OF ROWS OF THE MATRIXs :-- ";

    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }

cout<<"\nENTER THE NUMBER OF COLUMNS OF THE MATRIXs :-- ";


    while(!(cin>>m)|| (m<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }

cout<<"\n***********************************************************************************************";

cout<<"\n ELEMENTS OF THE MATRIX ARE:-- \n";
    for(i=0;i<n;i++)
            {
                cout<<" \n";
                for(j=0;j<m;j++)
                    {
                        cin>>num[i][j];
                    }
            }
cout<<"\n***********************************************************************************************";

cout<<"\nENTER THE ELEMENTS OF THE MATRIX ARE :-- \n";
    for(i=0;i<n;i++)
            {
                cout<<" \n";
                for(j=0;j<m;j++)
                    {
                        cout<<num[i][j]<<"\t";
                    }
            }
cout<<"\n***********************************************************************************************";


cout<<"\n                            ::::::::::::::::::::::::::::  Menu Driven Program  ::::::::::::::::::::::::::::::::::::\n\n";

        cout<<"                  _________________________________________________________________________________________________________          \n";
        cout<<"                 |***********************************************************************************************************|       \n";
        cout<<"                 |*                                                                                                         *|       \n";
        cout<<"                 |*          1.TRANSPOSE OF THE GIVEN MATRIX        2.SUM OF THE DIAGONALS                                  *|       \n";
        cout<<"                 |*                                                                                                         *|       \n";
        cout<<"                 |*          3.SUM OF ROWS AND COLUMNS                                                                      *|       \n";
        cout<<"                 |*_________________________________________________________________________________________________________*|        \n\n";
        cout<<"                     Choose the operation(1-3):-- ";cin>>a;

 if(a==1)
  {
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"\nTRANSPOSE OF THE GIVEN MATRIX IS :-- \n";

        for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    {
                        transpose[j][i]=num[i][j];
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
    cout<<"\n***********************************************************************************************\n";

  }
else if(a==2)
    {
        cout<<"\n***********************************************************************************************\n";
        cout<<"                               SUM OF THE DIAGONALS  \n";
        if(n==m)
            {
                int dsum1=0;
                int dsum2=0;

                    for(i=0;i<n;i++)
                        {
                            for(j=0;j<n;j++)
                                {
                                    if(i==j)
                                        {
                                            dsum1+=num[i][j];
                                        }
                                    if(i+j==(n-1))
                                        {
                                            dsum2+=num[i][j];
                                        }
                                }
                        }
            cout<<"\n               SUM OF THE FIRST DIAGONAL IS(\) :-- "<<dsum1;
            cout<<"\n               SUM OF THE SECOND DIAGONAL IS(/) :-- "<<dsum2<<"\n\n";
            }
        else
            {
                cout<<"\n !!   CANT FIND THE SUM OF THE DIAGONALS     !!\n";
                cout<<"\n    ----------PLEASE ENTER A SQUARE MATRIX ONLY     ------\n";
            }
    cout<<"\n***********************************************************************************************\n";

    }
else if(a==3)
 {
        cout<<"=================================================================================================\n";
        cout<<"                         SUM OF ROWS AND COLUMNS   \n\n";

    for(i=0;i<n;i++)
    {
        r[i]=0;
            for(j=0;j<m;j++)
            {
                r[i]+=num[i][j];
            }
    }

    for(i=0;i<m;i++)
        {
            c[i]=0;
                for(j=0;j<n;j++)
                    {
                        c[i]+=num[j][i];
                    }
        }

    for(i=0;i<n;i++)
        {
            cout<<"SUM OF "<<i+1<<" ROW IS :-- "<<r[i]<<"\n";
        }
    for(i=0;i<m;i++)
        {
            cout<<"SUM OF "<<i+1<<" COLUMN IS :-- "<<c[i]<<"\n";
        }

    cout<<"=================================================================================================";
 }
 else
 {

            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

 }

        cout<<"\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
        cout<<"________________________________________________________________________________________________\n";

}
