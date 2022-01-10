/*
Да се напише рекурсивна функция, която превръща число от десетична в двоична бройна система.
*/

#include <iostream>

using namespace std;

unsigned int binary(const unsigned int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return (n % 2) + 10 * binary(n / 2);
    }
}

void solution()
{
    unsigned int n;
    cin >> n;

    cout << binary(n) << endl;
}

int main()
{
    solution();

    return 0;
}