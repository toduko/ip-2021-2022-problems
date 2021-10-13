/*
Напишете програма, която въвежда цяло положително число и проверява, дали то е четно по два начина:
- с побитови операции
- друг по ваша преценка
*/

#include <iostream>

using namespace std;

void solution1()
{
  unsigned int num;
  cin >> num;

  cout << !(num & 1) << endl;
}

void solution2()
{
  unsigned int num;
  cin >> num;

  cout << (num % 2 == 0) << endl;
}

int main()
{
  solution1();
  solution2();

  return 0;
}