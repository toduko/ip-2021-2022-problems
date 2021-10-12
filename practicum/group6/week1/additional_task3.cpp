/*
Да се напише програма, която при дадено число определя броя на числата, които се делят на 3 или на 5 считано от 1 до числото включително.
(като числото може да се дели и на двете едновременно)
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int n;
  cin >> n;
  cout << n / 3 + n / 5 - n / 15 << endl;
}

int main()
{
  solution();

  return 0;
}