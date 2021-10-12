/*
Да се въведе число. Да се изведе:
- 1 ако е различно от 0
- 0 в противен случай
*/
#include <iostream>

using namespace std;

void solution1()
{
  int number;
  cin >> number;

  cout << !!number << endl;
}

void solution2()
{
  int number;
  cin >> number;

  cout << (number != 0) << endl;
}

int main()
{
  solution1();
  solution2();

  return 0;
}