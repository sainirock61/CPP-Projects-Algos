#include <iostream>
int n1, m1, i, j, k, l, t, c;
int inputcheck()
{
    int o;
    cin >> o;
    while (o)
    {
	if (cin.fail())
	{
	    cin.clear();
	    cin.ignore(999, '\n');
	    cout << "Please enter a valid number: ";
	    cin >> o;
	}
	else
	{
	    break;
	}
    }

    return o;
}
void inputarray(int x[][100], int n, int m)
{
    cout << "Enter " << (n * m) << " elements into the matrix : \n";

    for (i = 0; i < n; i++)
    {
	for (j = 0; j < m; j++)
	{
	    x[i][j] = inputcheck();
	}
    }
}

void main()
{

    cout << "Enter the order of the matrix within 100 in both dimensions: \n";
    n1 = inputcheck();
    cout << "*";
    m1 = inputcheck();
    cout << endl;
    int a[100][100];
    inputarray(a, n1, m1);
    cout << "The entered matrix is as follows : \n";
    for (i = 0; i < n1; i++)
    {
	for (j = 0; j < m1; j++)
	{
	    cout << a[i][j] << "\t";
	}
	cout << endl;
    }

    cout << "1.arrange matrix in ascending order. \n";
    cout << "2.arrange matrix in descending order. \n";
    cout << "3.arrange rows in ascending order. \n";
    cout << "4.arrange rows in descending order. \n";
    cout << "5.exit. \n";
    c = inputcheck();
    int f = 0;
    while (f == 0)
    {
	switch (c)
	{
	case 1:
	    for (i = 0; i < n1; i++)
	    {
		for (j = 0; j < m1; j++)
		{
		    for (k = 0; k < n1; k++)
		    {
			for (l = 0; l < m1; l++)
			{
			    if (a[k][l] > a[i][j])
			    {
				t = a[k][l];
				a[k][l] = a[i][j];
				a[i][j] = t;
			    }
			}
		    }
		}
	    }
	    cout << "Matrix after being sorted in ascending order : \n";
	    for (i = 0; i < n1; i++)
	    {
		for (j = 0; j < m1; j++)
		{
		    cout << a[i][j] << "\t";
		}
		cout << endl;
	    }
	    f = 1;
	    break;
	case 2:
	    for (i = 0; i < n1; i++)
	    {
		for (j = 0; j < m1; j++)
		{
		    for (k = 0; k < n1; k++)
		    {
			for (l = 0; l < m1; l++)
			{
			    if (a[k][l] < a[i][j])
			    {
				t = a[k][l];
				a[k][l] = a[i][j];
				a[i][j] = t;
			    }
			}
		    }
		}
	    }
	    cout << "Matrix after being sorted in descending order : \n";
	    for (i = 0; i < n1; i++)
	    {
		for (j = 0; j < m1; j++)
		{
		    cout << a[i][j] << "\t";
		}
		cout << endl;
	    }
	    f = 1;
	    break;
	case 3:
	    for (i = 0; i < m1; i++)
	    {
		for (j = 0; j < n1; j++)
		{
		    for (k = 0; k < n1; k++)
		    {
			if (a[i][k] > a[i][j])
			{
			    t = a[i][k];
			    a[i][k] = a[i][j];
			    a[i][j] = t;
			}
		    }
		}
	    }
	    cout << "Matrix after sorting the rows in ascending order : \n";
	    for (i = 0; i < n1; i++)
	    {
		for (j = 0; j < m1; j++)
		{
		    cout << a[i][j] << "\t";
		}
		cout << endl;
	    }
	    f = 1;
	    break;
	case 4:
	    for (i = 0; i < m1; i++)
	    {
		for (j = 0; j < n1; j++)
		{
		    for (k = 0; k < n1; k++)
		    {
			if (a[i][k] < a[i][j])
			{
			    t = a[i][k];
			    a[i][k] = a[i][j];
			    a[i][j] = t;
			}
		    }
		}
	    }
	    cout << "Matrix after sorting the rows in descending order : \n";
	    for (i = 0; i < n1; i++)
	    {
		for (j = 0; j < m1; j++)
		{
		    cout << a[i][j] << "\t";
		}
		cout << endl;
	    }
	    f = 1;
	    break;
	case 5:
	    cout << "Thank You";
	    f = 1;

	    break;
	default:
	    cout << "Please enter a valid input";
	}

    }

}
