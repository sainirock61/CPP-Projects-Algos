


#include<iostream>
#include<string.h>
using namespace std;

class StringFunctions{
public:
char s[50];

StringFunctions(){	//default constructor to initialise s
	s = "";
}
	
void getString()	//to get the string from user
{
	cin >> s;
}
	
void show_add()  //to print address of each character in the string
{
	cout<<"\n Address of each character in the string: ";
	for(int i=0;s[i]!='\0';i++)
	{
		cout<<'\n'<<(void *)&s[i];
	}
}
void concat()  //to concatenate 2s trings without strcat()
{
	char s2[50];
	cout<<"\n Enter second string: ";
	cin>>s2;
	int l=strlen(s);
	for(int i=0;s2[i]!='\0';i++)
		s[l++]=s2[i];
	s[l]='\0';
}
void concat_func() // to concatenate 2 strings using strcat()
{
	char s2[50];
	cout<<"\n Enter second string: ";
	cin>>s2;
	strcat(s,s2);
}
int compare()  //to compare 2 strings
{
	char s2[50];
	cout<<"\n Enter second string: ";
	cin>>s2;
	int result=strcmp(s,s2);
	return result;
}
int length()  // to calculate length of string using pointers
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
void upper()  // function to convert lowercase characters to uppercase
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(islower(s[i]))
			s[i]=toupper(s[i]);
	}
}
void lower()  // function to convert uppercase characters to lowercase
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
	}
}
int vowel_count()  //function to count number of vowels
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
void reverse()  //function to reverse the string
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



int main()
{
    system("color f3");
	StringFunctions str;
	
	char ans='y';
	int ch, result, size, vowel;
	
	cout<<"\n Enter a string: ";
	str.getString();
	
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
			case 1:	str.show_add();
					break;
			case 2:	str.concat();
					cout<<"\n Modified String: "<<str.s;
					break;
			case 3: str.concat_func();
					cout<<"\n Modified String: "<<str.s;
					break;
			case 4: result=str.compare();
					if(result==0)
						cout<<"\n Both strings are equal.";
					else if(result<0)
						cout<<"\n First string is lesser than second string.";
					else
						cout<<"\n First string is greater than second string.";
					break;
			case 5: size=str.length();
					cout<<"\n Length of the string: "<<size;
					break;
			case 6:	str.upper();
					cout<<"\n Modified String: "<<str.s;
					break;
			case 7: str.lower();
					cout<<"\n Modified String: "<<str.s;
					break;
			case 8: vowel=str.vowel_count();
					cout<<"\n Number of vowels in the string: "<<vowel;
					break;
			case 9: str.reverse();
					cout<<"\n Reversed String: "<<str.s;
					break;
			default:cout<<"\n Invalid Choice. Try Again!";
		}
		cout<<"\n\n Do you wish to continue(y/n)? ";
		cin>>ans;
	}while(ans=='y');
	return 0;
}
