#include<iostream.h>
#include<conio.h>
#include<process.h>
class Error
{
public:
virtual  void printmessage()
{
cout<<"\n ***Error: type Error\n";
};

class Arithmetic: public Error
{
public:
virtual void printmessage()
{
cout<<"\n ***Error : type Arithmetic \n";
};

class DivbyZero: public Arithmetic
{
public:
virtual void printmessage()
{
cout<<"\n ***Error : Divisor 0 \n";
};

class DivbyNeg : public Arithmetic
{
public:
virtual void printmessage()
{
cout<<"\n ***Error: Negative divisor\n ";
};

class BadOperator : public Arithmetic
{
public:
virtual void printmessage()
{
cout<<"\n ***Error: invalid operator \n";
};


// Math function for calculation

double math(char oper, double a,double b)
{
double result;
switch(oper)
{
case '+' :
result = a+b;
break;
case '-' :
result = a-b;
break;
case '*' :
result = a*b;
break;
case '/' :
if(b==0)
throw DivbyZero();
if(b<0)
throw DivbyNeg();
result = a/b;
break;
default:
throw BadOperator();
break;
}
return result;
}

void main()
{
clrscr();
cout<<" Beginning of demonstration";
cout<<endl;
double num1,num2;
char oper;
cout<<"\n Enter the first operand";
cin>>num1;
cout<<"\n Enter the second operand";
cin>>num2;
cout<<"\n Enter the operator";
cin>>oper;
try
{
double result = math(oper,num1,num2);
cout<<"result is : "<< result<<endl;
}
catch(Error&error)
{
error.printmessage();
exit(0);
}
cout<<"\n End of Demonstration";

getch();
}