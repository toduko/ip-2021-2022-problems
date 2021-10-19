/*
Двама приятели искат да си уговорят среща за поне 30 минути.
Всеки определя време, в което е свободен, като посочи начален и краен час.
Помогнете им да изберат най-ранен час за срещата си, ако това е възможно, и изведете надпис “No meeting!”, ако не е възможно.
Решението използва структури и предефиниране на оператори за лично удобство.
*/

#include <iostream>

using namespace std;

typedef unsigned short int U16;

struct Time
{
  U16 hh;
  U16 mm;
};

istream &operator>>(istream &is, Time &t)
{
  is >> t.hh;
  if (t.hh > 23)
  {
    throw "Invalid hour";
  }
  is.ignore(1, ':');
  is >> t.mm;
  if (t.mm > 59)
  {
    throw "Invalid minute";
  }
  return is;
}

ostream &operator<<(ostream &os, Time &t)
{
  if (t.hh < 10)
  {
    os << 0;
  }
  os << t.hh;
  os << ':';
  if (t.mm < 10)
  {
    os << 0;
  }
  os << t.mm;
  return os;
}

bool operator==(Time t1, Time t2)
{
  return ((t1.hh == t2.hh) && (t1.mm == t2.mm));
}

bool operator>(Time t1, Time t2)
{
  return ((t1.hh > t2.hh) || ((t1.hh == t2.hh) && (t1.mm > t2.mm)));
}

bool operator>=(Time t1, Time t2)
{
  return ((t1 > t2) || (t1 == t2));
}

bool operator<(Time t1, Time t2)
{
  return ((t1.hh < t2.hh) || ((t1.hh == t2.hh) && (t1.mm < t2.mm)));
}

bool operator<=(Time t1, Time t2)
{
  return ((t1 < t2) || (t1 == t2));
}

int operator-(Time t1, Time t2)
{
  if (t1.mm < t2.mm)
  {
    return (t1.hh - t2.hh - 1) * 60 + (60 + t1.mm - t2.mm);
  }
  else
  {
    return (t1.hh - t2.hh) * 60 + (t1.mm - t2.mm);
  }
}

void solution()
{
  Time s1, e1, s2, e2;
  try
  {
    cin >> s1 >> e1 >> s2 >> e2;

    if (s1 > s2 ? ((s1 <= e2) && (e2 - s1 >= 30) && (e1 - s1 >= 30)) : ((s2 <= e1) && (e1 - s2 >= 30) && (e2 - s2 >= 30)))
    {
      cout << ((s1 > s2) ? s1 : s2);
    }
    else
    {
      cout << "No meeting!";
    }
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