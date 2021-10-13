/*
Напишете програма, която извежда текущата година (2021) на конзолата без да използвате цифри.
*/

#include <iostream>

using namespace std;

void solution1()
{
  cout << true + true << false << true + true << true << endl;
}

// Всеки символ може да бъде инкрементиран с 1 и пак ще работи или '%' да се замени с '-' и обратното
void solution2()
{
  cout << (char)('l' % ':') << (char)('j' % ':') << (char)('l' % ':') << (char)('k' % ':') << endl;
}

void solution3()
{
  cout << 'c' - 'a' << 'a' - 'a' << 'c' - 'a' << 'b' - 'a' << endl;
}

int main()
{
  solution1();
  solution2();
  solution3();

  return 0;
}