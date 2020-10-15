#include<iostream>
using namespace std;
int main()
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
}
}
<div class="col-xs-12 col-md-6 col-lg-6">
            <div class="about-item">
              <img class="img-fluid" src="assets/img/about/img1.jpg" alt="">
              <div class="about-text">

              <div class="about-text">

    
