// C++ program of the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to generate the array by
// inserting array elements one by one
// followed by reversing the array
void generateArray(int arr[], int n)
{

	// Doubly ended Queue
	deque<int> ans;

	// Iterate over the array
	for (int i = 0; i < n; i++) {

		// Push array elements
		// alternately to the front
		// and back
		if (i & 1)
			ans.push_front(arr[i]);
		else
			ans.push_back(arr[i]);
	}

	// If size of list is odd
	if (n & 1) {

		// Reverse the list
		reverse(ans.begin(),
				ans.end());
	}

	// Print the elements
	// of the array
	for (auto x : ans) {
		cout << x << " ";
	}
	cout << endl;
}

// Driver Code
int32_t main()
{
	int n = 4;
	int arr[n] = { 1, 2, 3, 4 };
	generateArray(arr, n);
	return 0;
}
