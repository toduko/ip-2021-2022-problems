/*
Въвеждат се n реални числа. Да се намерят и изкарат в конзолата най-малко и най-голямото от тях.
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

void get_min_and_max(float arr[], int n, float &min, float &max)
{
  min = arr[0];
  max = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
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

  float min, max;
  get_min_and_max(arr, n, min, max);

  cout << "min: " << min << ", max: " << max << endl;
}

int main()
{
  solution();

  return 0;
}