


#include<iostream>
#include<string.h>
using namespace std;

void show_add(char s[])  //to print address of each character in the string
{
	cout<<"\n Address of each character in the string: ";
	for(int i=0;s[i]!='\0';i++)
	{
		cout<<'\n'<<(void *)&s[i];
	}
}
void concat(char s[])  //to concatenate 2s trings without strcat()
{
	char s2[50];
	cout<<"\n Enter second string: ";
	cin>>s2;
	int l=strlen(s);
	for(int i=0;s2[i]!='\0';i++)
		s[l++]=s2[i];
	s[l]='\0';
}
void concat_func(char s[]) // to concatenate 2 strings using strcat()
{
	char s2[50];
	cout<<"\n Enter second string: ";
	cin>>s2;
	strcat(s,s2);
}
int compare(char s[])  //to compare 2 strings
{
	char s2[50];
	cout<<"\n Enter second string: ";
	cin>>s2;
	int result=strcmp(s,s2);
	return result;
}
int length(char s[])  // to calculate length of string using pointers
{
	char* p=s;
	int l=0;
	while(*p!='\0')
	{
		l++;
		p++;
	}
	return l;	
}
void upper(char s[])  // function to convert lowercase characters to uppercase
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(islower(s[i]))
			s[i]=toupper(s[i]);
	}
}
void lower(char s[])  // function to convert uppercase characters to lowercase
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
	}
}
int vowel_count(char s[])  //function to count number of vowels
{
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	{
	s[i]=toupper(s[i]);
	if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
	count++;
	}
	return count;
}
void reverse(char s[])  //function to reverse the string
{
	int l=strlen(s);
	l--;
	char temp;
	for(int i=0;i<=l/2;i++)
	{
		temp=s[i];
		s[i]=s[l-i];
		s[l-i]=temp;	
	}
}
int main()
{
    system("color f3");
	char ans='y';
	int ch, result, size, vowel;
	char s[50];
	cout<<"\n Enter a string: ";
	cin>>s;
	do
	{
		system("cls");
		cout<<"\n\t\t MENU: ";
		cout<<"\n 1) Show address of each character in string.";
		cout<<"\n 2) Concatenate two strings without using strcat function.";
		cout<<"\n 3) Concatenate two strings using strcat function.";
		cout<<"\n 4) Compare two strings.";
		cout<<"\n 5) Calculate length of the string using pointers.";
		cout<<"\n 6) Convert all lowercase characters to uppercase.";
		cout<<"\n 7) Convert all uppercase characters to lowercase.";
		cout<<"\n 8) Calculate number of vowels.";
		cout<<"\n 9) Reverse the string.";
		cout<<"\n\n Enter Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:	show_add(s);
					break;
			case 2:	concat(s);
					cout<<"\n Modified String: "<<s;
					break;
			case 3: concat_func(s);
					cout<<"\n Modified String: "<<s;
					break;
			case 4: result=compare(s);
					if(result==0)
						cout<<"\n Both strings are equal.";
					else if(result<0)
						cout<<"\n First string is lesser than second string.";
					else
						cout<<"\n First string is greater than second string.";
					break;
			case 5: size=length(s);
					cout<<"\n Length of the string: "<<size;
					break;
			case 6:	upper(s);
					cout<<"\n Modified String: "<<s;
					break;
			case 7: lower(s);
					cout<<"\n Modified String: "<<s;
					break;
			case 8: vowel=vowel_count(s);
					cout<<"\n Number of vowels in the string: "<<vowel;
					break;
			case 9: reverse(s);
					cout<<"\n Reversed String: "<<s;
					break;
			default:cout<<"\n Invalid Choice. Try Again!";
		}
		cout<<"\n\n Do you wish to continue(y/n)? ";
		cin>>ans;
	}while(ans=='y');
	return 0;
}
