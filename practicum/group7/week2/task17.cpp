/*
Напишете програма, която да приема цяло положително число (година) и да изписва на конзолата дали годината е високосна или не.
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