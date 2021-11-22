/*
Да се реализира функция getBitwiseRepresentation(int n); която извежда на стандартния изход двоичното представяне на числото
*/

#include <iostream>

using namespace std;

void print_bitwise_representation(const int num, const int num_bits)
{
  for (int i = num_bits - 1; i >= 0; --i)
  {
    cout << ((num & (1 << i)) ? 1 : 0);
  }

  cout << endl;
}

void solution()
{
  int n;
  cin >> n;

  print_bitwise_representation(n, 32);
}

int main()
{
  solution();

  return 0;
}