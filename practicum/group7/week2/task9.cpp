/*
Напишете програма, която въвежда символ и извежда на конзолата дали символът е буква.
*/

#include <iostream>

using namespace std;

void solution()
{
  char c;
  cin >> c;

  cout << (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))) << endl;
}

int main()
{
  solution();

  return 0;
}