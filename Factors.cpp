#include<iostream>

using namespace std;

int factorial(int x)
{
if(x==1)
return 1;
else
return x*factorial(x-1);
}

int main()
{

cout<<i<<"\n";
}
}int main()
{
int i,n;
cout<<"Program to find the factors of the given number";
cout<<"\n";
cout<<"\n";
cout<<"  Enter the number of which you want to find the factors="<<" ";
while(!(cin>>n) || (n<=0))
{
    cout<<"'INVALID INPUT! ENTER A POSITIVE NUMBER:"<<" ";
}

for(i=1;i<=n;i++)
{
if(n%i==0)
{
cout<<i<<"\n";
}
}int main()
{
int i,n;
cout<<"Program to find the factors of the given number";
cout<<"\n";
cout<<"\n";
cout<<"                                        Enter the number of which you want to find the factors="<<" ";
while(!(cin>>n) || (n<=0))
{
    cin.clear();
    cin.ignore(100,'\n');
    cout<<"'INVALID INPUT! ENTER A POSITIVE NUMBER:"<<" ";
}

for(i=1;i<=n;i++)
{
if(n%i==0)
{
cout<<i<<"\n";
}
=======
int x;
cout<<"\nEnter no. to find its factorial : ";
cin>>x;
cout<<endl;
cout<<factorial(x);
return 0;

}
