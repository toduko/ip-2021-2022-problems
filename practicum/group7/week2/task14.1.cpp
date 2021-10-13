/*
Напишете програма, която въвежда число в десетична бройна система, превърнете го в двоично и го изведете на конзолата. (използвайте цикъл)
*/

#include <iostream>

using namespace std;

void findBinary(unsigned int num)
{
  if (num <= 1)
  {
    cout << num;
  }
  else
  {
    findBinary(num / 2);
    cout << num % 2;
  }
}

void solution()
{
  unsigned int num;
  cin >> num;

  findBinary(num);
}

int main()
{
  solution();

  return 0;
}