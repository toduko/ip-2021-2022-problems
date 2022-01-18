/*
Дадена е квадратна матрица с размери n x m от цели числа.
Да се намери пътят от горния ляв ъгъл до долния десен ъгъл с най - голяма сума от елементите, като имаме право да се движим само надолу и надясно.
*/

#include <iostream>

using namespace std;

int max(int a, int b)
{
  return a > b ? a : b;
}

int largest_sum_path(int arr[100][100], int x, int y, int n, int m)
{
  if (x >= n || y >= m)
  {
    return 0;
  }
  return arr[x][y] + max(largest_sum_path(arr, x + 1, y, n, m), largest_sum_path(arr, x, y + 1, n, m));
}

void solution()
{
  int arr[100][100] = {{1, 2, 3},
                       {3, 2, 3},
                       {3, 3, 3}};

  cout << largest_sum_path(arr, 0, 0, 3, 3) << endl;
}

int main()
{
  solution();

  return 0;
}