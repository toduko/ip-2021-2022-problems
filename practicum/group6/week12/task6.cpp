/*
Да се напише рекурсивна функция, която проверява дали число е просто.
*/

#include <iostream>

using namespace std;

bool is_prime(const unsigned int n, const unsigned int i = 2)
{
    if (i * i > n || n == 2)
    {
        return true;
    }
    if (n % i == 0 || n < 2)
    {
        return false;
    }
    return is_prime(n, i + 1);
}

void solution()
{
    unsigned int n;
    cin >> n;

    cout << is_prime(n) << endl;
}

int main()
{
    solution();

    return 0;
}