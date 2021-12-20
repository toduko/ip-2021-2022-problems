/*
От стандартния вход се чете цяло число n и масив с дължина n.
Да се дефинира следната функция:
void cycle(int* x, int n, int k), която преобразува едномерния масив x с n елемента, като циклично ги премества на k позиции наляво.
k е дадено естествено число, k > 0.
*/

#include <iostream>

using namespace std;

void swap_ints(int *arr, const int i, const int j)
{
  arr[i] ^= arr[j];
  arr[j] ^= arr[i];
  arr[i] ^= arr[j];
}

void rotate_left(int *arr, const unsigned int n)
{
  for (int i = n - 1; i > 0; --i)
  {
    swap_ints(arr, i, i - 1);
  }
}

void cycle(int *arr, const unsigned int n, const unsigned int k)
{
  for (int i = 0; i < k; ++i)
  {
    rotate_left(arr, n);
  }
}

void print(const int *arr, const unsigned int n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void solution()
{
  unsigned int size = 6;
  int *arr = new int[size];

  for (int i = 0; i < size; ++i)
  {
    arr[i] = i + 1;
  }

  print(arr, size);
  cycle(arr, size, 3);
  print(arr, size);

  delete[] arr;
}

int main()
{
  solution();

  return 0;
}
