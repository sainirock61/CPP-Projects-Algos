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
int x;
cout<<"\nEnter no. to find its factorial : ";
cin>>x;
cout<<endl;
cout<<factorial(x);
return 0;
}
