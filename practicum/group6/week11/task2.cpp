/*
От стандартния вход се четат две цели числа n и m.
След това се чете матрица с n колони и m реда.
Да се напише функция, която връща реда, чийто сбор от елементи е най - голям.
*/

#include <iostream>

using namespace std;

int get_max_row_sum(const int *matrix, const unsigned int rows, const unsigned int cols)
{
  int sum = 1 << (sizeof(int) * 8 - 1);

  for (int i = 0; i < rows; ++i)
  {
    int curr_sum = 0;

    for (int j = 0; j < cols; ++j)
    {
      curr_sum += matrix[i * cols + j];
    }

    if (curr_sum > sum)
    {
      sum = curr_sum;
    }
  }

  return sum;
}

void dynamic__create_matrix(int *&matrix, const unsigned int rows, const unsigned int cols)
{
  matrix = new int[rows * cols];
}

void read_matrix_values(int *&matrix, const unsigned int rows, const unsigned int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cin >> matrix[i * cols + j];
    }
  }
}

void solution()
{
  unsigned int m, n;
  cin >> m >> n;

  int *matrix;
  dynamic__create_matrix(matrix, m, n);
  read_matrix_values(matrix, m, n);

  cout << get_max_row_sum(matrix, m, n) << endl;

  delete[] matrix;
}

int main()
{
  solution();

  return 0;
}