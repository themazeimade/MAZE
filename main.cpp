// Maze creation with custom randomized Prim's algorithm. The scope of this
// little solution is to generate a odd>3 square maze. The constraints are:
//   A is a point at the top left corner of the maze.
//   B is the end point of the maze.
//   B must be on the longest path between A and itself.
//   There must be only one path.
//   Only horizontal and vertical alleys.
//
// Note: Basically the algorithm is untouch, but in order to get the longest
// path and to prevent any redundancy the solution will keep track of the
// longest path till it generates point A and B. The advantage of prim's
// algorithm is in its nature to only make on path alleys (tree generation on a
// 2d planes on simple terms).

#include "mazegen.h"

int main() {
  mazeGen maze;
  int a;
  std::cout << "ingrese magnitud del laberinto" << std::endl;
  std::cin >> a;
  maze.createMaze2D(a);
    // std::cout << Maze.container[0] << ' ' << Maze.container[1] << "first node"<< std::endl;
  return 0;
}
