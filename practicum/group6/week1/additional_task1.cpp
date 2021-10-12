/*
Да се напише програма, която при подаване на положително число извежда сбора на числата от 1 до числото.
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int n;
  cin >> n;
  cout << n * (n + 1) / 2 << endl;
}

int main()
{
  solution();

  return 0;
}