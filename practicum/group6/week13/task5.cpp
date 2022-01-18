/*
Имаме лабиринт, с размери nхm, в който проходимите клетки се бележат с 0 а непроходимите с 1.
Да се напише програма, която проверява дали съществува път от подадени като аргументи начална и крайна точка.
*/

#include <iostream>

using namespace std;

bool does_path_exist(int maze[100][100], int n, int m, int curr_x, int curr_y, int dest_x, int dest_y, bool visited[100][100])
{
  if (curr_x >= n || curr_x < 0 || curr_y >= m || curr_y < 0 || visited[curr_x][curr_y] || maze[curr_x][curr_y] == 1)
  {
    return false;
  }
  if (curr_x == dest_x && curr_y == dest_y)
  {
    return true;
  }
  visited[curr_x][curr_y] = true;
  return does_path_exist(maze, n, m, curr_x + 1, curr_y + 0, dest_x, dest_y, visited) ||
         does_path_exist(maze, n, m, curr_x + 0, curr_y + 1, dest_x, dest_y, visited) ||
         does_path_exist(maze, n, m, curr_x - 1, curr_y - 0, dest_x, dest_y, visited) ||
         does_path_exist(maze, n, m, curr_x - 0, curr_y - 1, dest_x, dest_y, visited);
}

void solution()
{
  int maze[100][100] = {{0, 1, 0, 0},
                        {0, 0, 0, 0},
                        {1, 1, 1, 0},
                        {0, 0, 0, 0}};
  bool visited[100][100] = {{false}};
  cout << does_path_exist(maze, 4, 4, 0, 0, 3, 3, visited) << endl;
}

int main()
{
  solution();

  return 0;
}