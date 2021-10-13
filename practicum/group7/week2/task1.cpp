/*
Проверете размера на всяка променлива използвайки командата sizeof(<data-type>) за всяки от следните видове променливи:
- int
- long
- double
- float
- bool
- char
- short
- unsigned int
- unsigned long int
- unsigned long long
*/

#include <iostream>

using namespace std;

void solution()
{
  cout << sizeof(int) << endl;
  cout << sizeof(long) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(bool) << endl;
  cout << sizeof(char) << endl;
  cout << sizeof(short) << endl;
  cout << sizeof(unsigned int) << endl;
  cout << sizeof(unsigned long int) << endl;
  cout << sizeof(unsigned long long) << endl;
}

int main()
{
  solution();

  return 0;
}