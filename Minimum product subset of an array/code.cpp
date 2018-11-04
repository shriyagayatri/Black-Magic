
#include <bits/stdc++.h> 
using namespace std; 

int minProduct(int a[], int n) 
{ 
	if (n == 1) 
		return a[0]; 

	// Find count of negative numbers, count of zeros, maximum valued negative number, minimum valued positive number and product of non-zero numbers 
	int max_neg = INT_MIN; 
	int min_pos = INT_MAX; 
	int count_neg = 0, count_zero = 0; 
	int prod = 1; 
	for (int i = 0; i < n; i++) 
	{ 
 
		if (a[i] == 0) { 
			count_zero++; 
			continue; 
		} 

		// Count negatives and keep track of maximum valued negative. 
		if (a[i] < 0)
		{ 
			count_neg++; 
			max_neg = max(max_neg, a[i]); 
		} 

		// Track minimum positive number of array 
		if (a[i] > 0) 
			min_pos = min(min_pos, a[i]);		 

		prod = prod * a[i]; 
	} 

	if (count_zero == n || (count_neg == 0 && count_zero > 0)) 
		return 0; 

	// If there are all positive 
	if (count_neg == 0) 
		return min_pos; 

	
	if (!(count_neg & 1) && count_neg != 0)
	{ 

		
		prod = prod / max_neg; 
	} 

	return prod; 
} 

int main() 
{ 
	int a[] = { -2, -2, -2, 1, 2}; 
	int n = sizeof(a) / sizeof(a[0]); 
	cout << minProduct(a, n); 
	return 0; 
} 
