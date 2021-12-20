/*
Да се напише функция, която отстранява всички елементи от едномерен масив от цели числа, които са по-малки едновременно от двата си съседа, без да се използва помощен масив.
За отстраняване на елемент от масива да се използва отместване наляво.
След края на програмата в масива не трябва да има такива елементи.
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

void filter(int *&arr, unsigned int &n)
{
  for (int i = 1; i < n - 1; ++i)
  {
    if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
    {
      delete_element(arr, n, i);
      i -= 2;
    }

    if (i == -1)
    {
      ++i;
    }
  }
}

void enter(int *&arr, const unsigned int n)
{
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
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
  unsigned int size;
  cin >> size;
  int *arr = new int[size];

  enter(arr, size);

  print(arr, size);
  filter(arr, size);
  print(arr, size);

  delete[] arr;
}

int main()
{
  solution();

  return 0;
}
