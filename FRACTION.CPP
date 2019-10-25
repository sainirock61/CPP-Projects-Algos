Q. Create a class fraction  containing numerator  and denominator part of a fraction. Perform overloading of operator for the following 
a)  decrement, Overload --operator (both prefix & postfix)
b)  Overload operator  = (to check equality of two complex numbers 
c) increment, Overload ++ operator (both prefix & postfix)
e) Addition all done in class
f) Multiplication
g) copy constructor
Write a program which takes input from the user  to test the above class.


#include<iostream>
#include "Common.h"
using namespace std;
int hcf(int a,int b)
{
    int hcf=1;
    for(int i=1;(i<=a && i<=b);i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}
	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,
		$brightness= 5;

	//we define here the style of the map
	var style= [ 
		{	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,
		$brightness= 5;

	//we define here the style of the map
	var style= [ 
		{
class Fraction
{
private:
    int numerator;
    int denominator;
public:

    void reduce()
    {
        int f=hcf(numerator,denominator);
        numerator/=f;
        denominator/=f;
    }
    Fraction()
    {
        numerator=0;
        denominator=1;
    }
    Fraction(int num,int den)
    {
        numerator=num;
        denominator=den;
        reduce();
    }

    void input_fr()
    {
        int n,d;
        cout<<"\nEnter numerator and denominator:";

        while(!(cin>>n>>d) || d==0)
        {
            bufferClr();
            cout<<"Invalid input. Enter again(Make sure denominator is not 0):";
        }
        numerator=n;
        denominator=d;

    }
    void increment()
    {
        numerator+=denominator;
        reduce();
	    cout<<"changed";
    }
    void addTo(Fraction fr)
    {
        numerator=(numerator*fr.denominator)+(denominator*fr.numerator);
        denominator*=fr.denominator;
        reduce();
    }
    Fraction add(Fraction fr2)
    {
        Fraction fr;
        fr.numerator=(numerator*fr2.denominator)+(denominator*fr2.numerator);
        fr.denominator=denominator*fr2.denominator;
        fr.reduce();
        return fr;
    }

    Fraction multiply(Fraction fr);
    Fraction operator--();
    Fraction operator--(int);
    int operator==(Fraction fr);
    Fraction operator++();
    Fraction operator++(int);
    friend void printFr(Fraction fr);
    Fraction(const Fraction& fr2);
};
void printFr(Fraction fr)
{
        cout<<" "<<fr.numerator<<"/"<<fr.denominator<<" ";
}
int main()
{
    drawline();
    cout<<"\t\t\t  *** F R A C T I O N  C L A S S ***";
    drawline();
    int exit=0;
    while(exit==0)
    {

        cout<<"\n\t\t->Enter 1 to exit."
            <<"\n\t\t->Enter 2 to continue"
            <<"\n\t\t  ENTER YOU CHOICE:";

        int ans;
        while(!(cin>>ans) || (ans!=1 && ans!=2))
        {
            bufferClr();
            cout<<"\nInvalid Input.Enter Again:";
        }
        if(ans==1)
            exit=1;
        else
        {
            drawline();
            cout<<"Fraction 1:-";
            Fraction fr1;
            fr1.input_fr();
            cout<<"\n\t\t\t-----MENU-----"

                <<"\n\t1->Decrement Fraction"
                <<"\n\t2->Increment Fraction"
                <<"\n\t3->Test equality with other fraction"
                <<"\n\t4->Add a fraction to the old fraction(fr1+=fr2)"
                <<"\n\t5->Sum of this fraction with other(fr1+fr2)"
                <<"\n\t6->Multiply with another fraction"
                <<"\n\t7->Create copy of the old fraction"
                <<"\nEnter your choice(1 or 7)";
            int choice;
            while(!(cin>>choice) || (choice<1 || choice>7) )
            {
                bufferClr();
                cout<<"\nInvalid Input. Enter again:";
            }
            switch(choice)
            {

            case 1:
                {
                cout<<"\nPre decrement:";
                cout<<"\nValue of --fr=";printFr(--fr1);cout<<"  Value after decrement:";printFr(fr1);
                cout<<"\nPost decrement:"
                    <<"\nValue of fr--=";printFr(fr1--);cout<<"  Value after decrement:";printFr(fr1);
                break;
                }
            case 2:
                {
                cout<<"\nPre increment:";
                cout<<"\nValue of ++fr=";printFr(++fr1);cout<<"  Value after increment:";printFr(fr1);
                cout<<"\nPost increment:"
                    <<"\nValue of fr++=";printFr(fr1++);cout<<"  Value after increment:";printFr(fr1);
                break;
                }
            case 3:
                {
                    cout<<"\nFraction 2:";
                    Fraction fr2;
                    fr2.input_fr();
                    if(fr1==fr2)
                    {
                        cout<<"\nBoth fractions are same";
                    }
                    else{cout<<"\nBoth are different";}
                    break;
                }
            case 4:
                {
                    cout<<"\nFraction 2:";
                    Fraction fr2;
                    fr2.input_fr();
                    cout<<"\nFraction 1 initially=";printFr(fr1);
                    fr1.addTo(fr2);
                    cout<<"\nFraction 1 after adding=";printFr(fr1);
                    break;
                }
            case 5:
                {
                    cout<<"\nFraction 2:";
                    Fraction fr2,fr3;
                    fr2.input_fr();
                    fr3=fr1.add(fr2);
                    cout<<"\nFraction 1=";printFr(fr1);
                    cout<<"\nFraction 2=";printFr(fr2);
                    cout<<"\nSum fraction=";printFr(fr3);
                    break;
                }
            case 6:
                {
                    cout<<"\nFraction 2:";
                    Fraction fr2,fr3;
                    fr2.input_fr();
                    fr3=fr1.multiply(fr2);
                    cout<<"\nFraction 1=";printFr(fr1);
                    cout<<"\nFraction 2=";printFr(fr2);
                    cout<<"\nProduct fraction=";printFr(fr3);
                    break;
                }
            case 7:
                {
                    cout<<"\nFraction 2 as a copy of fraction 1";
                    Fraction fr2(fr1);
                    cout<<"\nFraction 1=";printFr(fr1);
                    cout<<"\nFraction 2=";printFr(fr2);
                    break;
                }

            }
            drawline();
        }
    }
    return 0;

}
 Fraction Fraction::operator--()//prefix decrement
{
    numerator-=denominator;
    reduce();
    return (*this);
}
 Fraction Fraction::operator--(int)//postfix decrement
{
    const Fraction saveObject(*this);
    numerator-=denominator;
    reduce();
    return (saveObject);
}
int Fraction::operator==(Fraction fr)//"is equal to" logical operator
{
    reduce();
    fr.reduce();
    if(numerator==fr.numerator && denominator==fr.denominator)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Fraction Fraction::operator++(int)//postfix increment
{
    const Fraction saveObject(*this);
    numerator+=denominator;
    reduce();
    return (saveObject);
}
Fraction Fraction::operator++()//prefix increment
{
    numerator+=denominator;
    reduce();
    return (*this);
}
Fraction Fraction::multiply(Fraction fr2)//multiply two fraction and returns a fraction object
{
    Fraction fr_store;
    fr_store.numerator=numerator*fr2.numerator;
    fr_store.denominator=denominator*fr2.denominator;
    fr_store.reduce();
    return fr_store;
}
Fraction::Fraction(const Fraction& fr2)//copy constructor
{
    numerator=fr2.numerator;
    denominator=fr2.denominator;
}
Fractions.cpp
Displaying Fractions.cpp.
