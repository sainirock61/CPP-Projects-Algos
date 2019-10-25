/* Create a class Box containing length, breath and height. Include following methods in it:
     a) Calculate surface Area
     b) Calculate Volume
     c) Increment, Overload ++ operator (both prefix & postfix)
     d) Decrement, Overload -- operator (both prefix & postfix)
     e) Overload operator == (to check equality of two boxes), as a friend function
     f) Overload Assignment operator
     g) Check if it is a Cube or cuboid
Write a program which takes input from the user for length, breath and height to test the above class. */


#include<iostream>
using namespace std;

class box
{
		float l, b, h;
	public:
		box()  //constructor
		{
			l=b=h=1;
			cout<<"\n\n NEW BOX CREATED! ";
		}
	
		float surface_area()  //to calculate surface area
		{
			return 2*(l*b+b*h+h*l);
		}
		float volume()  //to calculate volume
		{
			return l*b*h;
		}	
		void operator++()  //overloaded prefix increment operator
		{
			l++;
			b++;
			h++;
			cout<<"\n Incremented values of box: ";
			print();
		}
		void operator++(int)  //overloaded postfix increment operator
		{
			l++;
			b++;
			h++;
			cout<<"\n Incremented values of box: ";
			print();
		}
		void operator--()  //overloaded prefix decrement operator
		{
			l--;
			b--;
			h--;
			cout<<"\n Decremented values of box: ";
			print();
		}
		void operator--(int)   //overloaded postfix decrement operator
		{
			l--;
			b--;
			h--;
			cout<<"\n Decremented values of box: ";
			print();
		}
		friend bool operator==(box b1, box b2);  //overloaded equality operator, as friend function
		void operator=(box b1)  //overloaded assignment operator, acting as copy constructor
		{
			l=b1.l;
			b=b1.b;
			h=b1.h;
			cout<<"\n\n Modified values of box: ";
			print();
		}
		void check_cube()  //to check if the box is a cube
		{
			if(l==b && l==h)
				cout<<"\n Box created is a cube.";
			else
				cout<<"\n Box created is a cuboid.";
		}
		void set()  //to set values of length, breadth and height
		{
			cout<<"\n Enter l: ";
			cin>>l;
			cout<<" Enter b: ";
			cin>>b;
			cout<<" Enter h: ";
			cin>>h;
		}
		void print()
		{
			cout<<"\n Length: "<<l;
			cout<<"\t Breadth: "<<b;
			cout<<"\t Height: "<<h;
		}
};
bool operator==(box b1, box b2)
{
	return(b1.l==b2.l && b1.b==b2.b && b1.h==b2.h);	
}

int main()
{
    system("color f3");
	box cube;
	cube.set();
	cube.check_cube();
	cout<<"\n Surface Area: "<<cube.surface_area();
	cout<<"\n Volume: "<<cube.volume();
	++cube;
	cube++;
	--cube;
	cube--;
	box cuboid;
	cuboid.set();
	cuboid.check_cube();
	cout<<"\n Surface Area: "<<cuboid.surface_area();
	cout<<"\n Volume: "<<cuboid.volume();
	if(cuboid==cube)
		cout<<"\n The 2 boxes are equal.";
	else
		cout<<"\n The 2 boxes are not equal.";
	cuboid=cube;
	if(cuboid==cube)
		cout<<"\n The 2 boxes are equal.";
	else
		cout<<"\n The 2 boexes are not equal.";
		system("pause");
	return 0;
}
