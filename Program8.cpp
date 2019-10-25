#include<iostream>
using namespace std;
int main()
{
int n,i,j,count;
cout<<"Program to print all prime number less than n\n";
cout<<"\n";
cout<<"\n";
cout<<"Enter n so that all prime number before n should be computed:"<<" ";
cin>>n;
i=2;
 #include<iostream>
using namespace std;
int main()
{
int n,i,j,count;
cout<<"Program to print all prime number less than n\n";
cout<<"\n";
cout<<"\n";
cout<<"Enter n so that all prime number before n should be computed:"<<" ";
cin>>n;
i=2;#include<iostream>
using namespace std;
int main()
{
int n,i,j,count;
cout<<"Program to print all prime number less than n\n";
cout<<"\n";
cout<<"\n";
cout<<"Enter n so that all prime number before n should be computed:"<<" ";
cin>>n;
i=2;
while(i<n)
{
count=0;
j=2;
while(j<i)
{
if(i%j==0)
{
count++;
}
j=j+1;
}
if(count==0)
{
 cout<<i<<" ";
}
i=i+1;
}
}
