/*
Огледалното на дадено число наричаме това, съставено от цифрите му в обратен ред.
Да се въведе четирицифрено число и да се изведе обратното му.
*/

#include <iostream>

using namespace std;

void solution()
{
  int num, temp;
  cout << "a = ";
  cin >> num;

  if (((num / 10000) > 0) || ((num / 1000) == 0))
  {
    cout << "Number is not four digit\n";
  }
  else
  {
    cout << "mirror a: " << (num % 10) << ((num / 10) % 10) << ((num / 100) % 10) << ((num / 1000) % 10);
  }
}

int main()
{
  solution();

  return 0;
}