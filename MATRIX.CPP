#include<iostream>

using namespace std;
void bufferClr()
{
    cin.clear();
    cin.ignore(100,'\n');
}
void drawline()
{
    cout<<"\n"<<setfill('--')<<setw(80)<<"-";
    cout<<setfill(' ');
}
void swapvar(int &a,int &b)
{
    int x=a;
    a=b;
    b=x;
}
class Matrix
{
public:
    int rows,columns;
    Matrix()
    {
        rows=0;
        columns=0;
    }
	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
		
		
		        rows=0;
        columns=0;
    }
	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
		
		
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,        rows=0;
        columns=0;
    }
	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
		
		
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,        rows=0;
        columns=0;
    }
	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
		
		
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,
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
		{\
    Matrix(int,int);
    int elements[10][10];
    void printArr();
    void addArr(Matrix toAdd);
    void subtArr(Matrix toSubtract);
    void multiArr(Matrix toMultiply);
    void transpose();
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
            cout<<"\n\nEnter the order of the array(row,column)[max 10 for each]:";
            int row,col;
            while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
            {
                bufferClr();
                cout<<"\nInvalid input.Enter again:";
            }
            Matrix M1(row,col);
            M1.printArr();
            cout<<"\n\t\t\t   **---- MENU ----**"
                <<"\n\t1->Addition"
                <<"\n\t2->Subtraction"
                <<"\n\t3->Multiplication"
                <<"\n\t4->Transpose"
                <<"\n\nEnter your choice:";
            int choice;
            while(!(cin>>choice) || (choice!=1 && choice!=2 && choice!=3 && choice!=4))
            {
                bufferClr();
                cout<<"Invalid Input. Enter only 1,2,3 or 4:";
            }

            switch(choice)
            {
            case 1:
                cout<<"\nEnter the rows and columns for Matrix 2:";
                while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
                {
                    bufferClr();
                    cout<<"\nInvalid input.Enter again:";
                }
                if(M1.rows!=row || M1.columns!=col)
                {
                    cout<<"\nAddition can't be performed as the orders of both arrays are not same";
                }
                else
                {
                    Matrix M2(row,col);
                    M1.addArr(M2);
                }
                break;
            case 2:
                cout<<"\nEnter the rows and columns for Matrix 2:";
                while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
                {
                    bufferClr();
                    cout<<"\nInvalid input.Enter again:";
                }
                if(M1.rows!=row || M1.columns!=col)
                {
                    cout<<"\nSubtraction can't be performed as the orders of both arrays are not same";
                }
                else
                {
                    Matrix M2(row,col);
                    M1.subtArr(M2);

                }
                break;
            case 3:
                cout<<"\nEnter the rows and columns for Matrix 2:";
                while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
                {
                    bufferClr();
                    cout<<"\nInvalid input.Enter again:";
                }
                if(M1.columns!=row)
                {

                    cout<<"\nMultiplication can't be performed due to incompatibility of orders";
                }

                else
                {
                    Matrix M2(row,col);
                    M1.multiArr(M2);

                }
                break;
            case 4:
                M1.transpose();
            }
            drawline();
        }
    }
    drawline();
    cout<<"\t\t\t***T H A N K  Y O U***";
    Matrix M1(row,col);
     M1.printArr();
               cout<<"\n\t\t\t   **---- MENU ----**"
                <<"\n\t1->Addition"
                <<"\n\t2->Subtraction"
                <<"\n\t3->Multiplication"
                <<"\n\t4->Transpose"
                <<"\n\nEnter your choice:";
            int choice;
    return 0;

}
Matrix::Matrix(int x,int y)
{
    rows=x;
    columns=y;
    cout<<"\nEnter the elements of the matrix:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            while(!(cin>>elements[i][j]))
            {
                bufferClr();
                cout<<"Invalid Input! Please enter again:";
            }
        }
    }
}
void Matrix::printArr()
{
    for(int i=0;i<rows;i++)
    {
        cout<<"\n";
        for(int j=0;j<columns;j++)
        {
            cout<<setw(3)<<elements[i][j]<<" ";
        }
    }
}
void Matrix::addArr(Matrix toAdd)
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            elements[i][j]+=toAdd.elements[i][j];
        }
    }
    cout<<"\n\nSUM ARRAY\n";
    printArr();
}
void Matrix::subtArr(Matrix toSubtract)
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            elements[i][j]-=toSubtract.elements[i][j];
        }
    }
    cout<<"\n\nResult Array"<<endl;
    printArr();
}
void Matrix::multiArr(Matrix toMultiply)
{
    Matrix resMatrix;
    resMatrix.rows=rows;
    resMatrix.columns=toMultiply.columns;
    for(int i=0;i<rows;i++)
        {
            for(int j=0;j<toMultiply.columns;j++)
            {
                int sum=0;
                for(int k=0;k<columns;k++)
                {
                    sum+=elements[i][k]*toMultiply.elements[k][j];
                }
                resMatrix.elements[i][j]=sum;
            }
        }
        cout<<"\n\nProduct array\n";
        resMatrix.printArr();
}
void Matrix::transpose()
{
    int maxim;
    if(rows>columns)
        maxim=rows;
    else
        maxim=columns;
    for(int i=0;i<maxim;i++)
    {
        for(int j=0;j<maxim;j++)
        {
            if(i<j)
                swapvar(elements[i][j],elements[j][i]);

        }
    }
    swapvar(rows,columns);
    printArr();
}
		
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
            cout<<"\n\nEnter the order of the array(row,column)[max 10 for each]:";
            int row,col;
            while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
            {
                bufferClr();
                cout<<"\nInvalid input.Enter again:";
            }
            Matrix M1(row,col);
            M1.printArr();
            cout<<"\n\t\t\t   **---- MENU ----**"
                <<"\n\t1->Addition"
                <<"\n\t2->Subtraction"
                <<"\n\t3->Multiplication"
                <<"\n\t4->Transpose"
                <<"\n\nEnter your choice:";
            int choice;
            while(!(cin>>choice) || (choice!=1 && choice!=2 && choice!=3 && choice!=4))
            {
                bufferClr();
                cout<<"Invalid Input. Enter only 1,2,3 or 4:";
            }

            switch(choice)
            {
            case 1:
                cout<<"\nEnter the rows and columns for Matrix 2:";
                while(!(cin>>row) || (row>10 || row<1) || (col>10 || col<1))
                {
                    bufferClr();
                    cout<<"\nInvalid input.Enter again:";
                }
                if(M1.rows!=row || M1.columns!)
                {
                    cout<<"\nAddition can't be performed as the orders of both arrays are not same";
                }
                else
                {
                    Matrix M2(row,col);
                    M1.addArr(M2);
                }
                break;
            case 2:
                cout<<"\nEnter the rows and columns for Matrix 2:";
                while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
                {
                    bufferClr();
                    cout<<"\nInvalid input.Enter again:";
                }
                if(M1.rows!=row || M1.columns!=col)
                {
                    cout<<"\nSubtraction can't be performed as the orders of both arrays are not same";
                }
                else
                {
                    Matrix M2(row,col);
                    M1.subtArr(M2);

                }
                break;
            case 3:
                cout<<"\nEnter the rows and columns for Matrix 2:";
                while(!(cin>>row>>col) || (row>10 || row<1) || (col>10 || col<1))
                {
                    bufferClr();
                    cout<<"\nInvalid input.Enter again:";
                }
                if(M1.columns!=row)
                {

                    cout<<"\nMultiplication can't be performed due to incompatibility of orders";
                }

                else
                {
                    Matrix M2(row,col);
                    M1.multiArr(M2);

                }
                break;
            case 4:
                M1.transpose();
            }
            drawline();
        }
    }
    drawline();
    cout<<"\t\t\t***T H A N K  Y O U***";
    Matrix M1(row,col);
     M1.printArr();
               cout<<"\n\t\t\t   **---- MENU ----**"
                <<"\n\t1->Addition"
                <<"\n\t2->Subtraction"
                <<"\n\t3->Multiplication"
                <<"\n\t4->Transpose"
                <<"\n\nEnter your choice:";
            int choice;
    return 0;

}
Matrix::Matrix(int x,int y)
{
    rows=x;
    columns=y;
    cout<<"\nEnter the elements of the matrix:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            while(!(cin>>elements[i][j]))
            {
                bufferClr();
                cout<<"Invalid Input! Please enter again:";
            }
        }
    }
}
void Matrix::printArr()
{
    for(int i=0;i<rows;i++)
    {
        cout<<"\n";
        for(int j=0;j<columns;j++)
        {
            cout<<setw(3)<<elements[i][j]<<" ";
        }
    }
}
void Matrix::addArr(Matrix toAdd)
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            elements[i][j]+=toAdd.elements[i][j];
        }
    }
    cout<<"\n\nSUM ARRAY\n";
    printArr();
}
void Matrix::subtArr(Matrix toSubtract)
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            elements[i][j]-=toSubtract.elements[i][j];
        }
    }
    cout<<"\n\nResult Array"<<endl;
    printArr();
}
void Matrix::multiArr(Matrix toMultiply)
{
    Matrix resMatrix;
    resMatrix.rows=rows;
    resMatrix.columns=toMultiply.columns;
    for(int i=0;i<rows;i++)
        {
            for(int j=0;j<toMultiply.columns;j++)
            {
                int sum=0;
                for(int k=0;k<columns;k++)
                {
                    sum+=elements[i][k]*toMultiply.elements[k][j];
                }
                resMatrix.elements[i][j]=sum;
            }
        }
        cout<<"\n\nProduct array\n";
        resMatrix.printArr();
}
