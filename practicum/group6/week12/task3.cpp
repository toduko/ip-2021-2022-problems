/*
Да се напише рекурсивна функция, която намира сумата на цифрите на число.
*/

#include <iostream>

using namespace std;

unsigned int sum_digits(const unsigned int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return n % 10 + sum_digits(n / 10);
    }
}

void solution()
{
    unsigned int n;
    cin >> n;

    cout << sum_digits(n) << endl;
}

int main()
{
    solution();

    return 0;
}