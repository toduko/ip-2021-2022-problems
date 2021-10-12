/*
Въвежда се число. Програмата изписва 1 ако числото се дели или на 3, или на 5. (но не и на двете едновременно)
*/

#include <iostream>

using namespace std;

void solution()
{
  int n;
  cin >> n;
  cout << ((n % 3 == 0) ^ (n % 5 == 0)) << endl;
}

int main()
{
  solution();

  return 0;
}