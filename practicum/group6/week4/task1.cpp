/*
Да се напише функция, която при подадени два параметъра m и n връща сумата на числата в интервала [m, n].
*/

#include <iostream>

using namespace std;

int sum(int n)
{
    return n * (n + 1) / 2;
}

int sum_between(int n, int m)
{
    return (sum(m) - sum(n - 1));
}

void solution()
{
    int n, m;
    cin >> n >> m;

    if (m < n)
    {
        m ^= n;
        n ^= m;
        m ^= n;
    }

    cout << sum_between(n, m) << endl;
}

int main()
{
    solution();
    
    return 0;
}