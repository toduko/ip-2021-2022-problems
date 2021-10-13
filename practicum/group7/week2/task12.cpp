/*
Напишете програма, която въвежда цяло положително число и проверява дали то е степен на двойката.
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int num;
  cin >> num;

  cout << (num && (!(num & (num - 1)))) << endl;
}

int main()
{
  solution();

  return 0;
}