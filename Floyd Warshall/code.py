 
V = 4

# Define infinity as the large enough value. This value will be 
# used for vertices not connected to each other 
INF = 99999
def floydWarshall(path): 
	short = map(lambda i : map(lambda j : j , i) , path) 
	for k in range(V): 
		 
		for i in range(V): 

			for j in range(V): 
				short[i][j] = min(short[i][j] , 
								short[i][k]+ short[k][j] ) 
	printSolution(short) 
 
def printSolution(short): 
	print ("Following matrix shows the shortest distances\ between every pair of vertices")
	for i in range(V): 
		for j in range(V): 
			if(short[i][j] == INF): 
				print ("%7s" %("INF")), 
			else: 
				print ("%7d\t" %(short[i][j])), 
			if j == V-1: 
				print ("") 




path = [[0,5,INF,10], 
			[INF,0,3,INF], 
			[INF, INF, 0, 1], 
			[INF, INF, INF, 0] ]

floydWarshall(path); 

