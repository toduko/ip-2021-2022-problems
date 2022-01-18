/*
Напишете функция map, която приема масив от цели числа, дължината му и функция, която приема число по референция, и приложете функцията върху всеки елемент на масива.
*/

#include <iostream>

using namespace std;

void plus_five(int &num)
{
  num += 5;
}

void map(int *arr, int n, void (*apply)(int &))
{
  for (int i = 0; i < n; ++i)
  {
    apply(arr[i]);
  }
}

void solution()
{
  int arr[] = {1, 2, 3, 4, 5};
  map(arr, 5, plus_five);

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