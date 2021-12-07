/*
Да се въведе квадратна матрица n x n, където 3 ≤ n ≤ 50 и да се изведе сумата на всички нечетни елементи над главния диагонал (с него).
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

int get_odds_under_diag_sum(int arr[MAX_SIZE][MAX_SIZE], const int size)
{
  int sum = 0;
  for (int i = 0; i < size; ++i)
  {
    for (int j = size - 1; j >= i; --j)
    {
      sum += (arr[i][j] & 1) ? arr[i][j] : 0;
    }
  }
  return sum;
}

void solution()
{
  int arr[MAX_SIZE][MAX_SIZE];
  int n;
  read_size(n);

  enter_array(arr, n);
  cout << get_odds_under_diag_sum(arr, n) << endl;
}

int main()
{
  solution();

  return 0;
}