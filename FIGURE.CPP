/* 23. Create a class Triangle. Include overloaded functions for calculating area.Overload assignment operator and 
       equality operator.*/

#include<iostream>
#include<conio.h>
using namespace std;

class triangle
{
		int a, b, c;
	public:	
		triangle(int x, int y, int z)  //parameterized constructor
		{
			a=x;
			b=y;
			c=z;      equality operator.*/

#include<iostream>
#include<conio.h>
using namespace std;

class triangle
{
		int a, b, c;
	public:	
		triangle(int x, int y, int z)  //parameterized constructor
		{
			a=x;
			b=y;
			c=z;
			cout<<"\n NEW TRIANGLE CREATED! ";
		}
		float area(int h, int b) //overloaded area function
		{
			return h*b*0.5;  //General formula for area
		}
		float area()    //overloaded area function
		{
			return (1.732*a*a)/4;  //Area of equilateral triangle
		}
		void operator=(triangle t1)  //overloaded assignment operator acts as a copy constructor
		{
			a=t1.a;
			b=t1.b;
			c=t1.c;
		}
		bool operator== (triangle t1)  //overloaded equality operator checks for equal sides of the triangle
		{
			bool b1=false;
			if(t1.b==b && t1.a==a && t1.c==c)
				b1=true; 
			return b1;			
		}
		void print()
		{
			cout<<"\n Sides of the triangle: "<<a<<' '<<b<<' '<<c;
		}
};
int main()
{
    system("color f3");
	triangle eq(5,5,5);
	eq.print();
	cout<<"\n Area: "<<eq.area()<<endl;
	triangle rt(8,6,10);
	rt.print();
	cout<<"\n Area: "<<rt.area(8,6)<<endl;
	eq=rt;                                         //sides of eq=sides of rt
	cout<<"\n New Values for sides of the first triangle: ";
	eq.print();
	if(eq == rt)
		cout<<"\n\n Triangles 1 and 2 are equal.";
	system("pause");
    return 0;
}
int main()
{
    system("color f3");
	triangle eq(5,5,5);
	eq.print();
	cout<<"\n Area: "<<eq.area()<<endl;
	triangle rt(8,6,10);
	rt.print();
	cout<<"\n Area: "<<rt.area(8,6)<<endl;
	eq=rt;                                         //sides of eq=sides of rt
	cout<<"\n New Values for sides of the first triangle: ";
	eq.print();
	if(eq == rt)
		cout<<"\n\n Triangles 1 and 2 are equal.";
	system("pause");
    return 0;
}int main()
{
    system("color f3");
	triangle eq(5,5,5);
	eq.print();
	cout<<"\n Area: "<<eq.area()<<endl;
	triangle rt(8,6,10);
	rt.print();
	cout<<"\n Area: "<<rt.area(8,6)<<endl;
	eq=rt;                                         //sides of eq=sides of rt
	cout<<"\n New Values for sides of the first triangle: ";
	eq.print();
	if(eq == rt)
		cout<<"\n\n Triangles 1 and 2 are equal.";
	system("pause");
    return 0;
}
int main()
{
    system("color f3");
	triangle eq(5,5,5);
	eq.print();
	cout<<"\n Area: "<<eq.area()<<endl;
	triangle rt(8,6,10);
	rt.print();
	cout<<"\n Area: "<<rt.area(8,6)<<endl;
	eq=rt;                                         //sides of eq=sides of rt
	cout<<"\n New Values for sides of the first triangle: ";
	eq.print();
	if(eq == rt)
		cout<<"\n\n Triangles 1 and 2 are equal.";
	system("pause");
    return 0;
}

