// CPP program print first M terms of
// N-bonacci series.
#include <bits/stdc++.h>
using namespace std;

// Function to print bonacci series
void bonacciseries(long n, int m)
{
	// Assuming m >= n.
	int a[m] = { 0 };
	a[n - 1] = 1;

	// Computing every term as sum of previous
	// n terms.
	for (int i = n; i < m; i++)
		for (int j = i - n; j < i; j++)
			a[i] += a[j];

	for (int i = 0; i < m; i++)
		cout << a[i] << " ";
}

// Driver's Code
int main()
{
	int N = 5, M = 15;
	bonacciseries(N, M);
	return 0;
}
