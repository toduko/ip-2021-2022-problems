/*
Да се напише функция, която намира произведението на две матрици
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

void multiply(int matrix1[MAX_ROWS][MAX_COLS], const int rows1, const int cols1, int matrix2[MAX_ROWS][MAX_COLS], const int rows2, const int cols2, int result[MAX_ROWS][MAX_COLS])
{
  for (int i = 0; i < rows1; ++i)
  {
    for (int j = 0; j < cols2; ++j)
    {
      for (int k = 0; k < rows2; ++k)
      {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
}

void solution()
{
  int matrix1[MAX_ROWS][MAX_COLS] = {{1, 2, 3},
                                     {4, 5, 6},
                                     {7, 8, 9}};
  int matrix2[MAX_ROWS][MAX_COLS] = {{1, 0, 0},
                                     {0, 0, 1},
                                     {0, 1, 0}};
  int result[MAX_ROWS][MAX_COLS];

  multiply(matrix1, 3, 3, matrix2, 3, 3, result);

  print(matrix1, 3, 3);
  cout << "*\n";
  print(matrix2, 3, 3);
  cout << "=\n";
  print(result, 3, 3);
}

int main()
{
  solution();

  return 0;
}