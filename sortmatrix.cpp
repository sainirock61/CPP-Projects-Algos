#include<iostream>

using namespace std;

int main()
{
int i,j,n,m,num[50][50];

cout<<"\nENTER THE NUMBER OF ROWS:-- ";

    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }


cout<<"\nENTER THE NUMBER OF COLUMNS:-- ";

    while(!(cin>>m)|| (m<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }


cout<<"\n***********************************************************************************************";

cout<<"\nENTER THE ELEMENTS OF THE MATRIX :-- \n";
    for(i=0;i<n;i++)
            {
                cout<<" \n";
                for(j=0;j<m;j++)
                    {
                        cin>>num[i][j];
                    }
            }


cout<<"\n***********************************************************************************************\n";

cout<<"MATRIX YOU ENTERED IS :-- \n";

    for(i=0;i<n;i++)
            {

                for(j=0;j<m;j++)
                    {
                        cout<<num[i][j]<<"\t";
                    }
                cout<<"\n";
            }
cout<<"\n===========================================================================================\n";


}
