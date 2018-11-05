#include <stdio.h> 
#include <string.h> 

void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int s, int l) 
{ 
int i; 
if (s == l) 
	printf("%s\n", a); 
else
{ 
	for (i = s; i <= l; i++) 
	{ 
		swap((a+s), (a+i)); 
		permute(a, s+1, l); 
		swap((a+s), (a+i)); //backtrack 
	} 
} 
} 

int main() 
{ 
	char str[] = "ABCDEF"; 
	int n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
} 

