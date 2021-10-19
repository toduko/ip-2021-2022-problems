/*
По въведен знак (+,-,*,/) и две числа, да извърши операцията.
*/

#include <iostream>

using namespace std;

void solution()
{
  int a, b;
  char op;
  cin >> a >> op >> b;
  switch (op)
  {
  case '+':
    cout << a + b;
    break;
  case '-':
    cout << a - b;
    break;
  case '*':
    cout << a * b;
    break;
  case '/':
    cout << a / b;
    break;
  default:
    cout << "Invalid operation";
    break;
  }
  cout << endl;
}

int main()
{
  solution();
  
  return 0;
}