/*
Въвеждат се n на брой цели числа, както и даден затворен интервал от числа, зададен с двата си края.
Да се провери дали всички числа от дадения интервал се срещат измежду въведените n.
*/

#include <iostream>

using namespace std;

void swap_ints(int a, int b)
{
  a ^= b;
  b ^= a;
  a ^= b;
}

void enter_array(int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cin >> arr[i];
  }
}

bool is_in_array(int num, int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (num == arr[i])
    {
      return true;
    }
  }
  return false;
}

bool are_all_in_interval(int arr[], int size, int min, int max)
{
  for (int i = min; i <= max; ++i)
  {
    if (!is_in_array(i, arr, size))
    {
      return false;
    }
  }

  return true;
}

void solution()
{
  const int N = 1000;
  int min, max;
  unsigned int n;
  int arr[N];

  cin >> n;
  cin >> min >> max;

  if (min > max)
  {
    swap_ints(min, max);
  }

  enter_array(arr, n);

  cout << are_all_in_interval(arr, n, min, max) << endl;
}

int main()
{
  solution();

  return 0;
}