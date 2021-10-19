/*
Да се провери дали подадено ЕГН е валидно и да се изведе датата на раждане и пола на човека, ако ЕГН-то е валидно.
a. Първите 6 цифри от всяко ЕГН са датата на раждане -
проверете дали е валидна дата.
b. Седмата и осмата цифра отговарят на региона - не е нужна
верификация за целта на тази задача.
c. Деветата цифра отговаря на пола - не е нужна верификация за
целта на тази задача.
d. Десетата цифра е контролна и тя се изчислява по следния
начин:
i. Всяка цифра от ЕГН-то (от 1-вата до 9-тата) се умножава
по тегло, започващо от 2, продължавайки като степени на
двойката (2, 4, 8, 16, 32, 64, ...).
Пример: (ЕГН: 9876543210), 9*2=18, 8*4=32, 7*8=56…
ii. Сбора на тези произведения се дели на 11 и се взима
остатъка.
iii. Ако остатъкът е 10, то контролното число е 0, ако е
по-малко от 10, то контролното число е остатъка.
*/

#include <iostream>
#include <cmath>

using namespace std;

#define is_leap_year(year) ((year % 4 == 0) ? ((year % 100 == 0) ? ((year % 400 == 0) ? true : false) : true) : false)

bool is_valid_date(int yy, int dd, int mm)
{
  bool is_valid;

  switch (mm)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    is_valid = (dd <= 31);
    break;
  case 2:
    is_valid = (dd <= (28 + is_leap_year(yy)));
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    is_valid = (dd <= 30);
    break;
  }

  return is_valid;
}

int string_to_num(char *s, int start, int end)
{
  int num = 0;

  for (int i = start; i < end; ++i)
  {
    num += (s[i] - 48) * pow(10, end - i - 1);
  }

  return num;
}

void solution()
{
  char EGN[11];
  cin.get(EGN, 11);
  try
  {
    for (int i = 0; i < 10; ++i)
    {
      if ((EGN[i] < '0') || (EGN[i] > '9'))
      {
        throw "Input doesn't fully consist of digits.";
      }
    }

    if (!is_valid_date((string_to_num(EGN, 0, 2)), (string_to_num(EGN, 2, 4)), (string_to_num(EGN, 4, 6))))
    {
      throw "Invalid date.";
    }

    int control = 0;

    for (int i = 0; i < 10; ++i)
    {
      control += ((EGN[i] - 48) * pow(2, i + 1));
    }

    control %= 11;

    if (((control < 10) && (control != (EGN[10] - 48))) ^ (control != 0))
    {
      throw "Invalid control number.";
    }

    cout << "day: " << EGN[2] << EGN[3] << " month: " << EGN[4] << EGN[5] << " year: " << EGN[0] << EGN[1] << " gender: " << EGN[8];
  }
  catch (const char msg[])
  {
    cout << msg;
  }
  cout << endl;
}

int main()
{
  solution();

  return 0;
}