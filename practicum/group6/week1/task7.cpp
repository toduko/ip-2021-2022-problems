/*
Напишете потребителски интерфейс, който изисква от потребителя да въведе количество от даден продукт (по ваш избор) и цената му.
Нека софтуерът попита за три различни продукта. Накрая изведете сметка на потребителя:
какъв брой от какво си е поръчал и колко ще му струва.
*/

#include <iostream>

using namespace std;

void solution()
{
  int apples, oranges, bananas;
  double apple_price, orange_price, banana_price;

  cout << "Apples: ";
  cin >> apples >> apple_price;

  double apple_total = apples * apple_price;

  cout << "Oranges: ";
  cin >> oranges >> orange_price;

  double orange_total = oranges * orange_price;

  cout << "Bananas: ";
  cin >> bananas >> banana_price;

  double banana_total = bananas * banana_price;

  double total = apple_total + orange_total + banana_total;

  cout << "Your order is: apples for " << apple_total << ", oranges for " << orange_total << " and bananas for " << banana_total << ".\nTotal: " << total << endl;
}

int main()
{
  solution();

  return 0;
}