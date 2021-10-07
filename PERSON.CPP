/* Create the Person class. Create some objects of this class(by taking information from the user). Inherit the class
       Person to create two classes Teacher and Student class. Maintain the respective information in the classes and      
       create,display and delete objects of these two classes(Use Runtime Polymorphism). */
 
 
#include<iostream>
using namespace std;

class person
{
		string name;
		int age;
	public:
		person()
		{
			name="No Name";
			age=0;
		}
		virtual void set()  //virtual function
		{
			cout<<"\n Enter Name: ";
			cin>>name;
			cout<<" Enter Age: ";
			cin>>age;
		}
		virtual void print()  //virtual function
		{
			cout<<"\n Name: "<<name;
			cout<<"\n Age: "<<age;
		}
};
class teacher:public person
{
		string subject;
		int salary;
	public:
		teacher()
		{
			subject="None";
			salary=10000;
		}
		void set()
		{
			cout<<"\n Enter Subject: ";
			cin>>subject;
			cout<<" Enter Salary: ";
			cin>>salary;	
		}
		void print()
		{
			cout<<"\n Subject taught: "<<subject;
			cout<<"\n Salary: "<<salary;
		}
};
class student:public person
{
		char grade;
		int standard;
	public:
		student()
		{
			grade='F';
			standard=1;
		}
		void set()
		{
			cout<<"\n Enter Grade: ";
			cin>>grade;
			cout<<" Enter Standard: ";
			cin>>standard;	
		}
		void print()
		{
			cout<<"\n Grade: "<<grade;
			cout<<"\n Standard: "<<standard;
		}
};
int main()
{
    system("color f3");
	person* p;  //use of pointer for runtime polymorphism
	person p1;
	p=&p1;  //p=address of person type object
	cout<<"\n OBJECT OFP CLASS: ";
	p->set();
	p->print();
	cout<<endl;
	cout<<"\n OBJECT OF TCLASS: ";
	teacher t1;
	p=&t1;  //p=address of teacher type object
	p->set();
	p->print();
	cout<<"\n";
	student s1;
	p=&s1;  //p=address of student type object
	cout<<"\n OBJECT OF STUDENT CLASS: ";
	p->set();
	p->print();
	delete p;  //deallocating memory
	
	    set<int> s;
	    set<int>::iterator it;
	    int q,x;
	    int qt;
	    cin >> q;
	    while(q--){
		cin>>qt>>x;
		switch(qt){
		    case 1:s.insert(x);
			    break;
		    case 2:s.erase(x);
			    break;
		    case 3:it=s.find(x);
			    if(it==s.end())
				cout<<"No"<<endl;
			    else
				cout<<"Yes"<<endl;
			    break;
        }
    }
	
	
	return 0;
	
	
}
