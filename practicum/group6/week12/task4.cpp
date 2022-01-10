/*
Да се напише рекурсивна функция, която намира произведението на две числа.
*/

#include <iostream>

using namespace std;

unsigned int product(unsigned int a, unsigned int b)
{
    if (a < b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + product(a, b - 1);
    }
}

void solution()
{
    unsigned int a, b;
    cin >> a >> b;

    cout << product(a, b) << endl;
}

int main()
{
    solution();

    return 0;
}