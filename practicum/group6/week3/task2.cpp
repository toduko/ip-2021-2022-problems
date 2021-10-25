/*
Да се въведен число от конзолата и да се определи броят на цифрите му
*/

#include <iostream>

using namespace std;

void solution()
{
  int num;
  cin >> num;

  int count = 1;

  while ((num /= 10) && ++count)
  {
  }

  cout << count << endl;
}

int main()
{
  solution();

  return 0;
}