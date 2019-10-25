#include<iostream>
using namespace std;

void bufferClr()
{
    cin.clear();
    cin.ignore(100,'\n');
}
void drawline()
{
    cout<<"\n"<<setfill('-')<<setw(80)<<"-";
    cout<<setfill(' ');
}

class Length
{

public:
    int feet;
    int inch;
    void inputLength();
    void printLength();
    Length operator+(Length L2);
    Length operator-(Length L2);
};
int main()
{
    drawline();
    cout<<"\t\t\t **** OPERATIONS ON MATRIX CLASS ****";
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
            cout<<"Length 1:";
            Length L1;
            L1.inputLength();
            cout<<"Length 2:";
            Length L2;
            L2.inputLength();
            cout<<"\n\t\t\t   **---- MENU ----**"
                <<"\n\t1->Add the 2 lengths"
                <<"\n\t2->Subtract the 2 lengths"
                <<"\n\nEnter your choice:";
                int choice;

                while(!(cin>>choice) || (choice!=1 && choice!=2 ))
                {
                    bufferClr();
                    cout<<"Invalid Input. Enter only 1 or 2:";
                }
                switch(choice)
                {
                case 1:
                    {
                        Length L3=L1+L2;
                        cout<<"\nLength 1=";L1.printLength();
                        cout<<"  Length 2=";L2.printLength();
                        cout<<"\nSum Length=";L3.printLength();
                        break;
                    }
                case 2:
                    if(L1.feet<L2.feet || (L1.feet==L2.feet && L1.inch<L2.inch))
                    {
                        cout<<"Subtraction Can't be performed as length 1 is smaller than length 2";
                    }
                    else
                    {

                        cout<<"\nLength 1=";L1.printLength();
                        cout<<"  Length 2=";L2.printLength();
                        Length L3=L1-L2;
                        cout<<"\nDifference Length=";L3.printLength();
                    }
                    break;
                }
        }
    }

    drawline();

    return 0;

}

void Length::printLength()
{
    cout<<feet<<"'"<<inch<<"\"";
}
void Length::inputLength()
{
    cout<<"\nEnter feet:";
    while(!(cin>>feet) || feet<0)
    {
        bufferClr();
        cout<<"Invalid Input. Enter again:";
    }
    cout<<"\nEnter inch:";
    while(!(cin>>inch) || inch>11||inch<0)
    {
        bufferClr();
        cout<<"Invalid Input. Enter again:";
    }

}
Length Length::operator+(Length L2)
{
    Length L3;
    L3.feet=feet+L2.feet;
    L3.inch=inch+L2.inch;
    if(L3.inch>=12)
    {
        L3.inch-=12;
        L3.feet+=1;
    }
    return L3;
}
Length Length::operator-(Length L2)
{
    Length L3;
    L3.feet=0;
    L3.inch=0;
    L3.feet=feet-L2.feet;
    L3.inch=inch-L2.inch;
    if(L3.inch<0)
    {
        L3.inch+=12;
        L3.feet-=1;
    }
    return L3;
}
Length Length::operator-(Length L2)
{
    Length L3;
    L3.feet=0;
    L3.inch=0;
    L3.feet=feet-L2.feet;
    L3.inch=inch-L2.inch;
    if(L3.inch<0)
    {
        L3.inch+=12;
        L3.feet-=1;
    }
    return L3;
