/*
Да се реализира рекурсивна функция която връща n!
*/

#include <iostream>

using namespace std;

unsigned int fac(const unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}

void solution()
{
    unsigned int n;
    cin >> n;

    cout << fac(n) << endl;
}

int main()
{
    solution();

    return 0;
}