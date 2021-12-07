/*
Да се въведе квадратна матрица n x n, където 3 ≤ n ≤ 50 и да се изведе същата матрица, но елементите по вторичния диагонал да са на квадрат.
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

void square_second_diag(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  for (int i = 0; i < size; ++i)
  {
    arr[i][size - i - 1] *= arr[i][size - i - 1];
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

void solution()
{
  int arr[MAX_SIZE][MAX_SIZE];
  int n;
  read_size(n);

  enter_array(arr, n);
  square_second_diag(arr, n);
  print_arr(arr, n);
}

int main()
{
  solution();

  return 0;
}