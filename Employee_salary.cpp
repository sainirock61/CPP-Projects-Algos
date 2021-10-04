#include<iostream>
#include<fstream>


using namespace std;

int main()
{
 fstream obj;
 struct student s[10];
 int i,n;

 string filename = "data.txt";
 
 cout << "Enter the output filename: ";
 cin >> filename;


 obj.open(filename,ios::in);
 cout<<"\nAccessing from the file '" << filename << "':\n "<<endl;
 cout<<"\t| Emp_id\t|NAME\t|HRA\t|DA\t|Extra Allowances |\n\n";

 for(i=0;i<n;i++)
	{

	 obj.read((char*)&s[i],sizeof(s[i]));
	 cout<<"\t "<<s[i].empid<<"\t"<<s[i].nm<<"\t"<<s[i].hra<<"\t"<<s[i].da<<"\t   "<<s[i].ext<<endl;
	}
	
	cout<<"\n EMPLOYEE-"<<i+1<<":"<<endl;
	 cout<<"Emp_id:";
	 cin>>s[i].empid;
	 cout<<"Name:";
	 cin>>s[i].nm;
	 cout<<"HRA:";
	 cin>>s[i].hra;
	 cout<<"DA:";
	 cin>>s[i].da;
	 cout<<"Extra:";
	 cin>>s[i].ext;

 obj.close();

}
