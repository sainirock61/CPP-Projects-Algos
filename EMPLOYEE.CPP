#include<iostream>
#include "Common.h"
#include<fstream>
#include<cstdlib>
using namespace std;


int main()
{
    ifstream employeeData;
    employeeData.open("EMPLOYEE.DAT");
    if(!employeeData)
    {
        cerr<<"\aERROR 100 opening EMPLOYEE.DAT";
        exit(100);
    }
    cout<<"\t\t\t  *** E M P L O Y E E  D A T A ***";
    drawline();
    char eID[5],name[10];
    int basic,hra,da,extra_allowance;
    cout<<"\n\tE.ID "<<"\tName"<<"\tBasic"<<"\tHRA"<<"\tDA"<<"\tExtra Allowance\n";
    while(getEmp(employeeData,eID,name,basic,hra,da,extra_allowance))
    {
        cout<<"\t"<<eID<<"\t"<<name<<"\t"<<basic<<"\t"<<hra<<"\t"<<da<<"\t"<<extra_allowance<<"\n";

    }
    employeeData.close();
    return 0;

}
