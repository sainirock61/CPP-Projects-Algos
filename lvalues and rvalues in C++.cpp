/* ---- lvalues and rvalues ---- 
*/
#include <iostream>

void setValue(int val) {      //here int val is a lvalue
} //function-setValue

void setValue2(int& val) {      //here int val is a lvalue reference
} //function-setValue

void printName(std::string& name) {
   std::cout << name << std::endl;
} //function-printName

void rvalueRef(std::string&& str) {
} //function-rvalueRef

int main() {
   int i = 34;    //here variable i is lvalue and 10 is rvalue, lvalue is for location and i is a location and also rvalue cannot be 
                  //assigned to something like 34 = i, but remember l doesn't always stand for location

   setValue(i);   //we can pass lvalue
   setValue(89);  //we can also pass rvalue to lvalue

   setValue2(i);  //lvalue can be converted to lvalue reference
   setValue2(876);   //ERROR rvalue cannot be converted to lvalue reference

   //but rvalue can also be converted to lvalue ref by using const key word
   int& var1 = 90;    //ERROR
   const int& var2 = 90;      //this is a work-around, basically compiler creates a temp variable of 90 and then assignes it to var2

   //strings example

   std::string firstName = "Ravi";
   std::string lastName = "Pawar";
   std::string fullName = firstName + lastName; 
   //for above everything on left is lvalue and everything on right is rvalue
   //temporarily firstName + lastName is constructed and stored in fullName, hence 'firstName + lastName' is also rvalue
   printName(fullName);  //correct
   printName(firstName + lastName); //ERROR, we have to use 'const std::string& name' as parameter for printName function 


   //we use && for rvalue reference....see function rvalueRef
   rvalueRef(firstName + lastName);    //this is correct as rvalueRef takes rvalue reference as argument

   /* so basically lvalue has storage and rvalue is temporary */
} //function-main
