

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    system("color f3");
    string str="";
    static int alphabet[26];
    int x;
    cout<<"\n\nCommand-Line Arguement\n";
    for(int i=0;i<argc;i++)
    {
        cout<<"\n"<<argv[i];
        str+=argv[i];
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            x=((int)str[i])-65;
            alphabet[x]++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            x=((int)str[i])-97;
            alphabet[x]++;
        }
    }
    //Displaying number of occurences of each alphabets in the command line arguement
    cout<<"\n\n~~~~~~~~~~~~~\n Alphabet number of occurences\n~~~~~~~~~~~~~~";
    for(int i=0;i<26;i++)
    {
        cout<<"\n"<<(char)(65+i)<<" "<<alphabet[i];
    }
    system("pause");
    return 0;
	  static int alphabet[26];
    int x;
    cout<<"\n\nCommand-Line Arguement\n";
    for(int i=0;i<argc;i++)
    {
}

for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            x=((int)str[i])-65;
            alphabet[x]++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            x=((int)str[i])-97;
            alphabet[x]++;
        }
    }
    //Displaying number of occurences of each alphabets in the command line arguement
    cout<<"\n\n~~~~~~~~~~~~~\n Alphabet number of occurences\n~~~~~~~~~~~~~~";
    for(int i=0;i<26;i++)
    {
        cout<<"\n"<<(char)(65+i)<<" "<<alphabet[i];
    }
    system("pause");
    return 0;
}
