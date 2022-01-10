/*
Да се напише рекурсивна функция, която обръща число.
*/

#include <iostream>

using namespace std;

unsigned int digits(const unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + digits(n / 10);
    }
}

unsigned int ten_to_power(const unsigned int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else
    {
        return 10 * ten_to_power(pow - 1);
    }
}

unsigned int reverse(const unsigned int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10) * ten_to_power(digits(n / 10)) + reverse(n / 10);
    }
}

void solution()
{
    unsigned int n;
    cin >> n;

    cout << reverse(n) << endl;
}

int main()
{
    solution();

    return 0;
}