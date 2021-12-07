/*
Да се въведе квадратна матрица n x n, където 3 ≤ n ≤ 50 и да се реализират функции, които я "завъртат"наляво и надясно.
*/

#include <iostream>

using namespace std;

const unsigned int MAX_SIZE = 50;

void read_size(int &n)
{
  do
  {
    cin >> n;
  } while (n < 3 || n > 50);
}

void enter_array(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  for (int i = 0; i < size * size; ++i)
  {
    cin >> arr[i / size][i % size];
  }
}

void print_arr(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  cout << "Array: \n";
  for (int i = 0; i < size * size; ++i)
  {
    cout << arr[i / size][i % size] << " ";
    if ((i + 1) % size == 0)
    {
      cout << endl;
    }
  }
}

void transpose(int arr[MAX_SIZE][MAX_SIZE], int new_arr[MAX_SIZE][MAX_SIZE], const int size)
{
  for (int i = 0; i < size * size; ++i)
  {
    new_arr[i % size][i / size] = arr[i / size][i % size];
  }
}

void swap_ints(int &a, int &b)
{
  a ^= b;
  b ^= a;
  a ^= b;
}

void reverse_row(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size / 2; ++j)
    {
      swap_ints(arr[i][j], arr[i][size - 1 - j]);
    }
  }
}

void reverse_col(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size / 2; ++j)
    {
      swap_ints(arr[j][i], arr[size - 1 - j][i]);
    }
  }
}

void copy_array(int src[MAX_SIZE][MAX_SIZE], int dst[MAX_SIZE][MAX_SIZE], const int size)
{
  for (int i = 0; i < size * size; ++i)
  {
    dst[i / size][i % size] = src[i / size][i % size];
  }
}

void rotate_right(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  int new_arr[MAX_SIZE][MAX_SIZE];
  transpose(arr, new_arr, size);
  reverse_row(new_arr, size);
  copy_array(new_arr, arr, size);
}

void rotate_left(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  int new_arr[MAX_SIZE][MAX_SIZE];
  transpose(arr, new_arr, size);
  reverse_col(new_arr, size);
  copy_array(new_arr, arr, size);
}

void solution()
{
  int arr[MAX_SIZE][MAX_SIZE];
  int n;
  read_size(n);

  enter_array(arr, n);
  
  rotate_right(arr, n);
  print_arr(arr, n);
  
  rotate_left(arr, n);
  print_arr(arr, n);
}

int main()
{
  solution();

  return 0;
}