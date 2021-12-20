/*
Да се напише функция която изтрива елемент от масив по даден индекс.
*/

#include <iostream>

using namespace std;

void delete_element(int *&arr, unsigned int &n, const unsigned int index)
{

  if (index >= n || n < 2)
  {
    cout << "Error.\n";
  }
  else
  {
    int *new_arr = new int[--n];

    for (int i = 0; i < n; ++i)
    {
      if (i < index)
      {
        new_arr[i] = arr[i];
      }
      else
      {
        new_arr[i] = arr[i + 1];
      }
    }

    delete[] arr;
    arr = new_arr;
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
  unsigned int size = 3;
  int *arr = new int[size];

  for (int i = 0; i < size; ++i)
  {
    arr[i] = i + 1;
  }

  print(arr, size);
  delete_element(arr, size, 1);
  print(arr, size);

  delete[] arr;
}

int main()
{
  solution();

  return 0;
}
