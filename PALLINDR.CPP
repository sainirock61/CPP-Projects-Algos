/* 5. Write a function that checks whether a given string is Palindrome or not.Use this function to find whether the
      string entered by the user is Palindrome or not.*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void palindrome(char []);
int main()
{

    char n[20];
    cout<<"Enter a string";
    gets(n);
    palindrome(n);
    getch();
    return 0;
}
void palindrome(char a[20])
{
    char b[20];
    char temp;
    int i,l;
    l=strlen(a);
    strcpy(b,a);
    for(i=0;i<l/2;i++)
    {/* 5. Write a function that checks whether a given string is Palindrome or not.Use this function to find whether the
      string entered by the user is Palindrome or not.*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void palindrome(char []);
int main()
{

    char n[20];
    cout<<"Enter a string";
    gets(n);
    palindrome(n);
    getch();
    return 0;
}
void palindrome(char a[20])
{
    char b[20];
    char temp;
    int i,l;
    l=strlen(a);
    strcpy(b,a);
    for(i=0;i<l/2;i++)
    {/* 5. Write a function that checks whether a given string is Palindrome or not.Use this function to find whether the
      string entered by the user is Palindrome or not.*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void palindrome(char []);
int main()
{

    char n[20];
    cout<<"Enter a string";
    gets(n);
    palindrome(n);
    getch();
    return 0;
}
void palindrome(char a[20])
{
    char b[20];
    char temp;
    int i,l;
    l=strlen(a);
    strcpy(b,a);
    for(i=0;i<l/2;i++)
    {
	temp=a[i];
	a[i]=a[l-1];
	a[l-1]=temp;
	l--;
    }
    if(strcmp(a,b)!=0)
    cout<<"String is not palindrome";
    else
    cout<<"String is palindrome";
}


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void palindrome(char []);
int main()
{

    char n[20];
	
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void palindrome(char []);
int main()
{

    char n[20