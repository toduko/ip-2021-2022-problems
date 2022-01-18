/*
Напишете функция filter, която приема масив от цели числа, дължината му и булева функция с един аргумент цяло число.
В масива, елементите които не изпълняват условието на булевата функция променят стойността си на -1.
*/

#include <iostream>

using namespace std;

bool is_even(int num)
{
  return !(num & 1);
}

void filter(int *arr, int n, bool (*predicate)(int))
{
  for (int i = 0; i < n; ++i)
  {
    if (!predicate(arr[i]))
    {
      arr[i] = -1;
    }
  }
}

void solution()
{
  int arr[] = {1, 2, 3, 4, 5};
  filter(arr, 5, is_even);

  for (int i = 0; i < 5; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}