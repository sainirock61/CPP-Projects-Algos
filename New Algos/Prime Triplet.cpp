// C++ program to find prime triplets smaller
// than or equal to n.
#include <bits/stdc++.h>
using namespace std;

// function to detect prime number
// here we have used sieve method
// https://www.geeksforgeeks.org/sieve-of-eratosthenes/
// to detect prime number
void sieve(int n, bool prime[])
{
	for (int p = 2; p * p <= n; p++) {

		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true) {

			// Update all multiples of p
			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}
}

// function to print prime triplets
void printPrimeTriplets(int n)
{
	// Finding all primes from 1 to n
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	sieve(n, prime);
	
	cout << "The prime triplets from 1 to "
		<< n << "are :" << endl;
	for (int i = 2; i <= n-6; ++i) {

		// triplets of form (p, p+2, p+6)
		if (prime[i] && prime[i + 2] && prime[i + 6])
			cout << i << " " << (i + 2) << " " << (i + 6) << endl;

		// triplets of form (p, p+4, p+6)
		else if (prime[i] && prime[i + 4] && prime[i + 6])
			cout << i << " " << (i + 4) << " " << (i + 6) << endl;
	}
}

int main()
{
	int n = 25;
	printPrimeTriplets(n);
	return 0;
}
