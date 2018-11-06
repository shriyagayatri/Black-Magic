# Knight tour
A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square only once. If the knight ends on a square that is one knight's move from the beginning square (so that it could tour the board again immediately, following the same path), the tour is closed, otherwise it is open.

# Warnsdorff's Algorithm

Warnsdorff's algorithm is a very simple heuristic method for solving the knight's tour.
From this algorithm you can start from any initial position of the knight on the board.

**Warnsdorff’s Rule**: Always move to an adjacent, unvisited square with minimal degree.
