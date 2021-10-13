/*
Да се напише програма, която въвежда число. Ако то не е в интервала 1075 и 8001 да се отпечата съобщение за грешка. Ако е в този интервал, да се провери дали се дели на 2 и на 5. Дали се дели на 6? Дали се дели на 21?
*/

#include <iostream>

using namespace std;

void solution()
{
  unsigned int num;
  cin >> num;

  if (num < 1075 || num > 8001)
  {
    cout << "Error.\n";
  }
  else
  {
    cout << (num % 10 == 0) << endl;
    cout << (num % 6 == 0) << endl;
    cout << (num % 21 == 0) << endl;
  }
}

int main()
{
  solution();

  return 0;
}