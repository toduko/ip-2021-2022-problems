/*
Да се напише функция, която приема като аргумент число "k"и матрица n x m и да изтрива от нея k-тия ред
*/

#include <iostream>

using namespace std;

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

void delete_kth_row(int *&matrix, unsigned int &rows, const unsigned int cols, const unsigned int k)
{
  if (k >= rows)
  {
    cout << "Error.\n";
  }
  else
  {

    int *new_matrix = new int[(--rows) * cols];

    for (int i = 0; i < k; ++i)
    {
      for (int j = 0; j < cols; ++j)
      {
        new_matrix[i * cols + j] = matrix[i * cols + j];
      }
    }

    for (int i = k; i < rows; ++i)
    {
      for (int j = 0; j < cols; ++j)
      {
        new_matrix[i * cols + j] = matrix[(i + 1) * cols + j];
      }
    }

    delete[] matrix;

    matrix = new_matrix;
  }
}

void print(const int *matrix, const unsigned int rows, const unsigned int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cout << matrix[i * cols + j] << " ";
    }
    cout << endl;
  }
}

void solution()
{
  unsigned int m, n;
  cin >> m >> n;

  int *matrix;
  dynamic__create_matrix(matrix, m, n);
  read_matrix_values(matrix, m, n);

  unsigned int k;
  cin >> k;

  cout << "Old matrix: \n";
  print(matrix, m, n);
  
  delete_kth_row(matrix, m, n, k);
  cout << "New matrix: \n";
  print(matrix, m, n);

  delete[] matrix;
}

int main()
{
  solution();

  return 0;
}