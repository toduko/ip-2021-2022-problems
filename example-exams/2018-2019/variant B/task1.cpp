/*
Подредица на дадена редица a наричаме всяка непрекъсната последователност от елементи на редицата.
Да се дефинира функция unsigned progression (int a[], unsigned n), която намира дължината на най-дългата подредица от нарастващи числа в масива a с n елемента.
Пример: За масива {1, 3, 1, 2, 3, 1} дължината е 3, за масива {4, 3, 2, 1} дължината е 1.
*/
#include <iostream>

using namespace std;

unsigned progression(int a[], unsigned n)
{
  int l_p = 0;

  for (int i = 0, j = 0; i < n; ++j)
  {
    if (a[j] == (a[i] + j - i))
      l_p = (l_p > (j - i + 1)) ? l_p : (j - i + 1);
    else
      i = j;
  }
  return l_p;
}

int main()
{
  int a1[] = {1, 3, 1, 2, 3, 1};
  int a2[] = {4, 3, 2, 1};

  cout << progression(a1, 6) << endl;
  cout << progression(a2, 4) << endl;

  return 0;
}