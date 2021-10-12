/*
Да се напише програма, която при дадено число определя сумата на числата, които се делят на 3 считано от 1 до числото.
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int n;
  cin >> n;
  cout << (n + 3) * n / 6 << endl;
}

int main()
{
  solution();

  return 0;
}