#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    char a[100],b[100];
    cout<<"::::::::::::::::::::: MENU DRIVEN PROGRAM :::::::::::::::::::::\n\n";
    cout<<" Program to perform following operations on String :-\n\n";
    cout<<"\t 1.)Concatenate two Strings.                      \n";
    cout<<"\t 2.)Compare two strings.                          \n";
    cout<<"\t 3.)Calaulate the lenght of the strings.          \n";
    cout<<"\t 4.)Convert lowercase to uppercase.               \n";
    cout<<"\t 5.)Convert uppercase to lower case.              \n";
    cout<<"\t 6.)Calculate number of Vowels.                   \n";
    cout<<"\t 7.)Find a substring in a given string.           \n\n";
    cout<<"\t\t CHOOSE THE OPERATION :--   ";
    cin>>n;

    cout<<"\n===================================================================\n\n";

  if(n==1)
    {
        cout<<"ENTER FIRST STRING:--";
        cin>>a;
        cout<<"ENTER SECOND STRING:--";
        cin>>b;

        strcat(a,b);
        cout<<"\n\t After Concatinating above strings :--"<<a;
    }
  else if(n==2)
    {
        cout<<"ENTER FIRST STRING:--";
        cin>>a;
        cout<<"ENTER SECOND STRING:--";
        cin>>b;

        if(strcmp(a,b)==0)
        {
            cout<<"\n\t STRINGS ARE EQUAL  \n";
        }else
        {
            cout<<"\n\t STRINGS ARE NOT EQUAL  \n";
        }
    }
  else if(n==3)
    {
        cout<<"ENTER THE STRING:--";
        cin>>a;
        int len;

        len=strlen(a);
        cout<<"\n\tTHE LENGHT OF GIVEN STRING IS :-- "<<len;
    }
  else if(n==4)
    {
      cout<<"Enter the String :-- ";
      cin>>a;
        for(int i=0;i<=strlen(a);i++)
        {
             if(a[i]>=97 && a[i]<=122)
             {
                 a[i]=a[i]-32;
             }
        }
          cout<<"\n The entered string in uppercase: "<<a;
    }
  else if(n==5)
    {
        cout<<"Enter the String :-- ";
        cin>>a;

        for(int i=0;i<=strlen(a);i++)
        {
              if(a[i]>=65 && a[i]<=92)
                {
                    a[i]=a[i]+32;
                }
        } cout<<"\n The entered string in lowercase: "<<a;
    }
  else if(n==6)
    {
        int n,s=0;
        cout<<"Enter the String :-- ";
        cin>>a;

        n=strlen(a);
        for(int i=0;i<n;++i)
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                    {
                        s=s+1;
                    }
            }
                cout<<"Number of Vowels in the given String is :--"<<s;
    }
  else if(n==7)
    {

    }
  else
    {
        cout<<"\n ERROR !!!  ENTER THE NUMBER BETWEEN GIVEN CHOICES \n";
    }

cout<<"\n\n__________________________________________________________________________________________\n\n";
}
