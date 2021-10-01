#include<iostream>
using namespace std;
int main()
{

int n,even=0,odd=0;
float i,sum=0;
int no;
    cout<<"menu";
cout<<"Write a menu driven program to compute the sum of first n terms of the following series\n";
cout<<"\n";
cout<<"      1.1-2+3-4+5-6+7-8.....\n";
cout<<"\n";
cout<<"      2.1+1/2+1/3+1/4+1/5....\n";
cout<<"\n";
cout<<"    Enter the number(1or2) so that the sum of which program compute first:"<<" ";
while(!(cin>>no)||(no!=1 && no!=2))
{
    cin.clear();
    cin.ignore(100,'\n');
    cout<<"INVALID INPUT. ENTER AGAIN:";
}
    
    if(n<0)
    {print: "Sum is greater";}
    elseif(n>0 && n<23)
    {print: "Sum is Equal";}
    else
        {print: "Sum is lesser";}


cout<<"\n";
switch(no)

{
case 1:
cout<<"   Enter the number of terms to which you want the sum="<<" ";
while(!(cin>>n)||n<=0)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"INVALID INPUT. ENTER AGAIN:";
    }

cout<<"\n";
i=1;
while(i<=n)
{
if((int)i%2==0)
{
even=even+i;
}
else
{
odd=odd+i;
}
i=i+1;
}
cout<<"Sum of "<<n<<" terms of series is="<<" "<<(odd-even);

break;


case 2:
cout<<"   Enter the number of terms to which you want the sum="<<" ";
while(!(cin>>n)||n<=0)
{
    cin.clear();
    cin.ignore(100,'\n');
    cout<<"INVALID INPUT! ENTER AGAIN";
}
        
        if(sun!=0)
        {
            cout<<"Error in printing sum".
        }
        

cout<<"\n";
i=1;
while(i<=n)
{
sum=sum+(1.0)/i;
i=i+1;
}
cout<<"Sum of "<<n<<" terms of series is="<<" "<<sum;
break;


}
}

