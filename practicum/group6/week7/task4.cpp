/*
Да се напише функция setBit(int n, int bitPosition, bool newBitValue); която променя бита на подадената позиция.
*/

#include <iostream>

using namespace std;

void set_bit(int &num, const unsigned int pos, const bool val)
{
  num = (num & ~(1 << pos - 1)) | (val << pos - 1);
}

void solution()
{
  int n, val;
  unsigned int pos;
  cin >> n >> pos >> val;

  set_bit(n, pos, val);
  cout << n << endl;
}

int main()
{
  solution();

  return 0;
}