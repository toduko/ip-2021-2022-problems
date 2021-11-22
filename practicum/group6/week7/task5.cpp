/*
Имаме масив от цели числа с дължина n, където 0 ≤ n ≤ 30.
Да се изведат всички подмножества на n.
*/

#include <iostream>

using namespace std;

#define ARR_SIZE 5

void print_superset(const int arr[], const int n)
{
  for (int i = 0; i < (1 << n); ++i)
  {
    cout << "{ ";
    for (int j = 0; j < n; ++j)
    {
      if (i & (1 << j))
      {
        cout << arr[j] << " ";
      }
    }
    cout << "}\n";
  }
}

void solution()
{
  int arr[ARR_SIZE] = {1, 2, 3, 4, 5};

  print_superset(arr, ARR_SIZE);
}

int main()
{
  solution();

  return 0;
}