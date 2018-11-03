 
void floydWarshall (int path[][V]) 
{ 
    /* short[][] will store the shorest value of all paths */
    int short[V][V], i, j, k; 
  
    /* Intializing the shorest matrix as the original input matrix */
    for (i = 0; i < V; i++) 
        for (j = 0; j < V; j++) 
            short[i][j] = path[i][j]; 
  
    /* Add all vertices one by one to the set of intermediate vertices. 
      ---> Before start of an iteration, we have shortest distances between all 
      pairs of vertices such that the shortest distances consider only the 
      vertices in set {0, 1, 2, .. k-1} as intermediate vertices. 
      ----> After the end of an iteration, vertex no. k is added to the set of 
      intermediate vertices and the set becomes {0, 1, 2, .. k} */
    for (k = 0; k < V; k++) 
    { 
        // Pick all vertices as source one by one 
        for (i = 0; i < V; i++) 
        { 
            // Pick all vertices as destination for the 
            // above picked source 
            for (j = 0; j < V; j++) 
            { 
                // If vertex k is on the shortest path from 
                // i to j, then update the value of dist[i][j] 
                if (short[i][k] + short[k][j] < short[i][j]) 
                    short[i][j] = short[i][k] + short[k][j]; 
            } 
        } 
    } 
  
     
    printSolution(short); 
} 
