/*
Напишете програма, която въвежда число в десетична бройна система, превърнете го в двоично и го изведете на конзолата. (използвайте цикъл)
*/

#include <iostream>

using namespace std;

void solution()
{
  int num;
  cin >> num;

  for (int i = 31; i >= 0; --i)
  {
    cout << ((num >> i) & 1);
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}