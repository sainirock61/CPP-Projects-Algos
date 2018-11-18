#include<iostream>
#include<fstream>


using namespace std;

struct student
{
  int empid,basic,hra,da,ext;
  char nm[20];
};

int main()
{
 fstream obj;
 struct student s[10];
 int i,n;



 obj.open("data.txt",ios::out);
 cout<<"How many records to enter(max 10)"<<endl;
 cin>>n;
 for(i=0;i<n;i++)
	{
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

	 obj.write((char*)&s[i],sizeof(s[i]));
	}
 obj.close();

 obj.open("data.txt",ios::in);
 cout<<"\nAccessing from the file:\n "<<endl;
 cout<<"\t| Emp_id\t|NAME\t|HRA\t|DA\t|Extra Allowances |\n\n";

 for(i=0;i<n;i++)
	{

	 obj.read((char*)&s[i],sizeof(s[i]));
	 cout<<"\t "<<s[i].empid<<"\t"<<s[i].nm<<"\t"<<s[i].hra<<"\t"<<s[i].da<<"\t   "<<s[i].ext<<endl;
	}

 obj.close();

}
