
#include <bits/stdc++.h> 
using namespace std; 

int maxProduct(int a[], int n) 
{ 
	if (n == 1) 
	  return a[0]; 

	int neg = INT_MIN; 
	int neg_count = 0, zero_count = 0; 
	int prod = 1; 
	for (int i = 0; i < n; i++) 
	{ 

		if (a[i] == 0) 
		{ 
			zero_count++; 
			continue; 
		} 

		if (a[i] < 0)
		{ 
			neg_count++; 
			neg = max(neg, a[i]); 
		} 

		prod = prod * a[i]; 
	} 

	if (zero_count == n) 
		return 0; 

	if (neg_count & 1)
	{ 

		if (neg_count == 1 && zero_count > 0 && zero_count + neg_count == n) 
			return 0; 

		prod = prod / neg; 
	} 

	return prod; 
} 

int main() 
{ 
	int a[] = { -1, -1, -2, 4, 3 }; 
	int n = sizeof(a) / sizeof(a[0]); 
	cout << maxProduct(a, n); 
	return 0; 
} 
