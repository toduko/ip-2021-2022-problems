/*
Да се обходи тримерен масив чрез указателна аритметика.
*/

#include <iostream>

using namespace std;

#define MAX_D1 100
#define MAX_D2 100
#define MAX_D3 100

void print_3d(int arr[MAX_D1][MAX_D2][MAX_D3], const int d1, const int d2, const int d3)
{
  for (int i = 0; i < d1; ++i)
  {
    for (int j = 0; j < d2; ++j)
    {
      for (int k = 0; k < d3; ++k)
      {
        cout << *(*(*(arr + i) + j) + k) << " ";
      }
      cout << endl;
    }
  }
}

void solution()
{
  int matrix[MAX_D1][MAX_D2][MAX_D3] = {{{0}}};
  matrix[0][0][0] = 1;
  matrix[1][1][1] = 2;
  matrix[2][2][2] = 3;
  print_3d(matrix, 3, 3, 3);
}

int main()
{
  solution();

  return 0;
}