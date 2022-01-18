/*
Да се напише рекурсивна функция, която извършва двоично търсене в предварително сортиран масив от цели числа.
*/

#include <iostream>

using namespace std;

int bs(const int *arr, int start, int end, int search)
{
  if (start > end)
  {
    return -1;
  }
  int mid = start + (end - start) / 2;
  if (arr[mid] == search)
  {
    return mid;
  }
  else if (arr[mid] < search)
  {
    return bs(arr, mid + 1, end, search);
  }
  else
  {
    return bs(arr, start, mid - 1, search);
  }
}

int binary_search(const int *arr, int n, int search)
{
  return bs(arr, 0, n - 1, search);
}

void solution()
{
  int arr[] = {0, 1, 2, 4, 5};

  for (int i = 0; i <= 5; ++i)
  {
    cout << binary_search(arr, 5, i) << " ";
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}