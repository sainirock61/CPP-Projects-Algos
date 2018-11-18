#include<iostream>
using namespace std;
int main()
{
int n,j,k,i,number,space,star,q;

char d;
cout<<"   Menu Driven Pattern Program \n";
cout<<"\n";
cout<<"\n";
cout<<"       1.   *               2.  *                     3.  * \n";
cout<<"           **                   **                       ***\n";
cout<<"          ***                   ***                     *****\n";
cout<<"         ****                   ****                   *******\n";
cout<<"\n";
cout<<"      4.    *                 5.    A                6.  A\n";
cout<<"           ***                     AB                    AB\n";
cout<<"          *****                   ABC                    ABC\n";
cout<<"           ***                   ABCD                    ABCD\n";
cout<<"            *            ";
cout<<"\n";
cout<<"\n";
cout<<" Enter the number of program which you want to print="<<" ";

while(!(cin>>n)|| (n!=1 && n!=2 && n!=3 && n!=4 && n!=5 && n!=6) )
{
    cin.clear();
    cin.ignore(100,'\n');
    cout<<"                                                      INVALID INPUT! ENTER AGAIN:"<<" ";
}
cout<<"\n";

switch(n)
{
case 1:
cout<<"Enter the number of rows ="<<" ";
while (!(cin>>number) || (number<=0))
{
cin.clear();
cin.ignore(100,'\n');
cout<<"                                                          INVALID INPUT! ENTER AGAIN:"<<" ";
}
i=1;
while(i<=number)
{
space=1;
cout<<"                                                                     ";
while(space<=(number-i))
{
cout<<" ";
space=space+1;
}
star=1;
while(star<=i)
{
cout<<"*";
star=star+1;
}
cout<<"\n";
i=i+1;
}
break;
case 2:
cout<<"Enter the number of rows ="<<" ";
while (!(cin>>number) || (number<=0))
{
cin.clear();
cin.ignore(100,'\n');
cout<<"                                                          INVALID INPUT! ENTER AGAIN:"<<" ";
}
i=1;
while(i<=number)
{
cout<<"                                                                     ";
star=1;
while(star<=i)
{
cout<<"*";
star=star+1;
}
cout<<"\n";
i=i+1;
}
break;
case 3:
cout<<"Enter the number of rows ="<<" ";
while (!(cin>>number) || (number<=0))
{
cin.clear();
cin.ignore(100,'\n');
cout<<"                                                          INVALID INPUT! ENTER AGAIN:"<<" ";
}
i=1;
while(i<=number)
{
space=1;
cout<<"                                                                     ";
while(space<=(number-i))
{
cout<<" ";
space=space+1;
}
star=1;
while(star<=(2*i-1))
{
cout<<"*";
star=star+1;
}
cout<<"\n";
i=i+1;
}
break;
case 4:
cout<<"Enter the number of rows ="<<" ";
while (!(cin>>number) || (number<=0))
{
cin.clear();
cin.ignore(100,'\n');
cout<<"                                                          INVALID INPUT! ENTER AGAIN:"<<" ";
}
i=1;
while(i<=n)
{
j=1;
cout<<"                                                                     ";
while(j<=n-i)
{
cout<<" ";
j=j+1;
}
k=1;
while(k<=2*i-1)
{
cout<<"*";
k=k+1;
}
cout<<"\n";
i=i+1;
}
i=1;
while(i<=n-1)
{
j=1;
cout<<"                                                                     ";
while(j<=i)
{
cout<<" ";
j=j+1;
}
k=1;
while(k<=2*(n-i)-1)
{
 cout<<"*";
 k=k+1;
}
cout<<"\n";
i=i+1;
}
break;
case 5:
cout<<"Enter the number of rows ="<<" ";
while (!(cin>>number) || (number<=0))
{
cin.clear();
cin.ignore(100,'\n');
cout<<"                                                     INVALID INPUT! ENTER AGAIN:"<<" ";
}
i=1;
while(i<=number)
{
j=1;
d='A';
cout<<"                                                                     ";
for(space=1;space<=(number-i);space++)
{
cout<<" ";
}
while(j<=i)
{
cout<<d;
d=d+1;
j=j+1;
}
i=i+1;
cout<<"\n";
}
break;
case 6:
cout<<"Enter the number of rows ="<<" ";
while (!(cin>>number) || (number<=0))
{
cin.clear();
cin.ignore(100,'\n');
cout<<"                                                      INVALID INPUT! ENTER AGAIN:"<<" ";
}
i=1;
while(i<=number)
{
cout<<"                                                                     ";
j=1;
d='A';
while(j<=i)
{
cout<<d;
d=d+1;
j=j+1;
}
i=i+1;
cout<<"\n";
}
break;

}
}



