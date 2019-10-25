/* 26. WAP to retrieve the student information from file created in previous question and print it in the following format:
       Roll No.    Name    Marks     */

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    system("color f3");
 string line;
 ifstream fin;
 fin.open("Records.txt", ios::in);
 for(int i=0; i<10; i++)
 {
 
 getline(fin,line,'.');
 cout<<"\n"<<line;
}
system("pause");
 return 0;
 
}
fin.open("Records.txt", ios::in);
for(int i=0; i<10; i++)
 {
 
 getline(fin,line,'.');
 cout<<"\n"<<line;
 }
