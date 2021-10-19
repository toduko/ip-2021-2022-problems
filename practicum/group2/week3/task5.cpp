/*
Изведете най-близката степен на 2, която е по-голяма от подадено цяло, неотрицателно число N (без цикли!).
*/

#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
  unsigned int n;
  cin >> n;
  cout << floor(log2(n)) + 1 << endl;
}

int main()
{
  solution();
  
  return 0;
}