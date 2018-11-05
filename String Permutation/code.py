

def toString(List): 
	return ''.join(List) 

def permute(a, s, l): 
	if s==l: 
		print toString(a) 
	else: 
		for i in xrange(s,l+1): 
			a[s], a[i] = a[i], a[s] 
			permute(a, s+1, l) 
			a[s], a[i] = a[i], a[s] # backtrack 

string = "ABC"
n = len(string) 
a = list(string) 
permute(a, 0, n-1) 

