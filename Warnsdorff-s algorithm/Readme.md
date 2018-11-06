# Knight tour
A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square only once. If the knight ends on a square that is one knight's move from the beginning square (so that it could tour the board again immediately, following the same path), the tour is closed, otherwise it is open.

# Warnsdorff's Algorithm

Warnsdorff's algorithm is a very simple heuristic method for solving the knight's tour.
From this algorithm you can start from any initial position of the knight on the board.

**Warnsdorff’s Rule**: Always move to an adjacent, unvisited square with minimal degree.


## Algorithm



1. Set P to be a random initial position on the board

2.  Mark the board at P with the move number “1”

3. Do following for each move number from 2 to the number of squares on the board:

          1. Let S be the set of positions accessible from P.
          2. Set P to be the position in S with minimum accessibilit      
          3.  Mark the board at P with the current move number.
          4. Return the marked board — each square will be marked with the move number on which it is visited.
