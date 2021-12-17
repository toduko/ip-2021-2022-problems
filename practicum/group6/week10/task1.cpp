/*
Напишете функция с тип void plusFive(int* a);, която добавя 5 към подадена стойност.
*/

#include <iostream>

using namespace std;

void plus_five(int *a)
{
	*a += 5;
}

void solution()
{
	int a;
	cin >> a;

	plus_five(&a);
	cout << a << endl;
}

int main()
{
	solution();

	return 0;
}