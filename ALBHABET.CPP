

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{

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
