/*  Copy the contents of one text file to another file,after removing all whitespaces. */
 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    
	ifstream ifile;
	ifile.open("sample.txt");  //file from which data is read
	if(!ifile)
	{
		cout<<"\n Error opening file! ";
		exit(1);
	}
	ofstream ofile;
	ofile.open("copy.txt");  //file into which data is copied
	if(!ofile)
	{
		cout<<"\n Error opening file! ";
		exit(1);
	}
	char c;
	cout<<"\n Content of the first file: "<<endl<<' ';
	while(ifile.get(c))  //to read one character at a time
	{
		cout<<c;
		if(c!=' ')  //omitting all whitespaces
			ofile.put(c);
	}
	ifile.close();
	ofile.close();
	ifile.open("copy.txt");  //reusing ifile to read from the second file
	cout<<"\n\n Content of second(copied) file: "<<endl<<' ';
	while(ifile.get(c))
		cout<<c;
	ifile.close();
	system("pause");
	return 0;
}