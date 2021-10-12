/*
От потребителя се въвежда число. Да се изведе:
- Единица, ако числото е четно.
- Нула в противен слуай.
*/

#include <iostream>

using namespace std;

void solution1()
{
  int num;
  cin >> num;

  cout << !(num & 1) << endl;
}

void solution2()
{
  int num;
  cin >> num;

  cout << (num % 2 == 0) << endl;
}

int main()
{
  solution1();
  solution2();

  return 0;
}