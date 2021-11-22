/*
Да се напише функция flipFourthBit(int n); която обръща четвъртия бит на числото n.
*/

#include <iostream>

using namespace std;

void flip_nth_bit(int &num, const unsigned char bit)
{
  num = num ^ (1 << (bit - 1));
}

void solution()
{
  int n;
  cin >> n;

  flip_nth_bit(n, 4);

  cout << n << endl;
}

int main()
{
  solution();

  return 0;
}