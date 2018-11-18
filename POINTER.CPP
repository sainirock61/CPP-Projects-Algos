//  12. WAP that swaps two numbers using pointers.


#include<iostream.h>
#include<conio.h>
int main()
{
    system("color f3");
    int temp,a,b;
    int *ptr1,*ptr2;
    cout<<"Enter value of a"<<" ";
    cin>>a;
    cout<<"Enter value of b"<<" ";
    cin>>b;
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<"\nValue of a after swapping"<<" "<<*ptr1<<endl;
    cout<<"Value of b after swappping"<<" "<<*ptr2;
    getch();
    return 0;
}
    
    