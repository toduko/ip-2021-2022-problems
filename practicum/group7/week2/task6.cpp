/*
Напишете програма, в която се въвежда дължината на една отсечка в сантиметри и се извежда дължината ѝ в километри и метри.
*/

#include <iostream>

using namespace std;

void solution()
{
  double n;
  cin >> n;

  cout << n / 100000 << "km\n";
  cout << n / 100 << "m\n";
}

int main()
{
  solution();

  return 0;
}