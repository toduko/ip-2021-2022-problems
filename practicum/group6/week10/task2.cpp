/*
Да се обходи матрица чрез указателна аритметика.
*/

#include <iostream>

using namespace std;

#define MAX_ROWS 100
#define MAX_COLS 100

void print(int matrix[MAX_ROWS][MAX_ROWS], const int rows, const int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cout << *(*(matrix + i) + j) << " ";
    }
    cout << endl;
  }
}

void solution()
{
  int matrix[MAX_ROWS][MAX_COLS] = {{0}};
  matrix[0][0] = 1;
  matrix[1][1] = 2;
  matrix[2][2] = 3;
  print(matrix, 3, 3);
}

int main()
{
  solution();

  return 0;
}