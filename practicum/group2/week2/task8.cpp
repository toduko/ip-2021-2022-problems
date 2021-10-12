/*
Въведете от конзолата година, проверете дали е високосна. Ако е високосна изведете 1, ако не е - 0.
*/

#include <iostream>

using namespace std;

void solution()
{
  int year;
  cin >> year;
  cout << ((year % 4 == 0) ? ((year % 100 == 0) ? ((year % 400 == 0) ? true : false) : true) : false);
}

int main()
{
  solution();

  return 0;
}