/*
Въвеждат се n реални числа (n ≤ 1000).
Да се изкарат в обратен ред с помощта на помощен масив.
*/

#include <iostream>

using namespace std;

void set_num_in_range(int &num, int min, int max)
{
  do
  {
    cin >> num;
  } while ((num < min) || (num > max));
}

void print_reverse_array(float arr[], int n)
{
  for (int i = n - 1; i >= 0; --i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void solution()
{
  int n;
  set_num_in_range(n, 1, 1000);

  float arr[1000];

  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  print_reverse_array(arr, n);
}

int main()
{
  solution();

  return 0;
}