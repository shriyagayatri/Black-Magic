
#include<iostream>
using namespace std;
// For 8x8 chess board
#define N 8

typedef struct chess_moves
{
   // 'x' and 'y' coordinates on chess board
   int x,y;
}chess_moves;

// displays the knight tour solution
void printTour(int tour[N][N]) 
{
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < N; j++) 
      {
          cout<<tour[i][j]<<" ";
      }
      cout<<endl;
   }
}

// check if the next move is possible
int isMovePossible(chess_moves next_move, int tour[N][N])
{
   int i = next_move.x;
   int j = next_move.y;
   // checking for free square
   if ((i >= 0 && i < N) && (j >= 0 && j < N) && (tour[i][j] == 0))
      return 1;
   return 0;
}


// recursive function to find a knight tour
int findTour(int tour[N][N], chess_moves move_KT[],chess_moves curr_move, int move_count) 
{
   int i;
   chess_moves next_move;
   if (move_count == N*N-1) 
   {
      // All squares r visited
      return 1;
   }

   // Possible moves from current square
   for (i = 0; i < N; i++)
   {
      next_move.x = curr_move.x + move_KT[i].x;
      next_move.y = curr_move.y + move_KT[i].y;

      if (isMovePossible(next_move, tour)) 
      {
         // if the move is possible increment the move count and store it in tour matrix
         tour[next_move.x][next_move.y] = move_count+1;
         if (findTour(tour, move_KT, next_move, move_count+1) == 1) {
            return 1;
         }
         else
         {
            // this move was invalid, try out other possiblities 
            tour[next_move.x][next_move.y] = 0;
         }
      }
   }
   return 0;
}

void knightTour() 
{
   int tour[N][N];
   int i,j;

   // initialize tour matrix
   for (i = 0; i < N; i++) 
   {
      for (j = 0; j < N; j++)
      {
         tour[i][j] = 0;
      }
   }

   // all possible moves that knight can take
   chess_moves move_KT[8] = { {2,1},{1,2},{-1,2},{-2,1} , {-2,-1},{-1,-2},{1,-2},{2,-1} };

   // knight tour starts from coordinate (0,0)
   chess_moves curr_move = {0,0};

   // find a possible knight tour using a recursive function
   // starting from current move 
   if(findTour(tour, move_KT, curr_move, 0) == 0) 
   {
      cout<<"\nKnight tour does not exist";
   }
   else 
   {
      cout<<"\nTour exist ...\n";
      printTour(tour);
   }
}
int main() 
{
   knightTour();
   cout<<endl;
   return 0;
}


/*
Tour exist ...
0 59 38 33 30 17 8 63 
37 34 31 60 9 62 29 16 
58 1 36 39 32 27 18 7 
35 48 41 26 61 10 15 28 
42 57 2 49 40 23 6 19 
47 50 45 54 25 20 11 14 
56 43 52 3 22 13 24 5 
51 46 55 44 53 4 21 12 
*/

