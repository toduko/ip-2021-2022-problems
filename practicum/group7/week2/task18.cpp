/*
Напишете програма, която да приема цяло число между 1 и 12 и цяло число за година. Да извежда броя дни в съответния месец като използвате горната програма, за да проверите дали годината е високосна. Реализирайте програмата използвайки:
- if-else оператор
- switch оператор
*/

#include <iostream>

using namespace std;

#define is_leap_year(year) ((year % 4 == 0) ? ((year % 100 == 0) ? ((year % 400 == 0) ? true : false) : true) : false)

void solution1()
{
  unsigned int month, year;
  cin >> month;
  cin >> year;

  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << 31 << endl;
    break;
  case 2:
    cout << 28 + is_leap_year(year) << endl;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    cout << 30 << endl;
    break;
  default:
    cout << "Invalid month.\n";
    break;
  }
}

void solution2()
{
  unsigned int month, year;
  cin >> month;
  cin >> year;

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
  {
    cout << 31 << endl;
  }
  else if (month == 2)
  {
    cout << 28 + is_leap_year(year) << endl;
  }
  else if (month == 4 || month == 6 || month == 9 || month == 1)
  {
    cout << 30 << endl;
  }
  else
  {
    cout << "Invalid month.\n";
  }
}

int main()
{
  solution1();
  solution2();

  return 0;
}