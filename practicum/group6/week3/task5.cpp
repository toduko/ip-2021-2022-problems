/*
Редицата на Fibonacci се дефинира чрез рекурентното уравнение:
       {0, ако n = 0}
F(n) = {1, ако n = 1}
       {F(n − 1) + F(n − 2), ако n ≥ 2}
Да се напише програма, която при въведено n изписва n-тото число на фибоначи
*/

#include <iostream>

using namespace std;

void solution()
{
  int n;
  cin >> n;

  int fib = 0;

  for (int i = 0, a = 0, b = 1; i < n; ++i)
  {
    fib = b;
    b += a;
    a = fib;
  }

  cout << fib << endl;
}

int main()
{
  solution();
  return 0;
}