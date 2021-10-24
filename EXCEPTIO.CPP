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

int math(char oper, double a,double b)
{
int result;
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
    result = 0;
throw BadOperator();
break;
}
return result;
}
