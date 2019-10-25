#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char string1[20] ;

int i,length,flag = 0 ;

        cout<< "ENTER THE STRING :--";
        cin>>string1;

        length = strlen(string1);

        for(i=0;i<length;i++)
        {
            if(string1[i] != string1[length-i-1])
            {
                flag = 1;
                break;
            }
        }
    if(flag)
    {
        cout<<"\n"<<string1<< " is not a palindrome\n";
    }
    else
    {
        cout<<"\n"<<string1<< " is a palindrome\n";
    }

       return 0;

         if(flag)
    {
        cout<<"\n"<<string1<< " is not a palindrome\n";
    }
    else
    {
        cout<<"\n"<<string1<< " is a palindrome\n";
    }

       return 0;
}

