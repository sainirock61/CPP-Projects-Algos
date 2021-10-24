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


int main()
{
   	for(i=0; i<=10: i++)
	{
		if(i<0)
			cube++
		else
			cube--
	}
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

