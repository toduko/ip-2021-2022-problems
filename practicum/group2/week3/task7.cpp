/*
Въвежда се час и се извежда “Good morning!”, “Good day!”, “Good evening!” или “Good night!”.
Проверете дали часът е валиден!
*/

#include <iostream>

using namespace std;

#define is_between(n, a, b) ((n >= a) && (n < b))

void solution()
{
  int hours, minutes;
  cin >> hours >> minutes;

  if (((hours >= 0) && (hours < 24)) && ((minutes >= 0) && (minutes < 60)))
  {
    cout << "Good ";
    if (is_between(hours, 6, 12))
    {
      cout << "morning";
    }
    else if (is_between(hours, 12, 17))
    {
      cout << "day";
    }
    else if (is_between(hours, 17, 20))
    {
      cout << "evening";
    }
    else
    {
      cout << "night";
    }
  }
  else
  {
    cout << "Wrong time";
  }
  cout << '!' << endl;
}

int main()
{
  solution();
  
  return 0;
}