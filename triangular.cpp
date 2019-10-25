#include<iostream>

using namespace std;

int main()
{
int i,j,n,m,num[50][50];

cout<<"\nENTER THE SIZE OF SQUARE MATRIXs :-- ";

    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";
        }
cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";

cout<<"\nENTER THE ELEMENTS OF THE  FIRST MATRIX :-- \n";
    for(i=0;i<n;i++)
            {
                cout<<" \n";
                for(j=0;j<n;j++)
                    {
                        cin>>num[i][j];
                    }
            }


cout<<"\n=============================================\n";

cout<<"MATRICES YOU ENTERED ARE :-- \n\n";

    for(i=0;i<n;i++)
            {

                for(j=0;j<n;j++)
                    {
                        cout<<num[i][j]<<"\t";
                    }
                cout<<"\n";
            }

cout<<"\n=============================================\n";

cout<<"     LOWER TRIANGE ELEMENTS ARE :-- \n\n";
int sum=0;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(i<j)
                    {
                        cout<<" ";
                    }
                    else
                    {
                         cout<<num[i][j]<<" ";
                         sum=sum+num[i][j];
                    }
                }
                cout<<"\n";

        }
    cout<<"\n Sum Of the lower Triangle is :--"<<sum;
cout<<"\n=============================================\n";

cout<<"     UPPER TRIANGE ELEMENTS ARE :-- \n\n";
 sum=0;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(i<=j)
                    {
                        cout<<num[i][j]<<" ";
                        sum=sum+num[i][j];
                    }
                    else
                    {
                        cout<<"  ";
                    }
                }
                cout<<"\n";

        }
    cout<<"\n Sum Of the Upper Triangle is :--"<<sum;
cout<<"\n=============================================\n";

}
